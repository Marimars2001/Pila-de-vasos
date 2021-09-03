#include "vasos.hh"

Vasos::Vasos(std::string tipo, std::string cantidad){
    this->tipo = tipo;
    this->cantidad = cantidad;
}

Vasos::~Vasos(){
}

 std::string Vasos::GetTipo() const{
     return tipo;
 }

std::string Vasos::GetCantidad() const{
    return cantidad;
}