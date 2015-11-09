#include "loop.hpp"
#include "recursive.hpp"

#include <iostream>


int main(int argc, char* argv[])
{
  int val;

  std::cout << "Test 1a:\n";
  RecSLL<int> test_obj1;
  test_obj1.add_tail(val = 0);
  test_obj1.add_tail(val = 1);
  test_obj1.add_tail(val = 2);
  test_obj1.add_head(val = 5);
  test_obj1.add_tail(val = 3);
  test_obj1.add_tail(val = 4);
  test_obj1.pretty_print();

  std::cout << "Test 1b:\n";
  test_obj1.del(2);
  test_obj1.pretty_print();

  std::cout << "Test 1c:\n";
  test_obj1.del(0);
  test_obj1.pretty_print();

  std::cout << "Test 1d:\n";
  test_obj1.del(5);
  test_obj1.pretty_print();

  std::cout << "Test 1e:\n";
  std::cout << test_obj1.contains(1) << "\n";;

  std::cout << "Test 1f:\n";
  std::cout << test_obj1.contains(5) << "\n";


  std::cout << "Test 2a:\n";
  LoopSLL<int> test_obj2;
  test_obj2.add_head(val = 0);
  test_obj2.add_head(val = 1);
  test_obj2.add_head(val = 2);
  test_obj2.add_head(val = 3);
  test_obj2.add_head(val = 4);
  test_obj2.add_head(val = 5);
  test_obj2.pretty_print();

  std::cout << "Test 2b:\n";
  test_obj2.del(2);
  test_obj2.pretty_print();

  std::cout << "Test 2c:\n";
  test_obj2.del(0);
  test_obj2.pretty_print();

  std::cout << "Test 2d:\n";
  test_obj2.del(5);
  test_obj2.pretty_print();

  std::cout << "Test 2e:\n";
  std::cout << test_obj2.contains(1) << "\n";;

  std::cout << "Test 2f:\n";
  std::cout << test_obj2.contains(5) << "\n";


  std::cout << "Test 3a:\n";
  LoopSLL<int> test_obj3;
  test_obj3.add_head(val = 0);
  test_obj3.add_head(val = 0);
  test_obj3.add_head(val = 0);
  test_obj3.add_head(val = 0);
  test_obj3.add_head(val = 0);
  test_obj3.add_head(val = 0);
  test_obj3.add_head(val = 0);
  test_obj3.add_head(val = 0);
  test_obj3.add_tail(val = 1);
  test_obj3.pretty_print();

  std::cout << "Test 3b:\n";
  test_obj3.del(0);
  test_obj3.pretty_print();


  std::cout << "Test 4a:\n";
  LoopSLL<int> test_obj4;
  test_obj4.add_head(val = 0);
  test_obj4.add_head(val = 0);
  test_obj4.add_head(val = 0);
  test_obj4.add_head(val = 0);
  test_obj4.add_head(val = 0);
  test_obj4.add_head(val = 0);
  test_obj4.add_head(val = 0);
  test_obj4.add_head(val = 0);
  test_obj4.add_head(val = 1);
  test_obj4.pretty_print();

  std::cout << "Test 4b:\n";
  test_obj4.del(0);
  test_obj4.pretty_print();


  std::cout << "Test 5a:\n";
  RecSLL<int> test_obj5;
  test_obj5.add_head(val = 0);
  test_obj5.add_head(val = 0);
  test_obj5.add_head(val = 0);
  test_obj5.add_head(val = 0);
  test_obj5.add_head(val = 0);
  test_obj5.add_head(val = 0);
  test_obj5.add_head(val = 0);
  test_obj5.add_head(val = 0);
  test_obj5.add_tail(val = 1);
  test_obj5.pretty_print();

  std::cout << "Test 5b:\n";
  test_obj5.del(0);
  test_obj5.pretty_print();


  std::cout << "Test 6a:\n";
  RecSLL<int> test_obj6;
  test_obj6.add_head(val = 0);
  test_obj6.add_head(val = 0);
  test_obj6.add_head(val = 0);
  test_obj6.add_head(val = 0);
  test_obj6.add_head(val = 0);
  test_obj6.add_head(val = 0);
  test_obj6.add_head(val = 0);
  test_obj6.add_head(val = 0);
  test_obj6.add_head(val = 1);
  test_obj6.pretty_print();

  std::cout << "Test 6b:\n";
  test_obj6.del(0);
  test_obj6.pretty_print();



  return 0;
}
