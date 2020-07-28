#include <cstdio>
#include <iostream>
#include <string>
#include "math.h"

using namespace std;

int main(int argc, char **argv) {
  Generator gen;
  int color = 1;
  char *colors[2] = {(char *)"\033[0;31m", (char *)"\033[0;32m"};

  gen.maximum(argc, argv);
  cout << "Maximum is set to " << gen.get_max() << endl;

  while (1) {
    gen.operation();
    printf("%s", colors[color]);
    cout << gen.get_op();
    printf("\033[0m");

    gen.result();

    string user_res;
    cin >> user_res;
    color = gen.verify(user_res);
  }
}
