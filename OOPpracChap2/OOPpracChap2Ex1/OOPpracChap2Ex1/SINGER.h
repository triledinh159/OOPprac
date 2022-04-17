#pragma once
#include "Job2.h"
class SINGER : public PEOPLE {
	int WORKAGE;
	char MUSICKIND[100];
	int SALARY;
	int SOLDDISK;
	int SHOW;
public:
	void singer();
	bool FAMOUS();
	void OUTPUT();
};