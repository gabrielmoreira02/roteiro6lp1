#ifndef RESTAURANTECASEIRO_H_
#define RESTAURANTECASEIRO_H_
#include <string>
#include "mesaderestaurante.h"

class RestauranteCaseiro{
	MesaDeRestaurante m[20];
public:
	RestauranteCaseiro();
	void adicionaAoPedido(int nm, int n, std::string d, int q,double pr);
	double calculaTotalRestaurante();
};
#endif