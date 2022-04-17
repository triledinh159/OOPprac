#include "Job.cpp"
int main() {
	int n,count=0;
	int max = 0, maxSinger = 0;
	string nameSinger;
	string name;
	cout << "Insert number of people: ";
	cin >> n;
	PEOPLE* list = new PEOPLE[n];

	for (int i = 0; i < n; i++) {
		list[i].INPUT();
		if (list[i].ROLES() == 1) list[i].inputStudent();
		if (list[i].ROLES() == 2) list[i].inputPupil();
		if (list[i].ROLES() == 3) list[i].inputWorker();
		if (list[i].ROLES() == 4) list[i].inputActor();
		if (list[i].ROLES() == 5) list[i].inputSinger();
	}
	cout << "Import: " << PEOPLE::getCount();
	for (int i = 0; i < n; i++) {
		++count;
		list[0].findTheHigestSalary(list[i], n, count,max,maxSinger,nameSinger,name);
	}
	return 0;
}