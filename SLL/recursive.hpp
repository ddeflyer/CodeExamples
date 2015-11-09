#pragma once

#include "base.hpp"

#include "memory"

template <typename T> class RecSLL: public SinglyLinkedList<T>
{
public:

  bool del(const T& comparable);

  bool contains(const T& comparable);

private:
  bool del_int(const T& comparable,
	       std::shared_ptr<typename SinglyLinkedList<T>::element>& last,
	       std::shared_ptr<typename SinglyLinkedList<T>::element>& curr);

  bool contains_int(const T& comparable,
		    const std::shared_ptr<typename SinglyLinkedList<T>::element>& next);
};

