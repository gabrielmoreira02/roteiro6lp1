#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

#include "restaurantecaseiro.h"



int main(){
	RestauranteCaseiro r1;
	r1.adicionaAoPedido(2,32,"dsAD",4,32); //Adicionamo o pedido usando a mesa 2, Do numero 32, com a descricao citada, 4 unidades ao preco 32.
	cout<<"Total arrecadado parcialmente: "<< r1.calculaTotalRestaurante()<<" Reais"<<endl;
	r1.adicionaAoPedido(4,423,"dsAD",10,5);
	cout<<"Apos vender mais alguns itens"<<endl;
	cout<<"Total final arrecadado: "<< r1.calculaTotalRestaurante()<<" Reais"<<endl<<endl;

	cout<<"Testando agora os metodos para as mesas separadamente"<<endl;
	MesaDeRestaurante m1;
	m1.adicionaAoPedido(42,"Cerveja",15,7);
	m1.adicionaAoPedido(12,"Petisco",2,30);

	cout<<m1.calculaTotal()<<" Reais"<<endl;
	m1.zeraPedidos();
	cout<<"Zerando os pedidos da mesa e checando novamente: "<<endl;
	cout<<m1.calculaTotal()<<" Reais"<<endl;

}

