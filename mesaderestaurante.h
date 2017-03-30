#ifndef MESADERESTAURANTE_H_
#define MESADERESTAURANTE_H_
#include <string>
#include "pedido.h"

class MesaDeRestaurante{
	Pedido p[20];
public:
	MesaDeRestaurante();
	void adicionaAoPedido(int n, std::string d, int q,double pr);
	void zeraPedidos();
	double calculaTotal();
};
#endif