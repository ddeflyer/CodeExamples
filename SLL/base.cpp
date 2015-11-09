#include "base.hpp"

#include <iostream>


template <typename T> void SinglyLinkedList<T>::pretty_print()
{
  std::shared_ptr<typename SinglyLinkedList<T>::element> curr_ele = this->head;

  while (curr_ele) {
    std::cout << curr_ele->value << "\n";

    curr_ele = curr_ele->next;
  }
}


template <typename T> void SinglyLinkedList<T>::add_head(T& element)
{
  auto new_head = std::make_shared<SinglyLinkedList<T>::element>();

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


template <typename T> void SinglyLinkedList<T>::add_tail(T& element)
{
  auto new_tail = std::make_shared<SinglyLinkedList<T>::element>();

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

// So that we get the templates generated
template class SinglyLinkedList<int>;
