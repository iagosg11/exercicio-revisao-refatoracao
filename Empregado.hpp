#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

#define ExpedientePadrao 8; //Jornada de trabalho de 8 horas diárias
#define CalcHoraExtra 0.5;


class Empregado 
{	
 public:
    void set_SalarioHora(double SalarioHora)
    {
     _SalarioHora = SalarioHora;	    
    }
    void set_QuotaMensalVendas(double QuotaMensalVendas)
    {
     _QuotaMensalVendas = QuotaMensalVendas;	    
    }
    double PagamentoMes(double HorasTrabalhadas) 
    {
     double HorasRemuneradas = HorasTrabalhadas;
     //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
     if(HorasTrabalhadas > ExpedientePadrao) 
     {
      double HorasExtra = HorasTrabalhadas - ExpedientePadrao;
      HorasRemuneradas += HorasExtras * CalcHoraExtra;
     }
     return HorasRemuneradas * salarioHora;
    }	
 private:
    double _SalarioHora;  
    double _QuotaMensalVendas;
	
};

#endif
