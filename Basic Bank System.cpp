// Basic Bank System

#include<iostream>
using namespace std;

string user_name = "admin@123";
int password = 1234;

int max_acc = 52;
int count_acc = 0;

int acc_number[52];
string name[52];
int age[52];
double acc_balance[52];
int acc_pin[52];

//for admin
void add_acc(){
	if(count_acc<max_acc){
		cout<<"Enter Account Number : ";
		cin>>acc_number[count_acc];
		cout<<"Enter Account Holder Name : ";
		cin>>name[count_acc];
		cout<<"Enter Account Holder Age : ";
		cin>>age[count_acc];
		cout<<"Enter Account Balance : ";
		cin>>acc_balance[count_acc];
		cout<<"Enter Account 4 Digit Pin : ";
		cin>>acc_pin[count_acc];
		count_acc += 1;
		cout<<"Account Add Succesfully!!!"<<endl;
	}else{
		cout<<"Your System Limit Is Reached...";
	}
}

void edit_acc(){
	int acc_no;
	cout<<"Enter Account Number : ";
	cin>>acc_no;
	bool found = false;
	for(int i =0;i<count_acc;i++){
		if(acc_no==acc_number[i]){
			cout<<"Enter New Account Number : ";
			cin>>acc_number[i];
			cout<<"Enter Account Holder Name : ";
			cin>>name[i];
			cout<<"Enter Account Holder Age : ";
			cin>>age[i];
			cout<<"Enter Account Balance : ";
			cin>>acc_balance[i];
			cout<<"Enter Account 4 Digit Pin : ";
			cin>>acc_pin[i];
			found = true;
			cout<<"Account Edit Succesfully!!!";
		}
	}
	if(found!=true){
		cout<<"Account Not Found!!!";
	}
}

void acc_details(){
	int acc_no;
	cout<<"Enter Account Number : ";
	cin>>acc_no;
	bool found = false;
	for(int i =0;i<count_acc;i++){
		if(acc_no==acc_number[i]){
			cout<<"Name : "<<name[i]<<endl;
			cout<<"Account Number : "<<acc_number[i]<<endl;
			cout<<"Account Pin : "<<acc_pin[i]<<endl;
			cout<<"Age : "<<age[i]<<endl;
			cout<<"Balance : "<<fixed<<acc_balance[i]<<endl;
			found = true;
		}
	}
	if(found!=true){
		cout<<"Account Not Found!!!";
	}
}

void all_accounts(){
	for(int i = 0;i<count_acc;i++){
		cout<<" Account :- "<<i+1<<endl;
		cout<<"Name : "<<name[i]<<endl;
		cout<<"Account Number : "<<acc_number[i]<<endl;
		cout<<"Account 4 Digit Pin : "<<acc_pin[i]<<endl;
		cout<<"Age : "<<age[i]<<endl;
		cout<<"Balance : "<<acc_balance[i]<<endl;
	}
}

//for users
void u_acc_details(){
	int acc_no , pass;
	cout<<"Enter Account Number : ";
	cin>>acc_no;
	bool found = false;
	for(int i =0;i<count_acc;i++){
		if(acc_no==acc_number[i] && pass == password){
			cout<<"Name : "<<name[i]<<endl;
			cout<<"Account Number : "<<acc_number[i]<<endl;
			cout<<"Age : "<<age[i]<<endl;
			cout<<"Balance : "<<fixed<<acc_balance[i]<<endl;
			found = true;
		}
	}
	if(found!=true){
		cout<<"Account Not Found!!!";
	}
}

void deposit_money(){
	int acc_no;
	double deposit;
	cout<<"Enter Account Number : ";
	cin>>acc_no;
	bool found = false;
	for(int i =0;i<count_acc;i++){
		if(acc_no==acc_number[i]){
			cout<<"Enter How Much You Want To Deposit : ";
			cin>>deposit;
			acc_balance[i] = acc_balance[i] + deposit;
			found = true;
			cout<<"Money Deposit Successfully!!!"<<endl;
		}
	}
	if(found!=true){
		cout<<"Account Not Found!!!"<<endl;
	}
}
	
void withdraw_money(){
	int acc_no;
	double withdraw;
	cout<<"Enter Account Number : ";
	cin>>acc_no;
	bool found = false;
	for(int i =0;i<count_acc;i++){
		if(acc_no==acc_number[i]){
			cout<<"Enter How Much You Want To Withdraw : ";
			cin>>withdraw;
			acc_balance[i] = acc_balance[i] - withdraw;
			found = true;
			cout<<"Money Withdraw Successfully!!!"<<endl;
		}
	}
	if(found!=true){
		cout<<"Account Not Found!!!"<<endl;
	}
}

//admin login screen
void admin_login_screen(){
	int ch_0;
	do{
		cout<<"\n************************************"<<endl;
		cout<<"\tAdmin Login Screen"<<endl;
		cout<<"************************************"<<endl;
		cout<<"\tWhat You Want To Do???"<<endl;
		cout<<"************************************"<<endl;
		cout<<"1.Edit Account"<<endl;
		cout<<"2.Account Detail"<<endl;
		cout<<"3.All Account Details"<<endl;
		cout<<"4.Add Account"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"************************************"<<endl;
		cout<<"Enter Your Choice :";
		cin>>ch_0;
		if(ch_0 == 1){
			edit_acc();
		}else if(ch_0 == 2){
			acc_details();
		}else if(ch_0 == 3){
			all_accounts();
		}else if(ch_0 == 4){
			add_acc();
		}else if(ch_0 != (1,2,3,4,5)){
			cout<<"Invalid Choice!!!";
		}
	}while(ch_0 != 5);
}

//user login screen
void user_login_screen(){
	int ch_0;
	do{
		cout<<"\n************************************"<<endl;
		cout<<"\tUser Login Screen"<<endl;
		cout<<"************************************"<<endl;
		cout<<"\tWhat You Want To Do???"<<endl;
		cout<<"************************************"<<endl;
		cout<<"1.Edit Account"<<endl;
		cout<<"2.Account Detail"<<endl;
		cout<<"3.Withdraw Money"<<endl;
		cout<<"4.Deposit Money"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"************************************"<<endl;
		cout<<"Enter Your Choice :";
		cin>>ch_0;
		if(ch_0 == 1){
			edit_acc();
		}else if(ch_0 == 2){
			acc_details();
		}else if(ch_0 == 3){
			withdraw_money();
		}else if(ch_0 == 4){
			deposit_money();
		}else if(ch_0 != (1,2,3,4,5)){
			cout<<"Invalid Choice!!!";
		}
	}while(ch_0 != 3);
}

int main(){
	int ch_1,pass, acc_num;
	string u_name;
	do{
		cout<<"************************************"<<endl;
		cout<<"\tWhat You Want To Do"<<endl;
		cout<<"************************************"<<endl;
		cout<<"1.Admin Login"<<endl;
		cout<<"2.User Login"<<endl;
		cout<<"3.Create Account"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"************************************"<<endl;
		cout<<"Enter Your Choice :";
		cin>>ch_1;
		if(ch_1 == 1){
			cout<<"Enter User Name : ";
			cin>>u_name;
			cout<<"Enter 4 Digit Pin : ";
			cin>>pass;
			if(u_name == user_name && pass == password){
				admin_login_screen();
			}else{
				cout<<"Invalid Username or Password!!!"<<endl;
			}
		}else if(ch_1 == 2){
			cout<<"Enter Account Number : ";
			cin>>acc_num;
			cout<<"Enter 4 Digit Pin : ";
			cin>>pass;
			for(int i =0;i<count_acc;i++){
				if(acc_num==acc_number[i] && pass==acc_pin[i]){
					user_login_screen();
				}else{
					cout<<"Invalid Username or Password!!!";
				}
			}
		}else if(ch_1 == 3){
			add_acc();
		}else if(ch_1 != (1,2,3,4)){
			cout<<"Invalid Choice!!!Try Again"<<endl;
			cin>>ch_1;
		}
	}while(ch_1 != 4);
	
	return 0;
}
