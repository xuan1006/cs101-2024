#include <iostream>
using namespace std; 
class MyClass{
	public:
		MyClass(){
			cout <<"Constructor called !" << endl; 
		}
		~MyClass(){
			cout <<"Destructor called !" << endl;
		}
		void doSomething(){
			cout << "Do something !"<< endl;
		}
		void doNothing(){
			cout << "Do Nothing !"<< endl;
		}
};

int main(){
	MyClass* obj = new MyClass();
	obj->doSomething();
	obj->doNothing();
	delete obj;
	return 0;
} 
