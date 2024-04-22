#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<limits>

using namespace std;

int main(){
	
	srand(time(0));
	
	int randomNumber = rand() % 100 + 1 ;
	int guess;
	int attempts = 0 ;
	
	cout<<"Welcome to Number Guessing Game Extreme Edition\n ";
    cout << "I have selected a number between 1 and 100. Can you guess what it is?\n";
    
    do{
    	
    	cout<<"Enter your guess (1-100) : ";
    	cin>>guess;
    	attempts ++ ;
    	
    	if(cin.fail() || guess<1 || guess>100){
    		
    		cin.clear();
    		cin.ignore(numeric_limits<streamsize>::max() , '\n');
    		cout << "Invalid input. Please enter a number between 1 and 100.\n";
            continue;
            
		}
		
		if (guess > randomNumber){
			cout<<"Too high ! Try Again ... \n";
		}
		else if (guess < randomNumber){
			cout<<"Too low ! Try Again ... \n";
		}
		else{
		    cout << "Congratulations! You guessed it right in " << attempts << " attempts.\n";
		}
	
	} while (guess != randomNumber);

     return 0 ;
}
