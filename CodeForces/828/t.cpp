#include <iostream>
using namespace std;

int highestPowerOf2(int n) { return (n & (~(n - 1))); }

int main() {
  int n = 48;
  cout << highestPowerOf2(n);
  return 0;
}