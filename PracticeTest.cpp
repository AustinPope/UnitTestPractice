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
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome5)
{
    Practice obj;
    bool actual = obj.isPalindrome("aaAA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome6)
{
    Practice obj;
    bool actual = obj.isPalindrome("aAaA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome7)
{
    Practice obj;
    bool actual = obj.isPalindrome("AaAa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome8)
{
    Practice obj;
    bool actual = obj.isPalindrome(" aAAa ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome9)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome10)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome11)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome12)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome13)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome14)
{
    Practice obj;
    bool actual = obj.isPalindrome("bA");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome14)
{
    Practice obj;
    bool actual = obj.isPalindrome("bAA");
    ASSERT_FALSE(actual);
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
  int a = 2;
  int b = 3;
  int c = 1;

  obj.sortDescending(a, b, c);
  ASSERT_GT(a, b);
  ASSERT_GT(b, c);
}

TEST(PracticeTest, sortDescending3)
{
  Practice obj;
  int a = 2;
  int b = 1;
  int c = 3;

  obj.sortDescending(a, b, c);
  ASSERT_GT(a, b);
  ASSERT_GT(b, c);
}

TEST(PracticeTest, sortDescending4)
{
  Practice obj;
  int a = 1;
  int b = 2;
  int c = 3;

  obj.sortDescending(a, b, c);
  ASSERT_GT(a, b);
  ASSERT_GT(b, c);
}

TEST(PracticeTest, sortDescending5)
{
  Practice obj;
  int a = 1;
  int b = 3;
  int c = 2;

  obj.sortDescending(a, b, c);
  ASSERT_GT(a, b);
  ASSERT_GT(b, c);
}
