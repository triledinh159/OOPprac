#pragma once
#include "Job2.h"
class STUDENT : public PEOPLE{
	int ID;
	char CLASS[100];
	char TELENUM[100];
	char SCHOOL[100];
	char FACULTY[100];
public:
	void student();
	void OUTPUT();
};