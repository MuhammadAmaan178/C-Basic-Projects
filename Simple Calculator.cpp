//Simple Calculator

#include<iostream>
using namespace std;

void sum(float a, float b){
	float c = a + b;
	cout<<"***********************************"<<endl;
	cout<<"Sum Of "<<a<<" and "<<b<<" is "<<c;
}

void subtract(float a, float b){
	float c = a - b;
	cout<<"***********************************"<<endl;
	cout<<"Subtraction Of "<<a<<" and "<<b<<" is "<<c;
}

void multiply(float a, float b){
	float c = a * b;
	cout<<"***********************************"<<endl;
	cout<<"Multiplication Of "<<a<<" and "<<b<<" is "<<c;
}

void divide(float a, float b){
	float c = a / b;
	cout<<"***********************************"<<endl;
	cout<<"Division Of "<<a<<" and "<<b<<" is "<<c;
}

void calculation(){
	char ch;
	float num_1,num_2;
	cout<<"Enter First Number : ";
	cin>>num_1;
	cout<<"Enter Second Number : ";
	cin>>num_2;
	cout<<"Enter Which Operation You Want To Perform Between These Numbers : ";
	cin>>ch;
	switch (ch){
		case '+':
			sum(num_1,num_2);
			break;
		case '-':
			subtract(num_1,num_2);
			break;
		case '*':
			multiply(num_1,num_2);
			break;
		case '/':
			divide(num_1,num_2);
			break;
		default:
			cout<<"Invalid Choice!!!Try Again";
		}
}

int main(){
	int choice;
	do{
		cout<<"\n***********************************"<<endl;
		cout<<"           Calculator"<<endl;
		cout<<"***********************************"<<endl;
		cout<<"1.Do Calculation"<<endl;
		cout<<"2.Exit"<<endl;
		cout<<"***********************************"<<endl;
		cout<<"Enter Your Choice : ";
		cin>>choice;
		cout<<"***********************************"<<endl;
		if(choice == 1){
			calculation();
		}else if (choice != 2){
			cout<<"Invalid Choice...Try Again!!!";
		}
	}while(choice!=2);
	return 0;
}
