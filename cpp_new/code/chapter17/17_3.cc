#include <iostream>
#include <string>
#include <thread>
#include <vector>
using namespace std;
void myprint(const int& i, char* pmybuf) {
  cout << i << endl;
  cout << pmybuf << endl;
  return;
}
void test1() {
  int mvar = 1;
  int& myva = mvar;
  char mybuf[] = "this is a test";
  thread mytobj(myprint, mvar, mybuf);
  mytobj.join();
}
int main() {
  test1();
  return 0;
}