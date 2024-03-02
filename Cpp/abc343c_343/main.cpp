#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
#define fi(i, N) for (int i = 0; i < N; ++i)

bool isPalindrome(ll num) {
  std::string str = std::to_string(num);
  unsigned ll i = 0, j = str.length() - 1;
  while (i < j) {
    if (str[i] != str[j]) {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  unsigned ll n;
  cin >> n;
  unsigned ll x = cbrt(n);
  while (!isPalindrome(x * x * x)) {
    x--;
  }
  cout << x * x * x << "\n";
}
