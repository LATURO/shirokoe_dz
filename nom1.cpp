#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
int i,j, n, m;
int Array[5][5] =
       { {1, -21, 3, -4, 5},
         {1,   2, 3,  2, 5},
         {1,   2, 6,  4, 5},
         {4,   2, 3,  4, 5},
         {6,   2, 4,  5, 0}          
    };

    n=5; m=5;
		printf(" Int Array:\n");
	for(i=0; i<n; i++) 
	{ 
		for(j=0; j<m; j++)
		  printf(" %4d", Array[i][j]);
		  
		printf("\n");  
	}
	vector<int> v;
	vector<int> buf;
	for(int i=0;i<n;i++){
		cout<<Array[i][n-1-i]<<" "<<endl;
		v.push_back(Array[i][n-1-i]);
	}
	int max=0;
	for (int i = 0; i < v.size()-1; i++){
		if (abs(v[i]+v[i+1])>=max){
			if(abs(v[i]+v[i+1])==max){
				buf.push_back(i);
			}
			else{
			buf.clear();
			max=abs(v[i]+v[i+1]);
			buf.push_back(i);
			}
		}
	}
	cout<<endl<<"Max summ pairs:"<<endl;
	for (int i = 0; i < buf.size(); i++){
		//cout<<i<<" "<<n-1-buf[i]+1<<endl;
		cout<<i+1<<") "<<n-buf[i]-1<<" "<<n-buf[i]<<endl;
	}
	cout<<endl;
}