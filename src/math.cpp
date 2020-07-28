#include <string>
#include <sys/time.h>
#include <random>
#include <functional>
#include "math.h"

using namespace std;

int Generator::maximum(int argc, char **argv) {
  char argument[6];
  if (argc > 1) {
    snprintf(argument, 6, "%s", argv[1]);
    max = atoi(argument);
    for(int i = 0; argument[i] != '\0'; i++) {
      if(argument[i] != '0' && argument[i] != '1' && argument[i] != '2' && argument[i] != '3' && argument[i] != '4' && argument[i] != '5' && argument[i] != '6' && argument[i] != '7' && argument[i] != '8' && argument[i] != '9') {
        max = 100;
        return 0;
      }
    }
  }

  max = (max > 10000 || max < 2) ? 100 : max;
  return 1;
}

int Generator::get_max() { return max; }


int Generator::operation() {
  struct timeval t;
  gettimeofday(&t, NULL);
  mt19937::result_type seed = t.tv_usec;
  auto term_rand = bind(uniform_int_distribution<int>(2,max), mt19937(seed));
  term1 = term_rand();
  term2 = term_rand();

  auto sign_rand = bind(uniform_int_distribution<int>(0,3), mt19937(seed));
  sign = sign_rand();
  char sign_char[4] = {'+', '-', 'x', '/'};

  op = to_string(term1) + " " + sign_char[sign] + " " + to_string(term2) + " = ";

  return 1;
}

void Generator::set_op(string _op, int _sign, int _term1, int _term2) {
  op = _op;
  sign = _sign;
  term1 = _term1;
  term2 = _term2;
}

string Generator::get_op() { return op; }
int Generator::get_sign() { return sign; }
int Generator::get_term1() { return term1; }
int Generator::get_term2() { return term2; }


int *Generator::result() {
  if (sign < 3) {
    int results[3] = {term1 + term2, term1 - term2, term1 * term2};
    res[0] = results[sign];
  } else {
    int a = term1;
    int b = term2;

    while(b != 0) {
      int t = b;
      b = a % b;
      a = t;
    }

    res[0] = term1 / a;
    res[1] = term2 / a;
  }

  return res;
}

int *Generator::get_result() { return res; }


int Generator::verify(string user_res) {
  if(user_res.find_first_not_of("0123456789/-") == string::npos && user_res.size() < 6) {
    if (user_res.find('/') != string::npos) {
      sscanf(user_res.c_str(),"%d/%d",&user_result[0],&user_result[1]);
      if(user_result[0] == res[0] && user_result[1] == res[1])
        return 1;
    } else if(stoi(user_res) == res[0])
      return 1;
  }

  return 0;
}
