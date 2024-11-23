//Student Management System

#include<iostream>
using namespace std;

int max_student = 52;
int count_student = 0;

int studentID[52];
string name[52];
int age[52];
string address[52];

void add_student(){
	if(count_student<max_student){
		cout<<"Enter Student ID : ";
		cin>>studentID[count_student];
		cout<<"Enter Student Name : ";
		cin>>name[count_student];
		cout<<"Enter Student Age : ";
		cin>>age[count_student];
		cout<<"Enter Student Address : ";
		cin>>address[count_student];
		count_student += 1;
		cout<<"Student Add Succesfully!!!"<<endl;
	}else{
		cout<<"This Class Is Full...You Can't Add More";
	}
}

void edit_student(){
	int st_id;
	cout<<"Enter Student Id : ";
	cin>>st_id;
	bool found = false;
	for(int i =0;i<count_student;i++){
		if(st_id==studentID[i]){
			cout<<"Enter New Student ID : ";
			cin>>studentID[i];
			cout<<"Enter Student Name : ";
			cin>>name[i];
			cout<<"Enter Student Age : ";
			cin>>age[i];
			cout<<"Enter Student Address : ";
			cin>>address[i];
			found = true;
			cout<<"Student Edit Succesfully!!!";
		}
	}
	if(found!=true){
		cout<<"Student Not Found!!!";
	}
}

void student_detail(){
	int st_id;
	cout<<"Enter Student Id : ";
	cin>>st_id;
	bool found = false;
	for(int i =0;i<count_student;i++){
		if(st_id==studentID[i]){
			cout<<"Name : "<<name[i]<<endl;
			cout<<"Student ID : "<<studentID[i]<<endl;
			cout<<"Age : "<<age[i]<<endl;
			cout<<"Address : "<<address[i]<<endl;
			found = true;
		}
	}
	if(found!=true){
		cout<<"Student Not Found!!!";
	}
}

void all_student(){
	for(int i = 0;i<count_student;i++){
		cout<<" Student :- "<<i+1<<endl;
		cout<<"Name : "<<name[i]<<endl;
		cout<<"Student ID : "<<studentID[i]<<endl;
		cout<<"Age : "<<age[i]<<endl;
		cout<<"Address : "<<address[i]<<endl;
	}
}

int main(){
	int ch;
	do{
		cout<<"\n************************************"<<endl;
		cout<<"\tSTUDENT MANAGEMENT SYSTEM"<<endl;
		cout<<"************************************"<<endl;
		cout << "1. Add Student"<<endl;
        cout << "2. Edit Student"<<endl;
        cout << "3. Display All Students"<<endl;
        cout << "4. Search Student by ID"<<endl;
        cout << "5. Exit"<<endl;
        cout<<"************************************"<<endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout<<"************************************"<<endl;
        
        switch(ch){
        	case 1:
        		add_student();
        		break;
        	case 2:
        		edit_student();
        		break;
        	case 3:
        		all_student();
        		break;
        	case 4:
        		student_detail();
        		break;
        	case 5:
                cout<<"Goodbye!!!"<<endl;
                break;

            default:
                cout<<"Invalid choice. Please try again"<<endl;

		}
	}while(ch!=5);	
	
	
	return 0;
}
