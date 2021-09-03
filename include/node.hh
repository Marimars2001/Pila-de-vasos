#pragma once
#include "vasos.hh"

class Node{
    private:
       Vasos* vasos{};
    public:
       Node* next{};
       Node(Vasos*& vasos);
       ~Node();
       Vasos* GetVasos() const;
};