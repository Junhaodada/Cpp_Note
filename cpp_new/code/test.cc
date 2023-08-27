#include <iostream>
using namespace std;
class Time{
public:
  Time();
  ~Time();
  Time(int tmphour, int tmpminute, int tmpsec): Hour(tmphour), Minute(tmpminute), Sec(tmpsec) {}
  int Hour;
  int Minute;
  int Sec;
  void addHour() {
    Hour += 10;
  }
  void noone() const {
    // Hour += 10;
    cout << "const func" << endl;
  }
private:
  
};

Time::Time() {
  Hour = 0;
  Minute = 0;
  Sec = 0;
}
Time::~Time() {
}
int main (int argc, char *argv[]) {
  const Time abc;
  // abc.noone();
  // abc.addHour();
  abc.noone();
  cout << abc.Hour << endl;
   
  return 0;
}
