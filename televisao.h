#ifndef TELEVISAO_H_
#define TELEVISAO_H_

class Televisao{
	int volume;
	int canal;
public:
	Televisao(int v=0, int c=7);
	void setCanal(int c);
	int getCanal();
	int getVolume();
	void aumentarVolume();
	void diminuirVolume();
	void aumentarCanal();
	void diminuirCanal();
};

#endif
