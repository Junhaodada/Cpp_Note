#include <cstdio>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
void myfunc(shared_ptr<int> ptmp) {
  cout << ptmp.use_count() << endl;
  return;
}
shared_ptr<int> myfunc2(shared_ptr<int>& ptmp) { return ptmp; }
void test() {
  auto p6 = make_shared<int>(100);
  auto p7(p6);
  cout << p6.use_count() << endl;
  cout << p7.use_count() << endl;
  myfunc(p7);
  auto p8 = myfunc2(p7);
  cout << p7.use_count() << endl;
}
int main() {
  test();
  return 0;
}