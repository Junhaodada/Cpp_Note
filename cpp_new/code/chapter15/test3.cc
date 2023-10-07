#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
template <typename>
class myvector {
 public:
  typedef T* myiterator;

 public:
  myvector();
  myvector operator&=(const myvector&);
  ~myvector();
};

int main() { return 0; }