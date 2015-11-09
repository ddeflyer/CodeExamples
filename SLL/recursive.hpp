#pragma once

#include "base.hpp"

#include "memory"

/**
 * Implemention of the SinglyLinkedList type using recursive methods where applicable
 */
template <typename T> class RecSLL: public SinglyLinkedList<T>
{
public:

  bool del(const T& comparable);

  bool contains(const T& comparable);

private:
  /**
   * Internal method for recursion of del()
   *
   * @param comparable to compare elements to
   * @param last the previous element that was operated upon
   * @param curr the element to evaluate
   *
   * @return true iff an element was removed
   */
  bool del_int(const T& comparable,
	       std::shared_ptr<typename SinglyLinkedList<T>::element>& last,
	       std::shared_ptr<typename SinglyLinkedList<T>::element>& curr);

  /**
   * Internal method for recursion of contains
   *
   * @param comparable what we are checking for equality
   * @param curr the element to check
   */
  bool contains_int(const T& comparable,
		    const std::shared_ptr<typename SinglyLinkedList<T>::element>& curr);
};

