#include <string>
#include "Empregado.hpp"

#define Calc_Anual 12;

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
   
   void set_QuotaMensalVendas(double QuotaMensalVendas)
   {
    _QuotaMensalVendas = QuotaMensalVendas;	    
   }
	
   double quotaTotalAnual() 
   {
    return QuotaMensalVendas * Calc_Anual;
   }
   
   void Imprimir(double horasTrabalhadas)
   {
    std::cout << "Nome: " << get_nome() << std::endl;
    std::cout << "Salario Mes: " << PagamentoMes(HorasTrabalhadas) << std::endl;
    std::cout << "Quota vendas: " << QuotaTotalAnual() << std::endl;
   }
   
  private:
   std::string _Nome;
   int _QuotaMensalVendas;
	
};

