#pragma once
#include "Book.hh"

class Node
{
private:
  Book* book{};
public:
  Node* next{};
  Node(Book* book);
  ~Node();

  Book* GetBook() const;
};
