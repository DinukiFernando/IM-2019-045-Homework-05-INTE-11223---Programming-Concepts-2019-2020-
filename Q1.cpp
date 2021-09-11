
/*integerPower( base, exponent ) that returns the value of base^exponent*/

#include<iostream>
using namespace std;

int integerPower(int x,int y){         //returns the value of base^exponent 
	int result=1;
	for(int i=0;i<y;i++){
		result=x*result;
	}	
	return result;
}

int main(){
	int x,y;	                             
	cout<<"Enter the  base number: ";
	cin>>x;
	cout<<endl;
	
	cout<<"Enter the exponent number(Exponent must be a positive, nonzero integer): ";

//checking the exponent which must be a positive, nonzero integer	
	while(true){                                 
		cin>>y;
		if(y>0 && y!=0 ){
			break;
		}
		else{
			cout<<"Try again! Enter the exponent number: ";
			continue;
		}		
	}
cout<<endl;
	cout<<"Integer Power of ("<<x<<"^"<<y<<") = "<<integerPower(x,y);              // calling the function
	
return 0;
}



