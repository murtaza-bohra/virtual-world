#include<iostream>

using namespace std;

int main(){
	int year, month,temp,space,l_date;
	cin>>year>>month;
	temp=year%100;
	temp/=4;
	temp++;
	switch(month){
		case 1: {
			temp+=1;
			break;
		}
		case 2: {
			temp+=4;
			break;
		}
		case 3: {
			temp+=4;
			break;
		}
		case 4: {
			temp+=0;
			break;
		}
		case 5: {
			temp+=2;
			break;
		}
		case 6: {
			temp+=5;
			break;
		}
		case 7: {
			temp+=0;
			break;
		}
		case 8: {
			temp+=3;
			break;
		}
		case 9: {
			temp+=6;
			break;
		}
		case 10: {
			temp+=1;
			break;
		}
		case 11: {
			temp+=4;
			break;
		}
		case 12: {
			temp+=6;
			break;
		}
		
	}
	if((month==1 || month==2)&& year%4==0 ){
		temp--;
	}
	if(year/1000==2){temp+=6;}
	temp=temp+(year%100);
	space=temp%7;
	cout<<"Su Mo Tu We Th Fr Sa"<<endl;
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){ l_date=31; }
	else if (month==2){
		l_date=28;
		if(year%4==0){ l_date=29;}
	}
	else { l_date=30;}
	int i=1;
	for(int j=1;j<space;j++){ 
		cout<<"   ";
		i++;
	}
	for(int date=1;date<=l_date;date++){
		cout<<date<<" ";
		if(date<10){cout<<" ";
		}
		if(i%7==0){ cout<<endl;
		}
		i++;
	}
	return 0;
}
