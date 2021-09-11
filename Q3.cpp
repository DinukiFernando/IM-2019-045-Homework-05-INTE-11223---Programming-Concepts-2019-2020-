//distance that calculates the distance between two points (x1, y1) and (x2, y2)

#include<iostream>
#include<math.h>
using namespace std;

//phototype function
double distanceBetweenTwoPoints(double x1,double x2,double y1,double y2);

int main(){
	//getting user inputs
	double x1,x2,y1,y2,distance;
	cout<<"Enter x1:  ";
	cin>>x1;
	cout<<"Enter x2:  ";
	cin>>x2;
	cout<<"Enter y1:  ";
	cin>>y1;
	cout<<"Enter y2:  ";
	cin>>y2;
	cout<<endl;
	 
	cout<<"The distance between two points (" <<x1<<","<<y1<<") and ("<<x2<<","<< y2<<") = "<<distanceBetweenTwoPoints(x1,x2,y1,y2);   //calling function
	
	return 0;
}

double distanceBetweenTwoPoints(double x1,double x2,double y1,double y2){   
	double distance=sqrt(  pow((x2-x1),2) +  pow((y2-y1),2)  );
	return distance;	
}

