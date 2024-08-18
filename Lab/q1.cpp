// WAP to check if a given matrix is a magic square in Cpp
#include <iostream>
#include <vector>
using namespace std;

bool isMagicSquare(vector<vector<int>> matrix) {
  int n = matrix.size();
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += matrix[i][i];
  }
  for (int i = 0; i < n; i++) {
    int rowSum = 0;
    int colSum = 0;
    for (int j = 0; j < n; j++) {
      rowSum += matrix[i][j];
      colSum += matrix[j][i];
    }
    if (rowSum != sum || colSum != sum) {
      return false;
    }
  }
  int diagSum = 0;
  for(int i =0;i<n;i++){
    diagSum+=matrix[i][i];
  }
  if(diagSum!=sum){
    return false;
  }
  int diagSum2 = 0;
  for(int i =0;i<n;i++){
    diagSum2+=matrix[i][n-i];
  }
  if(diagSum2!=sum){
    return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> matrix(n,vector<int>(n));
  for(int i = 0;i<n;i++){
    for(int j =0;j<n;j++){
      cin >> matrix[i][j];
    }
  }
  cout << isMagicSquare(matrix) << endl;

  return 0;
}




























