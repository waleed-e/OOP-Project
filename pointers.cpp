#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
class Student{
	int  mark = 0;
	int age = 0;
	string name = "unKnown";
public:
	
	void setValues() {
		

		cout << "Enter Your mark : " << mark << "\n";
		cin >> mark;
		
		
	}
	friend int Avg(Student ob[],int size);
};

int Avg(Student ob[],int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		 sum += ob[i].mark;
	}
	return sum / size;
}

int main(){
	Student ob[5];

	for (int i = 0; i < 5; i++) {
		ob[i].setValues();
	}

	int agv = Avg(ob, 5);
	cout << agv;
}
