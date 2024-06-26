#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,N) for(int i = 0; i < N; ++i)

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &i:a){
    cin >> i;
  }
  sort(a.begin(),a.end());
  bool flag = 0;
  fi(i,n){
    if(a[i]==a[i+1]){
      flag =1;
      break;
    }
  }
  if(!flag){
    cout << "YES" << "\n";
    return;
  }
}

// write a function to find gcd of any amount of numbers given as parameters


```cpp
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(int nums[], int size) {
    int result = nums[0];
    for (int i = 1; i < size; ++i) {
        result = gcd(result, nums[i]);
    }
    return result;
}

int main() {
    int nums[] = {48, 18, 30, 84};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = findGCD(nums, size);

    std::cout << "GCD of the numbers is: " << result << std::endl;

    return 0;
}
```  

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int gcd(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}
int main(){
  // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    solve();
