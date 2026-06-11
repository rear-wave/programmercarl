#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
  int n, a, b;
  cin >> n;
  vector<int> vector(n);
  int count = 0;
  for(int i = 0; i < n; i++){
    cin >>vector[i];
    count += vector[i];
    vector[i] = count; 
  }
  int sum = 0;
  while(cin >> a >> b){
    sum = vector[b] - vector[a - 1];
    cout << sum << endl;
  }

}