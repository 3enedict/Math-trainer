#include <cstdio>
#include <iostream>
#include <string>
#include "math.h"

using namespace std;

int main(int argc, char **argv) {
  Generator gen;

  gen.maximum(argc, argv);
  cout << "Maximum is set to " << gen.get_max() << endl;

  gen.operation();
  cout << gen.get_op();

  gen.result();

  string user_res;
  cin >> user_res;
  if(gen.verify(user_res)) {
    printf("mfdd");
  } else {
    printf("fkds");
  }
}
