#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    double quotaMensalVendas;

	double quotaTotalAnual();

    Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas);
};