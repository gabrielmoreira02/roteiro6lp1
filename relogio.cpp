#include "relogio.h"

Relogio::Relogio(int h, int m, int s){
	setHorario(h, m, s);
}
void Relogio::setHorario(int h, int m, int s){
	if (h<24){
		horas=h;
	}else{
		horas=0;
	}
	if (m<60){
		minutos=m;
	}else{
		minutos=0;
	}
	if (s<60){
		segundos=s;
	}else{
		segundos=0;
	}
}
int Relogio::getHora(){
	return horas;
}
int Relogio::getMinutos(){
	return minutos;
}
int Relogio::getSegundos(){
	return segundos;
}
int Relogio::avancarHorario(){
	if (segundos<=58){
		segundos=segundos+1;
	}else if(minutos<=58){
		minutos=minutos+1;
	}else if(horas<23){
		horas=horas+1;
	}else{
		segundos=0;
		minutos=0;
		horas=0;
	}
}