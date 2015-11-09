#include <memory>
#include <iostream>

class SimpleSinglyLinkedList
{
public:
  void add_head(int element)
  {
    std::shared_ptr<SimpleSinglyLinkedList::element> new_head =
      std::make_shared<SimpleSinglyLinkedList::element>();

    // using the '=' copy overload if exists...
    new_head->value = element;

    if (!this->head) {
      // This is the first element added
      this->tail = new_head;
    }

    // Set the new_head's next to the old head
    new_head->next = this->head;
    this->head = new_head;
  }


  void add_tail(int element)
  {
    std::shared_ptr<SimpleSinglyLinkedList::element> new_tail =
      std::make_shared<SimpleSinglyLinkedList::element>();

    // using the '=' copy overload if exists...
    new_tail->value = element;

    if (!this->tail) {
      // Since this is the first new value, set head to be the new element
      this->head = new_tail;
    } else {
      // Set the old tail's next to the new element
      this->tail->next = new_tail;
    }

    // Set the tail to the new value
    this->tail = new_tail;
  }

  /**
   *
   */
  bool del(int comparable)
  {
    bool found = false;

    // Check the first element as a special case
    while (this->head && comparable == this->head->value) {
      found = true;
      this->head = this->head->next;

      // Special case that we just removed the last element
      if (!this->head) {
	this->tail = this->head;
      }
    }

    // it is possible that we are done...
    if (!this->head || !this->head->next) {
      return found;
    }

    // We know that there is at least one element to check
    // now (head has been checked but there is a next still)...
    std::shared_ptr<SimpleSinglyLinkedList::element> curr_ele = this->head->next;
    std::shared_ptr<SimpleSinglyLinkedList::element> last_ele = this->head;

    while(curr_ele) {
      if (comparable == curr_ele->value) {
	// remove the element
	found = true;
	last_ele->next = curr_ele->next;
      
	// in case we just removed the last element
	if (!last_ele->next) {
	  this->tail = last_ele;
	}
      } else {
	last_ele = curr_ele;
      }

      curr_ele = curr_ele->next;
    }

    return found;
  }


  bool contains(int comparable)
  {
    std::shared_ptr<SimpleSinglyLinkedList::element> curr_ele = this->head;

    while(curr_ele)
    {
      if (comparable == curr_ele->value) {
	return true;
      }

      curr_ele = curr_ele->next;
    }

    return false;
  }

  void pretty_print()
  {
    std::shared_ptr<SimpleSinglyLinkedList::element> curr_ele = this->head;

    while (curr_ele) {
      std::cout << curr_ele->value << "\n";

      curr_ele = curr_ele->next;
    }
  }

private:

  struct element
  {
    int value;
    std::shared_ptr<element> next;
  };

  std::shared_ptr<element> head;

  std::shared_ptr<element> tail;

};


int main(int argc, char* argv[])
{
int val;

  std::cout << "Test 1a:\n";
  SimpleSinglyLinkedList test_obj1;
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


  std::cout << "Test 5a:\n";
  SimpleSinglyLinkedList test_obj5;
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
  SimpleSinglyLinkedList test_obj6;
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
