#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0)); // To get different sequence
	int RandomNumber = rand() % 50 + 1;//To generate number between 1 to 50
	int PlayerGuess;
	cout<<"Try to guess numbers between 1 to 50";
	do
	{
		cin>>PlayerGuess;
		if(RandomNumber > PlayerGuess){
			cout<<"Your guess is low"<<endl<<"Try Again!";
		}
		else if(RandomNumber < PlayerGuess){
			cout<<"Your guess is high"<<endl<<"Try Again!";
		}
		else{
			cout<<"Congratz you guessed it";
		}
	}while(PlayerGuess != RandomNumber);
	return 0;
}
