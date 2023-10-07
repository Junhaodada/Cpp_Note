#include <iostream>

#include "MockUser.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
int add(int a, int b) { return a + b; }
TEST(testCase1, should3_when_give_2_and_1) { EXPECT_EQ(add(2, 1), 3); }

TEST(testCase2, test_get_age) {
  MockUser user;
  EXPECT_CALL(user, getAge)
      .Times(testing::AtLeast(3))
      .WillOnce(testing::Return(200))
      .WillOnce(testing::Return(300))
      .WillRepeatedly(testing::Return(500));
  std::cout << user.getAge() << std::endl;
  std::cout << user.getAge() << std::endl;
  std::cout << user.getAge() << std::endl;
}
class MyClass {
 public:
  virtual ~MyClass() {}
  virtual void doSomething() {}
};

class MockClass : public MyClass {
 public:
  MOCK_METHOD(void, doSomething, (), (override));
};

TEST(MyClassTest, TestDoSomething) {
  // 创建 Mock 对象
  MockClass mock;

  // 设置 Mock 对象的行为
  EXPECT_CALL(mock, doSomething());

  // 调用被测试方法
  mock.doSomething();
}
int main(int argc, char **argv) {
  std::cout << "Hello, from test_demo!\n";
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
