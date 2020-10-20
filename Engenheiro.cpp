#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado 
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
  
  void set_projetos(int _projetos)
  {
   Projetos = _Projetos;
  }
  
  int get_projetos()
  {
   return Projetos;
  }
  
  void Imprimir(double HorasTrabalhadas)
  {
   std::cout << "Nome: " << getnome() << std::endl;
   std::cout << "Salario Mes: " << PagamentoMes(HorasTrabalhadas) << std::endl;
   std::cout << "Projetos: " << get_projetos() << std::endl;
  }

  private:
   std::string _Nome;
   int _Projetos;
   
   
	
};

