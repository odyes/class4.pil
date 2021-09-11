#include<iostream>
#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

Node* Stack::GetTop() const
{
  return head;
}

bool Stack::IsEmpty() const
{
  return head == nullptr;
}

void Stack::Push(Book*& book)
{
  if(IsEmpty())
  {
    head = new Node(book);
  }
  else
  {
    Node* back{head};
    head = new Node(book);
    head->next = back;
  }
}

void Stack::Print()
{
   Node* current{head};

  std::cout << "Books list:"<< std::endl;
  std::cout << std::endl;
  while (current)
  {
    std::cout << "Book name: " << current->GetBook()->GetName() << std::endl;
    std::cout << "Book Author: " << current->GetBook()->GetAuthor() << std::endl;
    std::cout << "Book pages: " << current->GetBook()->GetPagesCount() << std::endl;
    std::cout << std::endl;
    current = current->next;
  }
}