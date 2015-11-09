#include "loop.hpp"

#include <iostream>

template <typename T> bool LoopSLL<T>::del(const T& comparable)
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
  std::shared_ptr<typename SinglyLinkedList<T>::element> curr_ele = this->head->next;
  std::shared_ptr<typename SinglyLinkedList<T>::element> last_ele = this->head;

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


template <typename T> bool LoopSLL<T>::contains(const T& comparable)
{
  std::shared_ptr<typename SinglyLinkedList<T>::element> curr_ele = this->head;

  while(curr_ele)
    {
      if (comparable == curr_ele->value) {
	return true;
      }

      curr_ele = curr_ele->next;
    }

  return false;
}

// So that we get the templates generated
template class LoopSLL<int>;
