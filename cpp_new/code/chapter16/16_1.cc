#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  //   int* pointi = new int;  // 动态new int对象若未给初值则初值是不确定的
  //   string* mystr = new string;  // 空的字符串
  int* pointi = new int(100);  // 动态new int对象若未给初值则初值是不确定的
  string* mystr = new string(5, 'a');  // 空的字符串
  vector<int>* pointv = new vector<int>{1, 2, 3, 4, 5};

  int* pi = new int;
  return 0;
}