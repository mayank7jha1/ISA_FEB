#include<bits/stdc++.h>
using namespace std;


//Copy Constructor

class Car {
// private:
	int price = 50000;
	int minimum = 30000;
public:
	int model_no;
	char name[100];//Static Array
	string condition;
	char* engine;//Dynamic Array

	int get_price() {
		return price;
	}

	//Default Constructor:
	Car() {
		cout << "Inside My Default Constructor " << endl;
	}

	//Parameterised Constructor
	Car(int m, char* n, string c, int p, char* e) {
		cout << "Inside My own Parameterised Constructor " << endl;
		model_no = m;
		strcpy(name, n);
		condition = c;
		if (p < minimum) {
			price = minimum;
		} else {
			price = p;
		}
		engine = new char[strlen(e) + 1];
		strcpy(engine, e);
	}

	Car(Car &y) {
		cout << "Inside My Own Copy Constructor " << endl;
		model_no = y.model_no;
		strcpy(name, y.name);
		condition = y.condition;
		price = y.price;
		engine = new char[strlen(y.engine) + 1];//New array is Created
		strcpy(engine, y.engine);
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
		cout << "The Engine of the Car is " << engine << endl;
	}
};


int main() {

	Car y(2222, "AUDI", "Very Good", 90000, "XYZ");
	y.print();


	cout << endl << endl;
	Car z(y);//Default Copy Constructor is Working
	z.print();
	z.name[0] = 'B';
	z.engine[0] = 'T';
	cout << endl << endl;

	y.print();

	//cout << y.engine << endl;


	cout << endl << endl;

	z.print();

}


//Strlen(): Length of a Character array

//By Default jo bhi tumhare copy constructor and
//copy assignment operator these will make shallow copies.