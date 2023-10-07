#include "User.h"
#include "gmock/gmock.h"
class MockUser : User {
 public:
  MOCK_METHOD(int, getAge, (), (override));
};