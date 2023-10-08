#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;
// test1
shared_ptr<int> create0(int value) { return make_shared<int>(value); }
shared_ptr<int> myfunc(int value) {
  shared_ptr<int> ptmp = create0(value);
  return ptmp;
}
void test1() { auto p11 = myfunc(10);

// test2

cout << p11.use_count()<<endl; }
int main() {
  test1();
  return 0;
}