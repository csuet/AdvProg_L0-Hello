#include<iostream>
#include<cstdlib>
using namespace std;
int secretNumber(int low,int high);
char getHostAnswer(int X);
int main(){
	int X;
	char answer;
	int low=1;
	int high=100;
	do{
		X=secretNumber(low,high);
		answer = getHostAnswer(X);
		if(answer=='='){
			cout<<"Your number is "<<X<<endl;
		}
		else if(answer=='<'){
			low=X+1;
			
		}
		else high=X-1;
		}while(answer !='=');
		return 0;
	
}
int secretNumber(int low,int high){
	return low+(high-low)/2;
//	return low+rand()%(high-low+1);
}
char getHostAnswer(int X){
	char answer;
	cout<<"Is your number "<<X<<"? ( >/</=) ";
	cin>>answer;
	return answer;
}
