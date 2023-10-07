#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
template <typename T, int size = 10>
class myarray {
 private:
  T arr[size];

 public:
  void mufunc();
};
template <typename T, int size>
void myarray<T, size>::mufunc() {
  cout << size << endl;
}
int main() {
  myarray<int, 100> tmparr;
  tmparr.mufunc();
  return 0;
}