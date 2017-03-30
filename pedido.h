#ifndef PEDIDO_H_
#define PEDIDO_H_
#include <string>

class Pedido{
	int numero;
	std::string descricao;
	int quantidade;
	double preco;
public:
	Pedido(int n=0, std::string d=" ", int q=0,double p=0);
	int getNumero();
	std::string getDescricao();
	int getQuantidade();
	double getPreco();
	void setNumero(int n);
	void setDescricao(std::string d);
	void setQuantidade(int q);
	void setPreco(double p);
};

#endif

