#include <iostream>
#include <string>
#include <thread>
#include <vector>
using namespace std;
// 线程开始结束
void myprint() {
  cout << "myprint开始执行" << endl;
  cout << "..." << endl;
  cout << "myprint执行结束" << endl;
}
void test2() {
  cout << "main开始执行" << endl;
  thread mytobj(myprint);
  mytobj.join();
  cout << "main执行结束" << endl;
}
// detach测试
void myprint2() {
  cout << "myprint开始执行1" << endl;
  cout << "myprint开始执行1" << endl;
  cout << "myprint开始执行1" << endl;
  cout << "myprint开始执行2" << endl;
  cout << "myprint开始执行2" << endl;
  cout << "myprint开始执行2" << endl;
  cout << "myprint开始执行3" << endl;
  cout << "myprint开始执行3" << endl;
  cout << "myprint开始执行3" << endl;
}
void tests2_1() {
  cout << "main开始执行" << endl;
  thread mytobj(myprint2);
  mytobj.detach();  // 主进程执行结束即退出不会等待子进程
  cout << "main执行结束" << endl;
}
// joinable
void test2_2() {
  thread mytobj(myprint);
  cout << mytobj.joinable() << endl;
}
// 其他方法创建线程
class TA {
 private:
 public:
  void operator()() {
    cout << "TA() 执行" << endl;
    cout << "TA() 结束" << endl;
  }
};
void test2_3() {
  TA ta;
  thread mytobj(ta);
  mytobj.join();

  auto mylambda = [] {
    cout << "mylambda开始" << endl;
    cout << "mylambda结束" << endl;
  };
  thread mytobj2(mylambda);
  mytobj2.join();
}
int main() {
  test2_3();
  return 0;
}