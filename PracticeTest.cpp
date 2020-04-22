/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome1)
{
    Practice obj;
    bool actual = obj.isPalindrome("AA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome("A A");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome3)
{
    Practice obj;
    bool actual = obj.isPalindrome("A a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome4)
{
    Practice obj;
    bool actual = obj.isPalindrome("A a ");
    ASSERT_TRUE(actual);
}



TEST(PracticeTest, sortDescending)
{
  Practice obj;
  int a = 3;
  int b = 2;
  int c = 1;

  obj.sortDescending(a, b, c);
  ASSERT_GT(a, b);
  ASSERT_GT(b, c);
}

TEST(PracticeTest, sortDescending1)
{
  Practice obj;
  int a = 3;
  int b = 1;
  int c = 2;

  obj.sortDescending(a, b, c);
  ASSERT_GT(a, b);
  ASSERT_GT(b, c);
}

TEST(PracticeTest, sortDescending2)
{
  Practice obj;
  int a = 1;
  int b = 2;
  int c = 3;

  obj.sortDescending(a, b, c);
  ASSERT_GT(a, b);
  ASSERT_GT(b, c);
}
