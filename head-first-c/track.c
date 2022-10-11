#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	
	char tracks[][80] = {
		"I left my heart in Havard Med School",
		"Newark, Newark - a wunderful town",
		"Danceing with a Dork",
		"From here to maternity",
		"The girl from Iwo Jima"
	};
	
	for(int i = 0; i < 5; i++){
		puts(tracks[i]);
	}
	
	char input[80];
	puts("");
	puts("What are you searching for?");
	fgets(input, 80, stdin);
	
	printf("Input: '%s'\n", input);
	
	int matchingIndex = -1;
	for(int i = 0; i < 5; i++){
		if(strstr(tracks[i], input)){
			matchingIndex = i;
		}else{
			printf("No match of '%s' in '%s'\n", input, tracks[i]);
		}
	}

	if(matchingIndex > -1){
		printf("Matching track: %s\n", tracks[matchingIndex]);
	}else{
		printf("No match\n");
	}
	fgets(input, 80, stdin);
	return 0;
}