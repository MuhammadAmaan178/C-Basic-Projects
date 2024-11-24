//Shopping Mall Billing System

#include<iostream>
using namespace std;

int count = 0;

string p_name[100];
float p_prize[100];

void make_bill(){
	float sum = 0 , d_per;
	char ch;
	int size;
	if(count<100){
		cout<<"Enter Number Of Products : ";
		cin>>size;
		cout<<"************************************"<<endl;
		size = size + count;
		int temp = 0;
		for(int i = count ;i<size;i++){
			temp = temp + 1;
			cout<<"Enter "<<temp<<" Product Name : ";
			cin>>p_name[i];
			cout<<"And Its Price : ";
			cin>>p_prize[i];
			sum = sum + p_prize[i];
			count = count + 1;
		}
		cout<<"************************************"<<endl;
		cout<<"Total = "<<sum<<endl;
		cout<<"************************************"<<endl;
		cout<<"Any Discount???(Choose Y for yes and N for no) : ";
		cin>>ch;
		cout<<"************************************"<<endl;
		if(ch=='Y'||ch=='y'){
			cout<<"Enter Discount Percent : ";
			cin>>d_per;
			cout<<"************************************"<<endl;
			sum =  sum - ((sum*d_per)/100);
			cout<<"Price After Discount Is : "<<sum<<endl;
			cout<<"************************************"<<endl;
		}else if(ch=='N'||ch=='n'){
			cout<<"Then,Final Price is : "<<sum<<endl;
			cout<<"************************************"<<endl;
		}else{
			cout<<"Choose Between Y or N";
		}
	}else{
		cout<<"Your Today Limit Is Reached...Please Restart The System";
	}
}

void products_details(){
	for(int i =0;i<count;i++){
		cout<<"************************************"<<endl;
		cout<<i+1<<" Product "<<endl;
		cout<<"Product Name : "<<p_name[i]<<endl;
		cout<<"Product Prize : "<<p_prize[i]<<endl;
		cout<<"************************************"<<endl;
	}
}
int main(){
	int ch;
	do{
		cout<<"************************************"<<endl;
		cout<<"Welcome To Billing Machine"<<endl;
		cout<<"************************************"<<endl;
		cout<<"1.Make Bill"<<endl;
		cout<<"2.Today Sales"<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"************************************"<<endl;
		cout<<"Choose What You Want..."<<endl;
		cin>>ch;
		cout<<"************************************"<<endl;
		
		switch (ch){
			case 1:
				make_bill();
				break;
			case 2:
				products_details();
				break;
			case 3:
				cout<<"Exiting The System...Good Bye!!!"<<endl;
				break;
			default:
				cout<<"Invalid Choice...Try Again!!!";
		}
	}while(ch!=3);
	
	return 0;
}

