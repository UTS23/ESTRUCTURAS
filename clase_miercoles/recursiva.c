#include<iostream>
using namespace std;

int fib(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fib(x-1)+fib(x-2);
}

int main() {
    cout << fib(3) << endl;
    return 0;
int fib(int n, bool print = true)
{
  int toReturn = 0;

  if( n > 0 )
  {
    if( n < 2 )
      toReturn = 1;
    else
     toReturn = fib(n-1,false) + fib(n-2,false);

    if( print )
    {
      fib(n-1);
      std::cout << toReturn << ' ';
    }
  }

  return toReturn;
}

int main() {
  fib(5); std::cout << '\n';
  fib(8); std::cout << '\n';
  return }
