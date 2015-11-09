#pragma once

#include "base.hpp"

#include <memory>


/**
 * Implemention of the SinglyLinkedList type using loop based methods where applicable
 */
template <typename T> class LoopSLL: public SinglyLinkedList<T>
{
public:

  bool del(const T& comparable);

  bool contains(const T& comparable);
};
