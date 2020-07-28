#pragma once

#include <string>

using namespace std;

class Generator {
  int max;
  
  int sign, term1, term2;
  string op;

  int res[2];

  int user_result[2];

  public:
  /* Generate maximum */
  int maximum(int argc, char **argv);
  int get_max();

  /* Generate operation */
  int operation();
  string get_op();
  int get_sign();
  int get_term1();
  int get_term2();
  void set_op(string op, int sign, int term1, int term2);

  /* Generate result */
  int *result();
  int *get_result();

  /* Verify the result */
  int verify(string user_res);
};
