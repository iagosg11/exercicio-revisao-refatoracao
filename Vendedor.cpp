#include <string>
#include "Empregado.hpp"

const int Calc_Anual = 12;

class Vendedor : public Empregado 
{
  public:
   void set_nome(std::string Nome)
   {
    _Nome = Nome;
   }
  
   std::string get_nome()
   {
    return _Nome;
   } 
   
   void set_quotaMensalVendas(double quotaMensalVendas)
   {
    _quotaMensalVendas = quotaMensalVendas;	    
   }
	
   double quotaTotalAnual() 
   {
    return _quotaMensalVendas * Calc_Anual;
   }
   
   void Imprimir(double HorasTrabalhadas)
   {
    std::cout << "Nome: " << get_nome() << std::endl;
    std::cout << "Salario Mes: " << PagamentoMes(HorasTrabalhadas) << std::endl;
    std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
   }
   
  private:
   std::string _Nome;
   double _quotaMensalVendas;
	
};
