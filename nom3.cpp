#include <iostream>
using namespace std;
int F(int n){
	if(n<=2){
		return n+1;
	}
	else{
		return F(n-1) + 2*F(n-2);
	}
}
int main(){
	cout<<F(4)<<endl;
}