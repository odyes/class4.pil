#include<iostream>
#include "Book.hh"
#include "Stack.hh"

int main()
{
  /*Book* book1{new Book("book1", "cosme fulanito", 300)};
  Book* book2{new Book("book2", "radom", 500)};

  Node* node1{new Node(new Book("book1", "cosme fulanito", 300))};
  Node* node2{new Node(new Book("book2", "radom", 500))};
  node1->next = node2;
  Node* current{node1};*/

  /*std::cout << "Books list:"<< std::endl;
  std::cout << std::endl;
  while (current)
  {
    std::cout << "Book name: " << current->GetBook()->GetName() << std::endl;
    std::cout << "Book Author: " << current->GetBook()->GetAuthor() << std::endl;
    std::cout << "Book pages: " << current->GetBook()->GetPagesCount() << std::endl;
    std::cout << std::endl;
    current = current->next;
  }*/
  Book* book1{new Book("book1", "cosme fulanito", 300)};
  Book* book2{new Book("book2", "random", 500)};
  Book* book3{new Book("progra c++", "Alesker", 1000)};
  Book* book4{new Book("Cocinando palomas", "anonimo", 100)};

  Stack* stack{new Stack()};
  stack->Push(book1);
  stack->Push(book2);
  stack->Push(book3);
  stack->Push(book4);
  stack->Print();

  std::cin.get();
  return EXIT_SUCCESS;//es igual que poner return 0, esto es de c++
}