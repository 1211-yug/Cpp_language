#include<iostream>

using namespace std;

class Train{
	
	private:
			
		
		
	public:
		
	
		
};

int main(){
	
	int choice,number;
	
	cout << "--- Railway Reservation System Menu ---" << endl;
	cout << "1. Add New Train Record" << endl;
	cout << "2. Display All Train Records" << endl;
	cout << "3. Search Train by Number" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter your choice :- ";
	cin >> choice;
	
	switch(choice){
		
		case 1:
			
			break;
			
		case 2:
			
			break;
			
		case 3:
			cout << "Enter Train Number to search :- ";
			cin >> number;
			break;
			
		case 4:
			cout << "Exiting system. Goodbye!";
			break;
			
		default:
            cout << "Invalid choice! Try again.";
   	
	}
	
	return 0;
}