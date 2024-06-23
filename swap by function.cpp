#include <iostream>

using namespace std;

//int global=7;
void SwapValues(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	//cout<<"Value of Golbal variable in SwapValues Function is : "<<global<<endl;
	//global++;
}

int main(int argc, char** argv) {
	
	int a=5, b=4;
	cout<<"Values before Swapping : "<<endl;
	cout<<a<<"\t"<<b<<endl;
	SwapValues(a,b);
	cout<<"Values After Swapping : "<<endl;
	cout<<a<<"\t"<<b<<endl;
	//cout<<"Value of Golbal variable in SwapValues Function is : "<<global<<endl;
	return 0;
}

/*int num1,num2;
void SwapValues()
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	
}

int main(int argc, char** argv) {
	
	 num1=5, num2=4;
	cout<<"Values before Swapping : "<<endl;
	cout<<num1<<"\t"<<num2<<endl;
	SwapValues();
	cout<<"Values After Swapping : "<<endl;
	cout<<num1<<"\t"<<num2<<endl;
	return 0;
}*/
