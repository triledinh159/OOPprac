#pragma once
#include<iostream>
using namespace std;
class TEACHER {
	char FACULTY[100];
	int LEVEL;
	string ROLELEVEL;
public:	
	int STUDYSESSION;
	int SUBSIDIZE;
	float COEFFICENT;
	void inputTeacher();
	void levelRole();
	void OUTPUT();

};
class STAFF {
	char SERVICE[100];
	int WORKDAY;
	int POSITION;
	string ROLEPOSITION;
public:
	int SUBSIDIZE;
	float COEFFICENT;
	void inputStaff();
	void positionRole();
	void OUTPUT();
};

class PEOPLE :public TEACHER, public STAFF {
	char NAME[20];
	int ROLE;
public:
	float SALARY;
	static int COUNT;
	void INPUT();
	int ROLES();
	void outputSalary();
	void OUTPUT();
	static int getCount() {
		return COUNT;
	}
};

int PEOPLE::COUNT = 0;
