#include <iostream>

using namespace std;

int main()
{
  int t,p;
  long long unsigned int a,b,c;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> p;
    a = 0;
    b = 1;
    c = 0;
    for (int i = 0; i < p; i++) {
      a = b;
      b = c;
      c = a + b;
    }
    cout << "Fib("<< p <<") = "<< c << "\n";
  }
}
