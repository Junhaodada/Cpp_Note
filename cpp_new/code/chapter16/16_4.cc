#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;
void test() {
  auto pi = make_shared<int>(100);
  weak_ptr<int> piw(pi);
  cout << piw.use_count() << endl;
  cout << pi.use_count() << endl;
  weak_ptr<int> piw2 = piw;

  cout << piw.use_count() << endl;
  cout << pi.use_count() << endl;
  //   pi.reset();
  auto pi2 = piw2.lock();
  if (pi2 != nullptr) {
    cout << "对象存在" << endl;
  }
  cout << pi.use_count() << endl;
}
void test4() {
  int *p = nullptr;
  auto pi = make_shared<int>(100);
  weak_ptr<int> piw = pi;
  cout << sizeof(p) << endl;
  cout << sizeof(pi) << " " << sizeof(piw) << endl;
}
int main() {
  test4();
  return 0;
}