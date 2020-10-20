#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

#define HorasDia 8; //Jornada de trabalho de 8 horas diárias
#define CalcHoraExtra 0.5;


class Empregado 
{	
 public:
    void set_SalarioHora(double SalarioHora)
    {
     _SalarioHora = SalarioHora;	    
    }
    double PagamentoMes(double HorasTrabalhadas) 
    {
     double HorasRemuneradas = HorasTrabalhadas;
     //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
     if(HorasTrabalhadas > HorasDia) 
     {
      double HorasExtra = HorasTrabalhadas - HorasDia;
      HorasRemuneradas += HorasExtra * CalcHoraExtra;
     }
     return HorasRemuneradas * _SalarioHora;
    }	
 private:
    double _SalarioHora;  
    double _QuotaMensalVendas;
	
};

#endif
