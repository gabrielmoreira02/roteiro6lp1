#include <iostream>
#include <string>
#include <cstdlib>
#include "televisao.h"

using namespace std;

class TelevisaoTeste{
	
public:
	TelevisaoTeste(){};
	int main(){
		Televisao t1(12,34), t2(7,14);
		cout << "Televisao 1: Volume: " << t1.getVolume() <<"  Canal: "<<t1.getCanal()<<endl;
		cout << "Televisao 2: Volume: " << t2.getVolume() <<"  Canal: "<<t2.getCanal()<<endl;
		cout << "Mudando o canal de t1 diretamente e aumentando seu volume, e diminuindo volume e canal de t2" <<endl;

		t1.setCanal(24);
		t1.aumentarVolume();

		t2.diminuirCanal();
		t2.diminuirVolume();


		cout << "Televisao 1: Volume: " << t1.getVolume() <<"  Canal: "<<t1.getCanal()<<endl;
		cout << "Televisao 2: Volume: " << t2.getVolume() <<"  Canal: "<<t2.getCanal()<<endl;


	}
};

int main(){
	TelevisaoTeste t1;
	t1.main();
}

