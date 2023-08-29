#include <iostream>
using namespace std;

class Human {
 private:
 public:
  Human();
  Human(int);
  virtual ~Human();

 public:
  int m_Age;
  char m_Name[100];
  void samenamefunc() { cout << "Human samename" << endl; }
  void samenamefunc(int a) { cout << "Human samename2" << endl; }
  void funchuman() { cout << "父类成员函数" << endl; }
  virtual void eat();

 protected:
  int m_pro;
  void funcpro(){};

 private:
  int m_priv;
  void funcpriv(){};
};

Human::Human() { cout << "执行Human()构造函数" << endl; }
Human::Human(int age) { cout << "执行Human(int age)构造函数" << endl; }

Human::~Human() { cout << "执行Human()析构函数" << endl; }
void Human::eat() { cout << "人类喜欢吃各种食物" << endl; }
class Men : public Human {
 private:
 public:
  Men();
  ~Men();

  using Human::samenamefunc;
  void samenamefunc() {
    Human::samenamefunc();
    samenamefunc(10);
    cout << "Men samename" << endl;
  }
  void funmen() { cout << "子类成员函数" << endl; }

  virtual void eat() override;
};
Men::Men() { cout << "执行Men()构造函数" << endl; }

Men::~Men() { cout << "执行Men()析构函数" << endl; }
void Men::eat() { cout << "男人喜欢吃面食" << endl; }
class Women : public Human {
 private:
 public:
  Women();
  ~Women();
  virtual void eat() override;
};

void Women::eat() { cout << "女人喜欢吃面食" << endl; }
Women::Women() { cout << "执行Women()析构函数" << endl; }

Women::~Women() { cout << "执行Women()析构函数" << endl; }

class Human2 {
 public:
  virtual void eat() = 0;
};
class Men2 : public Human2 {
  virtual void eat() {
    cout <<"Men2"<<endl;
  }
};
int main(int argc, char const* argv[]) {
  // Men men;
  // men.samenamefunc();
  // men.Human::samenamefunc();
  // men.samenamefunc(10);

  // Human* phuman1 = new Human;
  // Human* phuman2 = new Men;
  // phuman1->funchuman();
  // phuman2->funchuman();
  Human* phuman = new Men;
  phuman->eat();
  delete phuman;

  // phuman = new Women;
  // phuman->eat();
  // delete phuman;

  // phuman = new Human;
  // phuman->eat();
  // delete phuman;

  // Human2* phuman2 =new Human2; // 报错
  Human2* phuman3 = new Men2;
  phuman3->eat();
  return 0;
}
