#include <iostream>
using namespace std;
int main()
{
  int a = 1;
  cout << ++a + a++ << endl;
  // 3
  a = 1;
  cout << (++a + a++) + --a << endl;
  // 2
  a = 1;
  cout << ++a + a++ + --a + a-- << endl;
  // 2
  a = 1;
  cout << ++a + a++ + --a + a-- + ++a;
  // 2
  cout << a;
  return 0;
}
