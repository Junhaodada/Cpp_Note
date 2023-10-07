#include <cstdio>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
void test_shared_pointer() {
  // shared_pointer 初始化：
  // 常规初始化
  //   shared_ptr<string> p1;
  //   //   shared_ptr<int> p2 = new int;
  //   shared_ptr<int> p2(new int);
  //   int *p = new int;
  //   shared_ptr<int> p3(p);  // 不建议

  shared_ptr<int> p2 = make_shared<int>(100);
  shared_ptr<string> p3 = make_shared<string>(5, 'a');
  shared_ptr<int> p4 = make_shared<int>();
  shared_ptr<int> p4_1 = p4;
  cout << p4.use_count() << endl;
  p4 = make_shared<int>(400);  // 上面对象释放
  cout << p4.use_count() << endl;
}
int main() {
  test_shared_pointer();
  return 0;
}