#include <iostream>
#include "pila.hh"
#include "vasos.hh"

int main(){
    Vasos* vasos1{new Vasos("Cristal", "13")};
    Vasos* vasos2{new Vasos("Plastico", "30")};

    Pila* pila{new Pila()};
    pila->Push(vasos1);
    pila->Push(vasos2);
    pila->Print();

    pila->Pop();
    //pila->Print();

    std::cout << "Tipos de vasos on top: "<<pila->GetTop()->GetVasos()->GetTipo() << std::endl;
    std::cin.get();

    delete pila;
    return 0;
}