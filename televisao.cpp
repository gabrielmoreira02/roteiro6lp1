#include "televisao.h"

Televisao::Televisao(int v, int c){
	setCanal(c);
	volume=v;
}
void Televisao::setCanal(int c){
	if(canal>=0){
		canal=c;
	}else{
		canal=0;
	}
}
int Televisao::getCanal(){
	return canal;
}
int Televisao::getVolume(){
	return volume;
}
void Televisao::aumentarVolume(){
	volume=volume+1;
}
void Televisao::diminuirVolume(){
	volume=volume-1;
}
void Televisao::aumentarCanal(){
	canal=canal+1;
}
void Televisao::diminuirCanal(){
	canal=canal-1;
}