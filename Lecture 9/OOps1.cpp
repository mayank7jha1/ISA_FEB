#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

//You have created a design/blueprint
class Car {

	//Properties: Variables data members
private:
	int price = 50000;
	int minimum = 30000;
public:
	int model_no;
	char name[100];
	string condition;

	//Getter for price
	int get_price() {
		return price;
	}

	//Setter for Price:
	void set_price(int x) {
		if (x < minimum) {
			price = minimum;
		} else {
			price = x;
		}
	}

	//Member Functions
	void print() {
		cout << "The name of the Car is " << name << endl;
		cout << "The Price of the Car is " << price << endl;
		cout << "The Model_no of the Car is " << model_no << endl;
		cout << "The Condition of the Car is " << condition << endl;
	}
};

//Getters and Setters:

int main() {
	Car x;//Aapke pass ek car hain x  and uske pass properties hain
	//and ek member function hain.

	//If you want to access any property/member function of this
	//made car x.

	x.model_no = 1021;
	//x.price = 5;//But employee ke pass ye toh hona chahiye
	//discount laga sake;
	x.name[0] = 'B';
	x.name[1] = 'M';
	x.name[2] = 'W';
	x.name[3] = '\0';

	x.condition = "Very Good";

	//x.print();

	//cout << x.price << endl;
	//cout << x.get_price() << endl;

	x.set_price(45000);
	//cout << x.get_price() << endl;
	x.print();


}


//private,public and protected.



// accounts: delete kardeta hu.

// //Abtraction and Encapsulation:

// {}