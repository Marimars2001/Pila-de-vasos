#pragma once
#include <string>

class Vasos{
    private:
        std::string tipo;
        std::string cantidad;
    public:
        Vasos(std::string tipo, std::string cantidad);
        ~Vasos();
        std::string GetTipo() const;
        std::string GetCantidad() const;
};
