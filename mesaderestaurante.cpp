#include "mesaderestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){

}
void MesaDeRestaurante::adicionaAoPedido(int n, std::string d, int q,double pr){
	static int i=1;
	p[i].setNumero(n);
	p[i].setDescricao(d);
	p[i].setQuantidade(q);
	p[i].setPreco(pr);
	i++;
}

void MesaDeRestaurante::zeraPedidos(){
	for (int k=0;k<=19;k++){
		p[k].setNumero(0);
		p[k].setDescricao(" ");
		p[k].setQuantidade(0);
		p[k].setPreco(0);
	}
}
double MesaDeRestaurante::calculaTotal(){
	double contafinal=0;
	for (int k=0;k<=19;k++){
		contafinal = contafinal + (p[k].getPreco()*p[k].getQuantidade());
	}
	return contafinal;	
}
