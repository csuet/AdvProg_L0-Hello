#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int count=100;
int Maxscore=10000;
int generateRandomNumber(int min=1,int max=100);
int getPlayerNumber();
void printAnswer(int guess,int secretNumber);
int main(){
	srand(time(NULL));
	int secretNumber=generateRandomNumber();
	int guess;
	do{
		guess=getPlayerNumber();
		printAnswer(guess,secretNumber)	;
	} while(guess!=secretNumber);
	return 0;
}
int generateRandomNumber(int min,int max){
	
	return min+rand()%(max-min+1);
}
int getPlayerNumber(){
	cout<<"Enter your guess:";
	int guess;
	cin>>guess;
	return guess;
}
void printAnswer(int guess,int secretNumber){
	if(guess==secretNumber) cout<<"Congratulation! You win!"<<endl;
	else if(guess>secretNumber){
	cout<<"Your score is: "<<Maxscore-2*count<<endl;
	cout<<"Your number is too big"<<endl;
	count--;
	}
	
	else {
	cout<<"Your score is: "<<Maxscore-2*count<<endl;
	cout<<"Your number is too small"<<endl;
	count--;
	}
	
}
