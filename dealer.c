/*==========================================================================================
| Author: Drew Recker ||||| reckera1@my.erau.edu
|
| Description: This program will take in an array of cards to see if they need
|   to hit.
|
| Deficiencies: I know of no unsatisfied requirements and there are no known logic errors.
*=========================================================================================*/

#include "dealingCards.c"


int dealer(card dealerHand[3]){

	int dealerSum = dealerHand[1].value + dealerHand[2].value;

	while (dealerSum < 17) {
		struct card newCard = hit();
		dealerSum = dealerSum + newCard.value;
        }

        return dealerSum;

}

