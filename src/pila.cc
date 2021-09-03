#include "pila.hh"
#include <iostream>

Pila::Pila(){}
Pila::~Pila(){}
Node* Pila::GetTop() const
{
    return head;
}
void Pila::Pop()
{
    if(!IsEmpty())
    {
        Node* current{head};
        head=head->next;
        delete current;
    }
}
void Pila::Push(Vasos*& vasos)
{
    if(IsEmpty())
    {
        head=new Node(vasos);
    }
    else
    {
        Node* back{head};
        head=new Node(vasos);
        head->next=back;
    }
}
bool Pila::IsEmpty() const
{
    return  head==nullptr;
}
void Pila::Print()
{
    Node* current{head};
    while(current)
    {
        std::cout << current->GetVasos()->GetCantidad() << std::endl;
        current = current->next;
    }
}
