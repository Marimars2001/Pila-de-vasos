#include "node.hh"

Node::Node(Vasos*& vasos){
    this->vasos = vasos;
}

Node::~Node(){
}

Vasos* Node::GetVasos() const{
    return vasos;
}