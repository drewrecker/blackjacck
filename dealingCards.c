/*=====================================================================================
| Description: This program will...
|
| Deficiences: I know of no unsatisfied requirements and there are no known logic errors
|=====================================================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "groupProject.c"

struct card dealingCards(){

	struct card dealt;

	int hearts[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	int spades[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13}; 
	int clubs[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13}; 
	int diamonds[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13}; 


	int check = 1;

	//Sets loop for drawing cards
	while(check == 1){

		srand(time(NULL));

		//Randomly picks a suit
		int suit = rand() %4 + 1;

		//Randomly picks a card number
		int number = rand() %13 +1;
		dealt.value = number;

		//Test if card has already been drawn
		if(suit == 1){
                	if(hearts[number] == NULL);
        	}                 
        	else if(suit == 2){
                	if(spades[number] == NULL);
        	}
        	else if(suit == 3){ 
                	if(clubs[number] == NULL);
        	}
        	else if(suit == 4){
                	if(diamonds[number] == NULL);
        	}
		else{
			check = 0;
		}

	}//while end

	//Keeps track of cards picked
	if(dealt.suit == "Hearts"){
		heart[dealt.value] = NULL;
	}
	else if(dealt.suit == "Spades"){
		spade[dealt.value] = NULL;
	}
	else if(dealt.suit == "Clubs"){
		clubs[dealt.value] = NULL;
	}
	else if(dealt.suit == "Diamonds"){
		diamonds[dealt.value] = NULL;
	}

	//Randomly picks a suit
        switch(suit){
                case 1:
                        dealt.suit = "Hearts";
                        break;
                case 2:
                        dealt.suit = "Spades";
                        break;
                case 3:
                        dealt.suit = "Clubs";
                        break;
                case 4:
                        dealt.suit = "Diamonds";
                        break;
        }


	//Gives numbers 1,11-13 their name
	if(number == 11){
		dealt.appearance = "J";
	}
	else if(number == 12){
		dealt.appearance = "Q";
	}
	else if(number == 13){
		dealt.appearance = "K";
	}
	else if(number == 1){
		dealt.appearance = "A";
	}

}
