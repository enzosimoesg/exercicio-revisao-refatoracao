#include <string>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    double quotaMensalVendas;

	double quotaTotalAnual();

    Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas);
};

Vendedor::Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas) {
	nome = _nome;
	salarioHora = _salarioHora;
	quotaMensalVendas = _quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
	return quotaMensalVendas * 12;
}

