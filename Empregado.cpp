#include <string>
#include "Empregado.hpp"

#define MAXIMO_HORAS_TRABALHADAS 8.0

double Empregado::pagamentoMes(double horasTrabalhadas)
{
    double tempoTrabalhoConsiderado = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > MAXIMO_HORAS_TRABALHADAS)
    {
        double horasExtra = horasTrabalhadas - MAXIMO_HORAS_TRABALHADAS;
        tempoTrabalhoConsiderado += horasExtra / 2;
    }

    return tempoTrabalhoConsiderado * salarioHora;
}