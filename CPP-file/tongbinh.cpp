#include <iostream>
#include <cmath>

int main() {
  int n;
  int tongtinh =0;
  std:: cout << "NHap so n: ";
  std:: cin >> n;
  for(int i =1; i <=n; ++i) {
    tongtinh += pow(i,2);
  }
  std:: cout << tongtinh;

  return 0;
}