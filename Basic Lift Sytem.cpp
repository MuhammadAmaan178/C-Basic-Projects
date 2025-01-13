#include<iostream>
#include<cmath>
using namespace std;

int indexOfLift = 0;
int lift_floor[3] = {1,1,1};
int lift_load[3] = {0,0,0};

void call_lift(int f_number,float load){
	int f_number2;
	int min = 1000;
	int difference = 0;
	for(int i = 0;i<3;i++){
	    difference = abs(lift_floor[i] - f_number);
	    if(min>difference){
	    	min = difference;
	    	indexOfLift = i;
		}
	}
    lift_floor[indexOfLift] = f_number;
    lift_load[indexOfLift] += load;
	cout<<"Lift "<<indexOfLift +1<<" Have "<<load<<" Load"<<endl;
	cout<<"Enter On Which Floor You Want To Go??? : ";
	cin>>f_number2;
	cout<<"Lift "<<indexOfLift +1<<" Now Is At "<<f_number2<<" Floor"<<endl;
	lift_floor[indexOfLift] = f_number2;
}


int main(){
	float load;
	int f_number;
	cout<<"Enter Floor Number : ";
	cin>>f_number;
	if(f_number<=8 && f_number>=1){
		cout<<"Lift "<<indexOfLift +1<<" Is Now At "<<f_number<<" Floor"<<endl;
		cout<<"Enter Total Weight : ";
		cin>>load;
		if(load<=700){
			call_lift(f_number,load);
		}else{
			cout<<"Your Weight Is Out Of Limit!!!";
		}	
	}else{
		cout<<"There Are Only 8 Floors"<<endl;
	}
	
	return 0;
}
