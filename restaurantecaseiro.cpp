#include "restaurantecaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){

}
void RestauranteCaseiro::adicionaAoPedido(int nm, int n, std::string d, int q,double pr){
	static int j=1;
	m[j].adicionaAoPedido(n, d, q,pr);
	j++;

}

double RestauranteCaseiro::calculaTotalRestaurante(){
	double contafinal=0;
	for (int k=0;k<=19;k++){
		contafinal = contafinal + m[k].calculaTotal();
	}
	return contafinal;	
}
