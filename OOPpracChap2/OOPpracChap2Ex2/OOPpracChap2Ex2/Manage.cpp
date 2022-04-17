#include "Manage.h"
#include <cstring>
#include <string>
void PEOPLE::INPUT() {
	PEOPLE::COUNT++;
	cout << "\nNo." << PEOPLE::COUNT << ":\n";
	cout << "Insert Name: ";
	cin.ignore();
	cin.getline(NAME, 100);
	cout << "Choose the role of person: "
		<< "\n1. TEACHER" << "\t2. STAFF"<< "\nPick a number: ";
	cin >> ROLE;
	
}
int PEOPLE::ROLES() {
	return ROLE;
}
void TEACHER::inputTeacher() {
	cout << "Job: Teacher\n";
	cout << "Insert Coefficent: "; cin >> COEFFICENT;
	cout << "Insert Faculty: "; cin.ignore(); cin.getline(FACULTY, 100);
	cout << "Choose Level: "<<"\n1. Bachelor"<<"\t2. Master"<<"\t3. Doctor"<< "\nPick a number: ";
	cin >> LEVEL;
	if (LEVEL == 1) { ROLELEVEL = "Bachelor"; SUBSIDIZE = 300; }
	if (LEVEL == 2) { ROLELEVEL = "Master"; SUBSIDIZE = 500;}
	if (LEVEL == 3) { ROLELEVEL = "Doctor"; SUBSIDIZE = 1000;}
	cout << "Insert Study Sessions: "; cin>>STUDYSESSION;
}
void STAFF::inputStaff() {
	cout << "Job: Office Staff\n";
	cout << "Insert Coefficent: "; cin >> COEFFICENT;
	cout << "Insert Service: "; cin.ignore(); cin.getline(SERVICE, 100);
	cout << "Insert Workday: "; cin >> WORKDAY;
	cout<<"Choose position: "<<"\n1.Manager"<<"\t2. Deputy Manager"<<"\t3. Staff"<< "\nPick a number: ";
	cin >> POSITION;
	if (POSITION == 1) { ROLEPOSITION = "Manager"; SUBSIDIZE = 2000; }
	if (POSITION == 2) { ROLEPOSITION = "Deputy Manager"; SUBSIDIZE = 1000; }
	if (POSITION == 3) { ROLEPOSITION = "Staff"; SUBSIDIZE = 500; }

}
void PEOPLE::OUTPUT() {
	cout <<"NAME: " << NAME << " ";
}
void TEACHER::OUTPUT() {
	cout <<"FACULTY: " << FACULTY << " LEVEL: " << ROLELEVEL <<" SUBSIDIZE: "<<SUBSIDIZE << " STUDY SESSION(S): " << STUDYSESSION <<" COEFFICENT " <<COEFFICENT<< '\n';
}
void STAFF::OUTPUT() {
	cout <<"SERVICE: "<< SERVICE << " WORKDAY: " << WORKDAY << " SUBSIDIZE: "<<SUBSIDIZE<<" COEFFICENT: "<< COEFFICENT <<" POSITION: "<<ROLEPOSITION << '\n';
}
void PEOPLE::outputSalary() {
	if (ROLE == 1) SALARY = TEACHER::COEFFICENT * 730 + TEACHER::SUBSIDIZE + STUDYSESSION * 45;
	if (ROLE == 2) SALARY = STAFF::COEFFICENT * 730 + STAFF::SUBSIDIZE + STUDYSESSION * 45;
	cout <<" SALARY: " << SALARY;
}