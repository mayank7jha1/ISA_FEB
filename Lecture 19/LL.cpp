#include<bits/stdc++.h>
using namespace std;
const int N = 0;

class node {
public:
	int data;
	node* next;

	//Constructor:

	node(int inputdata) {
		data = inputdata;//NULL
		next = NULL;
	}
};





void InsertAtHead(node* &head, int value) {
	//Pehle jo data aaya usko apne dt ke form me store karo

	node* n = new node(value);//Constructor

	// (*n).next = head;//Head??==address

	n->next = head;

	head = n;
}

void Print(node* &head) {

	// while (head != NULL) {
	// 	cout << head->data << "-->";
	// 	head = head->next;
	// }
	// cout << "NULL" << endl;


	node* temp = head;
	while (temp != NULL) {//Condition
		cout << temp->data << "->";//Kaam
		temp = temp->next;//i++
	}
	cout << "NULL" << endl;
}


int len(node* head) {
	int length = 0;
	node* temp = head;
	while (temp != NULL) {
		length++;
		temp = temp->next;
	}
	return length;
}

int midPoint(node* head) {
	int mid = len(head) / 2;

	node* temp = head;

	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp->data;
}

node* midPoint1(node* head) {
	int mid = len(head) / 2;

	node* temp = head;

	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp;
}

//Second Middle Point in Even Case:
node* midPoint2(node* head) {

	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

//First Middle Point in Even Case:
node* midPoint3(node* head) {

	node* slow = head;
	node* fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

bool searchIterative(node* head, int key) {
	node* temp = head;
	while (temp != NULL) {
		if (temp->data == key) {
			return true;
		}
		temp = temp->next;
	}
	return false;
}


bool searchRecursive(node* head, int key) {
	node* temp = head;

	if (temp == NULL) {
		return false;
	}

	if (temp->data == key) {
		return true;
	} else {
		return searchRecursive(head->next, key);
	}
}


void ReverseLL(node* &head) {
	node* current = head;
	node* prev = NULL;
	node* n;


	while (current != NULL) {
		n = current->next;
		current->next = prev;

		prev = current;
		current = n;
	}

	head = prev;
}



void cycle_creation(node* head) {
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = head->next->next;
}

bool iscycle(node* head) {
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) {
			return true;
		}
	}

	return false;
}





int main() {
	int n;
	cin >> n;


	// int x = NULL;

	node* head = NULL;//Starting point of your LL.


	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print(head);
	cout << "Length of This LL is " << len(head) << endl;
	cout << "Mid Point of This LL is " << midPoint(head) << endl;


	node* midPoint9 = midPoint1(head);

	cout << "Mid Point of This LL is " << midPoint9->data << endl;

	cout << "Mid Point of This LL is " << midPoint1(head)->data << endl;

	cout << "Mid Point of This LL is " << midPoint2(head)->data << endl;
	cout << "Mid Point of This LL is " << midPoint3(head)->data << endl;
	int key;
	cin >> key;
	cout << searchIterative(head, key) << endl;
	cout << searchRecursive(head, key) << endl;

	ReverseLL(head);
	Print(head);

	//cycle_creation(head);
	cout << iscycle(head) << endl;

}

//STL: forward list
//STL: list


//linked tough : easy: and map
