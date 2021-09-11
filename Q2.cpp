#include<iostream>
using namespace std;

//phototype function
int result(int hours,int minutes,int seconds);

int main(){
	int hours[2],minutes[2],seconds[2];       //creating the arrays for hours,minutes and seconds
	int total[2];
	
	cout<<"Input Time 1 and Time 2"<<endl;
	cout<<"........................"<<endl;
	
	for(int i=0;i<2;i++){                               //loop the code for two times
	cout<<"Enter hours (between 1 and 12): ";            //getting value for hours
	while(true){                                   
		cin>>hours[i];
		if(hours[i]>=1 && hours[i]<=12){
			break;}
		else{
			cout<<"Enter hours (between 1 and 12): ";
			continue;
		}
	}
	
	cout<<"Enter minutes (between 0 and 59): ";            //getting value for minutes
	while(true){
		cin>>minutes[i];
		if(minutes[i]>0 && minutes[i]<61 ){
			break;}
		else{
			cout<<"Enter minutes (between 0 and 59): ";
			continue;
		}
	}
	
	cout<<"Enter seconds (between 0 and 59): ";           //getting value for seconds
	while(true){
		cin>>seconds[i];
		if(seconds[i]>0 && seconds[i]<61){
			break;}
		else{
			cout<<"Enter seconds (between 0 and 59): ";
			continue;
		}
	}
	
	
cout<<"Time "<<i+1<<" = "<<hours[i]<<":"<<minutes[i]<<":"<<seconds[i]<<endl;
cout<<endl;
}

//total array uses to store the time in seconds
total[0]=result(hours[0],minutes[0],seconds[0]);           //call the function two times       
total[1]=result(hours[1],minutes[1],seconds[1]);

int diftime;
if(total[0]>total[1]){                                 //check the max value
	diftime=total[0]-total[1];
}else if(total[1]>total[0]){
	diftime=total[1]-total[0];
}else{
	diftime=0;
}
   //print the output
cout<<"Time 1 "<<"="<<hours[0]<<":"<<minutes[0]<<":"<<seconds[0]<<" and Time 2 "<<"="<<hours[1]<<":"<<minutes[1]<<":"<<seconds[1]<<endl<<endl;
cout<<"Different between time 1 and time 2 :  "<<diftime;

return 0;
}

int result(int hours,int minutes,int seconds){
	return hours*3600+minutes*60+seconds;
}
