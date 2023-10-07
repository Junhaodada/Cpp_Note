#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class myvector {
 public:
  typedef T* myiterator;

 public:
  myvector();
  myvector& operator&=(const myvector&);

 public:
  myiterator mybegin();
  myiterator myend();

  // 类模版成员函数定义
  void myfunc0() {}
  // 类模版成员函数声明
  void myfunc();
};

// 类模版成员函数实现
template <typename T>
void myvector<T>::myfunc() {}

template <typename T>
myvector<T>& myvector<T>::operator&=() &= (const myvector<T>&) {}

int main() {
  myvector<int> tmpvec1;
  myvector<double> tmpvec2;
  return 0;
}