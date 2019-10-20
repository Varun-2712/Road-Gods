#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


int rows,col;
cin>>rows>>col;
int **a=new int*[rows];
for(int i=0;i<rows;i++){
	
	a[i]=new int [col];
}

int num=1;
for(int i=0;i<rows;i++){
	for(int j=0;j<col;j++){
		a[i][j]=num;
		num++;
	}
}
for(int i=0;i<rows;i++){
	for(int j=0;j<col;j++){
		
		cout<<a[i][j]<<" ";
	}
cout<<endl;
}
for(int i=0;i<rows;i++){
	delete a[i];
}

delete []a;
	return 0;
}
