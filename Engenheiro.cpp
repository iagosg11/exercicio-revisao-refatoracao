#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado 
{
  public:
  void set_nome(std::string _nome)
  {
   nome = _nome;
  }
  
  std::string get_nome()
  {
   return nome;
  }
  
  void set_projetos(int _projetos)
  {
   projetos = _projetos;
  }
  
  int get_projetos()
  {
   return projetos;
  }
  
  void Imprimir(double HorasTrabalhadas)
  {
   std::cout << "Nome: " << getnome() << std::endl;
   std::cout << "Salario Mes: " << PagamentoMes(HorasTrabalhadas) << std::endl;
   std::cout << "Projetos: " << get_projetos() << std::endl;
   std::cout << std::endl;
  }

  private:
   std::string _Nome;
   int _Projetos;
   
   
	
};

