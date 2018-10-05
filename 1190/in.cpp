#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  char o;
  double number;
  double res;
  int c = 0;
  cin >> o;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> number;
      if (j + i > 11 &&  i < j) {
          res += number;
          c++;
    }
  }
}if (o == 'S') {
      printf("%.1f\n", res);
}else{
    printf("%.1f\n", res/c);;
}

  return 0;
}
