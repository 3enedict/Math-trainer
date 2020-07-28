#include <cstdio>
#include <iostream>
#include <string>
#include "math.h"

using namespace std;

int main(int argc, char **argv) {
  Math math;
  int color = 1;
  char *colors[2] = {(char *)"\033[0;31m", (char *)"\033[0;32m"};

  cout << "Maximum is set to " << math.maximum(argc, argv) << endl;

  while (1) {
    printf("%s", colors[color]);
    cout << math.operation();
    printf("\033[0m");

    math.result();

    string user_res;
    cin >> user_res;
    color = math.verify(user_res);
  }
}
