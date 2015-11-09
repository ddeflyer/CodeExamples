#pragma once

#include <memory>


template <typename T> class SinglyLinkedList
{
public:

  /**
   * Add the given element (copy) to the head of the list O(1)
   *
   * @param element item to copy for addition
   */
  void add_head(T& element);

  /**
   * Add the given element (copy) to the tail of the list, O(1)
   *
   * @param element item to copy for addition
   */
  void add_tail(T& element);

  /**
   * Remove every instance that compares true to the given
   * value from the list, O(n)
   *
   * @param comparable element to look for
   * @return true if one or more elements has been removed
   */
  bool del(const T& comparable);

  /**
   * Return true iff the list contains an element that
   * compares true to the given value, O(n)
   *
   * @param comparable element to look for
   * @return true iff comparable element is found
   */
  bool contains(const T& comparable);


  void pretty_print();


  protected:

  /**
   * Each element in the list is represented by one of these, using struct
   * because default public
   */
  struct element
  {
    T value;
    std::shared_ptr<element> next;
  };

  std::shared_ptr<element> head;

  // Optimize the tail tail addition
  std::shared_ptr<element> tail;
};

