#include <iostream>
#include <limits>
using namespace std;



void displayOptions() {                // function to display ATM options
    cout << " Please choose an option: " << endl;
    cout << " '1' for Balance Check" << endl;
    cout << " '2' for Deposit Money" << endl;
    cout << " '3' for Withdraw Money" << endl;
    cout << " '4' for Exit" << endl;
    cout << " Enter here: ";
}


void checkBalance(double balance) {             // function to check balance
    cout << "Your balance is Rs." << balance << endl;
}


double deposit(double balance) {     //function for deposit money
    double amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Your new balance is Rs." << balance << endl;
    return balance;
}


double withdraw(double balance) {       //function for withdraw amount
    double amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    if (balance < amount) {
        cout << "Insufficient balance." << endl;
    } else {
        balance -= amount;
        cout << "Your new balance is Rs." << balance << endl;
    }
    return balance;
}


int main() {
    double balance = 1000,balance_1 = 2000,balance_2 = 1500;        // initialize balance for user1,user2 and user 3
    int pin_1=12345,pin_2=23456,pin_3=34567,pin;           // pin for user 1,user2 and user3
    cout<<"<<<......  Welcome to Student Bank  ......>>> \n\n";
    const int max_try = 3;
    int tries = 0;
    while (tries < max_try){
	    cout<<"Enter Your 5-digit Pin: ";
    	cin>>pin;
	
    	if (pin == pin_1) {              //process for user 1-with switch

			while (true) {
		
    			cout<<"......Welcome to your ATM account......\nName:Haris    ID:HBL234\n\n";
        		displayOptions();
        		int choice;
        		cin >> choice;
        		switch (choice) {
            		case 1:
                		checkBalance(balance);
                		break;
            		case 2:
                		balance = deposit(balance);
                		break;
            		case 3:
                		balance = withdraw(balance);
                		break;
            		case 4:
                		cout << "Thank you for using the ATM. Goodbye!" << endl;
                		return 0;
            		default:
                		cout << "Invalid choice. Please try again." << endl;
						cin.clear();      // clear error flag (loop will not infinite in case of invalid other than numbers)
    					cin.ignore(numeric_limits<streamsize>::max(), '\n');	
    			}
			}
		}
		else if (pin == pin_2){            //process for user 2-with switch
			while (true) {
		
    			cout<<"......Welcome to your ATM account......\nName:Ibraheem    ID:UBL234\n\n";
        		displayOptions();
        		int choice;
        		cin >> choice;
        		switch (choice) {
            		case 1:
                		checkBalance(balance_1);
                		break;
            		case 2:
                		balance = deposit(balance_1);
                		break;
            		case 3:
                		balance = withdraw(balance_1);
                		break;
            		case 4:
                		cout << "Thank you for using the ATM. Goodbye!" << endl;
                		return 0;
            		default:
                		cout << "Invalid choice. Please try again." << endl;
                		cin.clear(); // clear error flag
    					cin.ignore(numeric_limits<streamsize>::max(), '\n');
    			}	
			}
		}
		else if (pin == pin_3) {                //process for user 3-i tried it with if else
			while (true) {
		
    			cout<<"......Welcome to your ATM account......\nName: Yasir    ID:UBL345\n\n";
        		displayOptions();
        		int choice;
        		cin >> choice;
					if (choice == 1){
						checkBalance(balance_2);
					}
					else if (choice == 2){
						balance = deposit(balance_2);
					}
					else if (choice == 3){
						balance = withdraw(balance_2);
					}
					else if (choice == 4){
						cout << "Thank you for using the ATM. Goodbye!" << endl;
                		return 0;
					}
					else {
						cout << "Invalid choice. Please try again." << endl;
						    cin.clear(); // clear error flag
    						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}	
    			}	
		}
		else {         //for invalid input
		
			tries++;
			cout<<"Wrong Pin,Try Again"<<endl;
			cin.clear(); // clear error flag
    		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}
		if (tries == max_try) {     //will terminate program if 3 wrong inputs
			cout<<"\nOops!!Too many wrong attempts....";
			return 1;
		}
	}

return 0;
}
		
		



