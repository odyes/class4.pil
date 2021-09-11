#pragma once
#include "Node.hh"
#include "Book.hh"

class Stack
{
private:
  Node* head{nullptr};
public:
  Stack();
  ~Stack();
  Node* GetTop() const;
  void Pop();//Elimina lo que hay en head, o sea lo atiende
  void Push(Book*& book);
  bool IsEmpty() const;
  void Print();
};

