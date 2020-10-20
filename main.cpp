#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.set_nome("Joao Snow");
  eng1.set_SalarioHora(35);
  eng1.set_projetos(3); 
  eng1.Imprimir(9.5);
  std::cout << std::endl;
  
  Engenheiro eng2;
  eng2.set_nome("Daniela Targaryen");
  eng2.set_SalarioHora(30);
  eng2.set_projetos = 1; 
  eng2.Imprimir(8);	  
  std::cout << std::endl;
  
  Engenheiro eng3;
  eng3.set_nome("Bruno Stark");
  eng3.set_SalarioHora(30);
  eng3.set_projetos(2);
  eng3.Imprimir(8);
  std::cout << std::endl;	
  
  Vendedor vend1;
  vend1.set_nome("Tonho Lannister");
  vend1.set_SalarioHora(20);
  vend1.QuotaMensalVendas(5000);
  vend1.Imprimir(6);	
  std::cout << std::endl;
  
  Vendedor vend2;
  vend2.set_nome("Jose Mormont");
  vend2.set_SalarioHora(25);
  vend2.QuotaMensalVendas(3000);
  vend2.Imprimir(8);	 
  std::cout << std::endl;  
	
  Vendedor vend3;
  vend3.set_nome = "Sonia Stark";
  vend3.set_SalarioHora(30);
  vend3.QuotaMensalVendas(4000);
  vend3.Imprimir(8);
  std::cout << std::endl;	
 
  return 0;	
}
