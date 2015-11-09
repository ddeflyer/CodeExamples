#pragma once

#include "base.hpp"

#include <memory>


template <typename T> class LoopSLL: public SinglyLinkedList<T>
{
public:

  bool del(const T& comparable);

  bool contains(const T& comparable);
};
