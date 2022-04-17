#include "Manage.cpp"
int main() {
	int n, count = 0;
	int min = 0, maxSinger = 0;
	string nameSinger;
	string name;
	cout << "Insert number of people: ";
	cin >> n;
	PEOPLE* list = new PEOPLE[n];

	for (int i = 0; i < n; i++) {
		list[i].INPUT();
		if (list[i].ROLES() == 1) list[i].inputTeacher();
		if (list[i].ROLES() == 2) list[i].inputStaff();
	}
	min = list[0].SALARY;

	for (int j = 0; j < n; j++) {
		if (list[j].SALARY < min) {
			min = list[j].SALARY;
			
		}count = j;
		if (list[count].ROLES() == 1) {
			list[count].PEOPLE::OUTPUT();
			list[count].TEACHER::OUTPUT();
		}
		else if (list[count].ROLES() == 2) {
			list[count].PEOPLE::OUTPUT();
			list[count].STAFF::OUTPUT();
		}
		list[j].SALARY = 3.40282e+038;
		min = list[j].SALARY;
	}
	return 0;
}