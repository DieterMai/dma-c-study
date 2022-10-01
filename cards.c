#include <stdio.h>
#include <stdlib.h>

int main(){
	char card_name[3];
	int count = 0;
	
	while(card_name[0] != 'X'){
		puts("Enter the card name: ");
		scanf("%2s", card_name);
		
		int val = 0;
		
		switch(card_name[0]){
		case 'K':
		case 'J':
		case 'A':
			val = 10;
			break;
		case 'X':
			puts("Quit card game");
			continue;
		default:
			val = atoi(card_name);
			if( val < 2 ){
				puts("Invalid input");				
				continue;
			}
			break;
		}
			
		if( val >= 10){
			count++;
			puts("Count has gone up");

		}else if( val <= 6){
			count--;
			puts("Count has gone down");
		}
		
		printf("Count is at %i\n", count);
		printf("The card value is:  %i\n", val);	
	}

	return 0;
}