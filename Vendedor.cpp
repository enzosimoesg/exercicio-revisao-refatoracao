#include <string>
#include "Vendedor.hpp"

Vendedor::Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas) {
	nome = _nome;
	salarioHora = _salarioHora;
	quotaMensalVendas = _quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
	return quotaMensalVendas * 12;
}