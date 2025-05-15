#include <iostream>
using namespace std; 
struct Student{
	int id;
	string name; 
};
int main(){
	Student* p1 = new Student;
	Student* p2 = new Student();
	Student* p3 = new Student({10,"IU"});
	
	cout << "p1 = " << p1 -> id << "," << p1 -> name << endl;
	cout << "p1 = " << p2 -> id << "," << p2 -> name << endl;
	cout << "p1 = " << p3 -> id << "," << p3 -> name << endl;
	
	delete p1;
	delete p2;
	delete p3;
	return 0;
}
