#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> p = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};

int r(int n) { return p[n]; }
int main() {
  int n;
  cin >> n;

  cout << r(n) << "\n";
}
