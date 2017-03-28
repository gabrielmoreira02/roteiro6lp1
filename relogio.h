#ifndef RELOGIO_H_
#define DATA_H_

class Relogio{
	int horas;
	int minutos;
	int segundos;
public:
	Relogio(int h, int m, int s);
	void setHorario(int h, int m, int s);
	int getHora();
	int getMinutos();
	int getSegundos();
	int avancarHorario();
};

#endif