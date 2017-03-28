#include <iostream>
#include <string>
#include <cstdlib>
#include "relogio.h"

using namespace std;

class RelogioTeste{
	
public:
	RelogioTeste(){};
	int main(){
		Relogio r1(12,34,45), r2(23,59,59);
		cout << "Horario 1:" << r1.getHora() <<":"<<r1.getMinutos()<<":"<<r1.getSegundos()<<endl;
		cout << "Horario 2:" << r2.getHora() <<":"<<r2.getMinutos()<<":"<<r2.getSegundos()<<endl;
		cout << "Setando o primeiro horario através do metodo setHorario e Avancando o segundo horario" <<endl;

		r1.setHorario(02,24,32);
		r2.avancarHorario();

		
		cout << "Horario 1:" << r1.getHora() <<":"<<r1.getMinutos()<<":"<<r1.getSegundos()<<endl;
		cout << "Horario 2:" << r2.getHora() <<":"<<r2.getMinutos()<<":"<<r2.getSegundos()<<endl;


	}
};

int main(){
	RelogioTeste r1;
	r1.main();
}

