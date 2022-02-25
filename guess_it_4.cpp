#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
string Decision="YES";
int generateRandomNumber(int min=1,int max=100);
int getPlayerNumber();
void printAnswer(int guess,int secretNumber);
int PlayGuessIt();
int main(){
	while(Decision=="YES") PlayGuessIt();
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
	if(guess==secretNumber) {
	cout<<"Congratulation! You win!"<<endl;
	cout<<"Play again? YES/NO? ";
	cin>>Decision;
	
}
	else if(guess>secretNumber)cout<<"Your number is too big"<<endl;
	else cout<<"Your number is too small"<<endl;
	
}
int PlayGuessIt(){

srand(time(NULL));
	int secretNumber=generateRandomNumber();
	int guess;
	do{
		guess=getPlayerNumber();
		printAnswer(guess,secretNumber)	;
	} while(guess!=secretNumber);
}
