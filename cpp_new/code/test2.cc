#include <iostream>
using namespace std;

class Human {
 private:
 public:
  Human();
  Human(int);
  virtual ~Human();
  Human(const Human &h) { cout << "Human拷贝构造函数" << endl; };
  Human &operator=(const Human &h) {
    m_Age = h.m_Age;
    return *this;
  }

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
  friend void func(const Men &m);

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
  void funcmen() const { cout << "funcmen" << endl; }

 private:
  void funcmen2() const { cout << "funcmen2" << endl; }
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
  virtual void eat() { cout << "Men2" << endl; }
};
void func(const Men &m) {
  m.funcmen();
  m.funcmen2();
}
// class A
// {
// public:
//   // friend class B;
//   friend void B::callA(int x, A &a);

// private:
//   int data;
// };
// class B
// {

// public:
//   void callA(int x, A &a)
//   {
//     a.data = x;
//     cout << a.data << endl;
//   }
// };

class A {
 public:
  A(int i) : m_value(i) {}
  virtual ~A() = default;

 private:
  int m_value;
};
class B : public A {
 public:
  B(int i, int j, int k) : A(i), m_value2(k) {}

 private:
  int m_value2;
};
int main(int argc, char const *argv[]) {
  // Men men;
  // men.samenamefunc();
  // men.Human::samenamefunc();
  // men.samenamefunc(10);

  // Human* phuman1 = new Human;
  // Human* phuman2 = new Men;
  // phuman1->funchuman();
  // phuman2->funchuman();
  // Human *phuman = new Men;
  // phuman->eat();
  // delete phuman;

  // phuman = new Women;
  // phuman->eat();
  // delete phuman;

  // phuman = new Human;
  // phuman->eat();
  // delete phuman;

  // Human2* phuman2 =new Human2; // 报错
  // Human2 *phuman3 = new Men2;
  // phuman3->eat();

  // 友元函数
  // Men men;
  // men.funcmen();
  // func(men);

  // 友元类
  // A a;
  // B b;
  // b.callA(10, a);

  // RTTI
  // Human *phuman = new Men;
  // Men *p = (Men *)(phuman);
  // p->funcmen();
  // try {
  //   Men *pmen = dynamic_cast<Men *>(phuman);
  //   pmen->funcmen();
  // } catch (bad_cast) {
  //   cout << "转换失败" << endl;
  // }
  // Human &q = *phuman;
  // cout << typeid(*phuman).name() << endl;  // 3Men
  // cout << typeid(q).name() << endl;        // 3Men

  // char a[10];
  // int i;
  // double b;
  // cout << typeid(a).name() << endl;  // A10_c
  // cout << typeid(i).name() << endl;  // i
  // cout << typeid(b).name() << endl;  // d

  // B b{1, 2, 3};
  // Human *phuman = new Men;
  // Human &q = *phuman;


  Men m;
  Human h(m);

  Men m;
  Human h;
  h=m;
  return 0;
}
