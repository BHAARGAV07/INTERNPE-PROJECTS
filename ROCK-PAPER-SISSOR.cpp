#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int Mychoice,Computerchoice;
	cout<<"1.Rock"<<endl<<"2.Paper"<<endl<<"3.Sissor"<<endl;
	cout<<"Enter Your Choice: ";
	cin>>Mychoice;
	srand(time(0));
	Computerchoice = rand()%3+1;
	cout<<"Computer Choice:  "<<Computerchoice<<endl<<"Your choice: "<<Mychoice<<endl;
	if(Mychoice == Computerchoice){
		cout<<Computerchoice <<endl<<"It's A Tie"<<endl;
	}
	else if((Mychoice==1 && Computerchoice==3) || (Mychoice==2 && Computerchoice==1) && (Mychoice==3 && Computerchoice==2)){
		cout<<"You Won"<<endl;
	}
	else{
		cout<<"Computer Won"<<endl;
	}
}
