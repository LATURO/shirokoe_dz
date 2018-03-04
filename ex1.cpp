#include <iostream>
using namespace std;
int task1(){
	cout<<"1"<<endl;
	return 0;
}
int task2(){
	cout<<"2"<<endl;
	return 0;
}
int task3(){
	cout<<"3"<<endl;
	return 0;
}
int task4(){
	cout<<"4"<<endl;
	return 0;
}
void start(int n){
	switch(n){
		case 1:{
			task1();
			break;
		}
		case 2:{
			task2();
			break;
		}
		case 3:{
			task3();
			break;
		}
		case 4:{
			task4();
			break;
		}
	}

}
int main()
{
	int n=1;
	while(n!=0){
		cout<<"1- task 1"<<endl;
		cout<<"2- task 2"<<endl;
		cout<<"3- task 3"<<endl;
		cout<<"4- task 4"<<endl;
		cout<<"0- exit"<<endl;
		cin>>n;
		system("clear");
		start(n);
	}
}