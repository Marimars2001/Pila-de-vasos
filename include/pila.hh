#pragma once
#include "vasos.hh"
#include "node.hh"

class Pila{
    private:
       Node*head{nullptr};
    public:
       Pila();
       ~Pila();
       Node* GetTop() const;
       void Pop();
       void Push(Vasos*& vasos);
       bool IsEmpty() const;
       void Print();
};
