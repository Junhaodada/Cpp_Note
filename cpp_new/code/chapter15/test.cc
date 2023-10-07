#include <iostream>
using namespace std;
class Tmpclass
{
public:
  Tmpclass(int t = 10) : tmp(t) { cout << "tmp 构造函数" << endl; }
  // Tmpclass(int tmp = 0){}
  Tmpclass(const Tmpclass &tmpclass) { cout << " tmp 拷贝构造函数" << endl; }
  Tmpclass &operator=(const Tmpclass &) { return *this; }
  int tmp;
};
class Time
{
public:
  Time();
  // ~Time();
  Time(int tmphour, int tmpminute, int tmpsec)
      : Hour(tmphour), Minute(tmpminute), Second(tmpsec), tmpclass(12) {}
  // Time(const Time &tmptime, int a = 3);
  int Hour;
  int Minute;
  int Second{10};
  Tmpclass tmpclass;
  // const int testvalue;

  bool operator==(Time &t);
  Time &operator=(const Time &t);

private:
};
Time::Time() { cout << "调用默认构造函数" << endl; }
bool Time::operator==(Time &t)
{
  if (Hour == t.Hour)
  {
    return true;
  }
  return false;
}
Time &Time::operator=(const Time &t)
{
  Hour = t.Hour;
  Minute = t.Minute;
  // ...
  return *this;
}
// Time::Time(const Time &tmptime, int a)
//     : tmpclass(tmptime.tmpclass), Hour(tmptime.Hour) {
//   cout << "调用拷贝构造函数" << endl;
// }
// Time::Time(): testvalue(10) {
//   Hour = 0;
//   Minute = 0;
//   Second = 0;
//   cout << "执行Time默认构造函数" << endl;
// }
// Time::~Time() {}

// void WriteTime(Time &mytime) {
//   // 类相关非成员函数
//   // 传引用,可以避免对象复制产生的损耗
//   cout << mytime.Hour << endl;
// }

// void test14_4() {
//   Time time;
//   WriteTime(time);

//   cout << time.Second << endl;
//   // Time time2(1, 2, 3);
//   // cout << time2.Second << endl;
// }
void test14_5()
{
  Time mytime(1, 2, 3);    // 默认构造函数
  Time mytime2 = mytime;   // 拷贝构造函数 ,隐式转换
  Time mytime3(mytime);    // 拷贝构造函数
  Time mytime4{mytime};    // 拷贝构造函数
  Time mytime5 = {mytime}; // 拷贝构造函数 ,隐式转换
  Time mytime6;            // 默认构造函数
  mytime6 = mytime5;
}

int main(int argc, char *argv[])
{
  test14_5();
  return 0;
}
