#include <string>
#include "Empregado.hpp"

#define Calc_Anual 12;

class Vendedor : public Empregado 
{
  public:
   void set_nome(std::string _nome)
   {
    Nome = _Nome;
   }
  
   std::string get_nome()
   {
    return Nome;
   }  	  
	
   double quotaTotalAnual() 
   {
    return quotaMensalVendas * Calc_Anual;
   }
   
   void Imprimir(double horasTrabalhadas)
   {
    std::cout << "Nome: " << get_nome << std::endl;
    std::cout << "Salario Mes: " << PagamentoMes(HorasTrabalhadas) << std::endl;
    std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
   }
   
  private:
   std::string _Nome;	
	
};

