#include <string>
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

public:
    int projetos;

    Engenheiro(std::string _nome, double _salarioHora, int _projetos);
};

class Engenheiro : public Empregado {

  public:
    std::string nome;  
	int projetos;
	
};

