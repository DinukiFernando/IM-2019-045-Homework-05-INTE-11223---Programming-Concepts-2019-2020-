
/*Design a recursive function that take a positive value of N as 
input, and outputs the first N elements of the Fibonacci series.*/

#include<iostream>
using namespace std;

//phototype function
int fibonacci(int n);

int main(){
	
	int n,num;             //getting user inputs
	cout<<"Enter N: ";     //9
	cin>>n;
	cout<<endl;
	cout<<"The first "<<n<<" elements of the Fibonacci series: " <<fibonacci(n);
	
	return 0;
}

int fibonacci(int n){
	if(n<=1)
		return n;
	int result= fibonacci(n-1)+fibonacci(n-2);//8+ 7+6+ 5+4+ 3+2+ 1
	return result;     //34
}

