#include "Job2.h"
#include <cstring>
#include <string>
void PEOPLE::INPUT() {
		PEOPLE::COUNT++;
		cout << "\nNo." << PEOPLE::COUNT << ":\n";
		cout << "Insert Name: ";
		cin.ignore();
		cin.getline(NAME, 100);
		cout << "Insert date of birth: ";
		cin >> DAY >> MONTH >> YEAR;
		cout << "Insert hometown: ";
		cin.ignore();
		cin.getline(HOMETOWN, 100);
		cout << "Choose the role of person: "
			<< "\n1. STUDENT" << "\n2. PUPIL" << "\n3. WORKER" << "\n4. ACTOR"
			<< "\n5. SINGER" << "\nPick a number: ";
		cin >> ROLE;
}
int PEOPLE::ROLES() {
	return ROLE;
}
void PUPIL::inputPupil() {
		cout << "Insert class: "; cin.ignore(); cin.getline(CLASS,100);
		cout << "Insert school: "; cin.ignore(); cin.getline(SCHOOL, 100);
		cout << "Insert phone numbers: "; cin.ignore(); cin.getline(TELENUM, 100);
}
void WORKER::inputWorker() {
		cout << "Insert workplace: "; cin.ignore(); cin.getline(WORKPLACE, 100);
		cout << "Insert salary: "; cin >> SALARY;
}
void ACTOR::inputActor() {
		cout << "Insert artkind: "; cin.ignore(); cin.getline(ARTKIND, 100);
		cout << "Insert salary: "; cin >> SALARY;
		cout << "Insert workage: "; cin >> WORKAGE;
}
void SINGER::inputSinger() {
		cout << "Sold disks: ";
		cin >> SOLDDISK;
		cout << "Insert musickind: "; cin.ignore(); cin.getline(MUSICKIND, 100);
		cout << "Insert workage: "; cin >> WORKAGE;
		if (SOLDDISK < 100) {
			cout << "Basic Singer\n";		
			SALARY = 3000000 + 500000 * WORKAGE + 1000*SOLDDISK;
		}
		else {
			cout << "Famous Singer\n";
			SALARY = 5000000 + 500000 * WORKAGE + 1200*SOLDDISK;
		}
}
void STUDENT::inputStudent() {
		cout << "Insert ID: ";
		cin >> ID;
		cout << "Insert class: ";
		cin >> CLASS;
		cout << "Insert phone numbers: "; cin.ignore();  cin.getline(TELENUM, 100);
		cout << "Insert school: "; cin.getline(SCHOOL, 100);
		cout << "Insert faculty: "; cin.ignore(); cin.getline(FACULTY, 100);
}
void PEOPLE::findTheHigestSalary(PEOPLE listA, int n, int& count, int& max, int& maxSinger, string &nameSinger, string &name) {
	if (listA.WORKER::SALARY > max) {
		max = listA.WORKER::SALARY;
		name = listA.NAME;
	}
	if (listA.ACTOR::SALARY > max) {
		max = listA.ACTOR::SALARY;
		name = listA.NAME;
	}	

	if (listA.SINGER::SALARY <0) maxSinger = 0;
	else if (listA.SINGER::SALARY >0 ) {
		maxSinger = listA.SINGER::SALARY;
		nameSinger = listA.NAME;
		if (listA.SINGER::SALARY > max) {
		max = listA.SINGER::SALARY;
		name = listA.NAME;
		maxSinger = max;
		nameSinger = name;
	}
	}	
	
	if (count == n && max != 0) {
		cout << "\nThe person has the highest salary is:  "
			<< name << " with " << max;
		if (maxSinger==0) cout << "\nNo Singer";
		else cout << "\nThe singer has the highest salary is:  "
			<< nameSinger << " with " << maxSinger;
	}
}