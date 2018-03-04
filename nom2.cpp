#include <iostream>
using namespace std;
int main()
{
    FILE *fp;
	fp = fopen("readfile1.txt", "r"); 
	 int  n, i; 
	 int array[10];
	 
	 n = 0;
    while (!feof(fp)) {
		fscanf(fp,"%4d", &array[n]);	
		n = n+1;
	} 
	
	fclose(fp);
	int result=0;
	for(i=0; i<n; i++){
	  	printf(" %4d", array[i]);
	  	if((array[i]%7!=1)&&(array[i]%7!=3)&&(array[i]%7!=5)){
	  		result++;
	  	}
	  }
	cout<<endl<<"result "<<result<<endl;
	}

