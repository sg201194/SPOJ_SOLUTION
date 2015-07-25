#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
  while (1) {
    long long a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) {
      break;
    }
    int car = 0, num = 0;
    while (a || b) {
      car = ((a % 10) + (b % 10) + car >= 10);
      num += car;
      a = a/10;
      b =b/10;
    }
    if (!num) {
      cout << "No carry operation." << endl;
    } else if (num == 1) {
      cout << "1 carry operation." << endl;
    } else {
      cout << num << " carry operations." << endl;
    }
  }
  return 0;
}
