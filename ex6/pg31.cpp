#include <iostream>
using namespace std;

int main(){
	int size = 10;
	int * list = new int[size];
	int * temp = new int[size+5];
	for(int i=0;i < size;i++)
		temp[i] = list[i];
	delete [] list;
	list = temp;
	return 0;
}
