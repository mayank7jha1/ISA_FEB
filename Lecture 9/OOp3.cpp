#include<bits/stdc++.h>
using namespace std;


//Copy Constructor

class Car {
// private:
	int price = 50000;
	int minimum = 30000;
public:
	int model_no;
	char name[100];
	string condition;

	int get_price() {
		return price;
	}

	//Default Constructor:
	Car() {
		cout << "Inside My Default Constructor " << endl;
	}

	//Parameterised Constructor
	Car(int m, char* n, string c, int p) {
		cout << "Inside My own Parameterised Constructor " << endl;
		model_no = m;
		strcpy(name, n);
		condition = c;
		if (p < minimum) {
			price = minimum;
		} else {
			price = p;
		}
	}

	Car(Car &y) {
		cout << "Inside My Own Copy Constructor " << endl;
		model_no = y.model_no;
		strcpy(name, y.name);
		condition = y.condition;
		price = y.price;
	}


	void set_price(int x) {
		if (x < minimum) {
			price = minimum;
		} else {
			price = x;
		}
	}

	void print() {
		cout << "The name of the Car is " << name << endl;
		cout << "The Price of the Car is " << price << endl;
		cout << "The Model_no of the Car is " << model_no << endl;
		cout << "The Condition of the Car is " << condition << endl;
	}
};


int main() {
	Car x;

	cout << "Line Number 44 " << endl;
	x.model_no = 1021;
	x.name[0] = 'B';
	x.name[1] = 'M';
	x.name[2] = 'W';
	x.name[3] = '\0';

	x.condition = "Very Good";
	x.set_price(45000);
	x.print();

	cout << endl;
	Car y(2222, "AUDI", "Very Good", 90000);

	y.print();

	//Car z;//Z ke ander by default vahi values aajaye
	//jo y ander hain.
	cout << endl;
	Car z(y);
	z.print();

}

