#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado 
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
  
  void set_projetos(int Projetos)
  {
   _Projetos = Projetos;
  }
  
  int get_projetos()
  {
   return _Projetos;
  }
  
  void Imprimir(double HorasTrabalhadas)
  {
   std::cout << "Nome: " << get_nome() << std::endl;
   std::cout << "Salario Mes: " << PagamentoMes(HorasTrabalhadas) << std::endl;
   std::cout << "Projetos: " << get_projetos() << std::endl;
  }

  private:
   std::string _Nome;
   int _Projetos;
   
   
	
};

