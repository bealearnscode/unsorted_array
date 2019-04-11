// Beatrix House

#ifndef LISTWITHDUPLICATES_H
#define LISTWITHDUPLICATES_H

#include<string>
using namespace std;

const int MAX_ITEMS = 50;
typedef string ItemType;     // Type of each component
                             //   (a simple type or string class)


class ListWithDuplicates
{
public:
  ListWithDuplicates();
  // Constructor
  // Post: Empty list is created.

  bool IsEmpty();
  // Post: Returns true if list is empty; false otherwise.
  bool IsFull();
  // Post: Returns true if there is no more room in the
  //       list; false otherwise.

  // Action responsibilities
  void Store(ItemType item);
  // Pre:  The list is not full.
  // Post: item is in the list.
  void PrintList();
  // Post: If the list is not empty, list elements are printed on
  //       the screen; otherwise, "List is empty" is printed.
  
  // Knowledge responsibilities
  int GetLength();
  // Post: Return value is the number of items in the list.
  private:

	int length;
    ItemType values[MAX_ITEMS];
};

#endif
