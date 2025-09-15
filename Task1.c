#include <stdio.h>
int main(){
	int vowel = 0;
	int consonants = 0;
	
 	char letter1;
 	char letter2;
 	char letter3;
 	
 	printf("enter letter 1: ");
	letter1 = getchar();
	getchar();
	
	printf("enter letter 2: ");
	letter2 = getchar();
	getchar();
	
	printf("enter letter 3 : ");
	letter3 = getchar();
	getchar();
	 	
	 	switch(letter1){
	 		case 'a': vowel++; break;
	 		case 'e': vowel++; break;
	 		case 'i': vowel++;break;
	 		case 'o': vowel++; break;
	 		case 'u': vowel++; break;
	 		case 'A': vowel++; break;
	 		case 'E': vowel++; break;
	 		case 'U' : vowel++; break;
	 		case 'I' : vowel++; break;
	 		case '0' : vowel++; break;
	 		
	 		default: consonants++;
	 		break ;
		 }
		 
		 switch(letter2){
	 		case 'a': vowel++; break;
	 		case 'e': vowel++; break;
	 		case 'i': vowel++;break;
	 		case 'o': vowel++; break;
	 		case 'u': vowel++; break;
	 		case 'A': vowel++; break;
	 		case 'E': vowel++; break;
	 		case 'U' : vowel++; break;
	 		case 'I' : vowel++; break;
	 		case '0' : vowel++; break;
	 		
	 		default: consonants++;
	 		break ;
		 }
		 
		 switch(letter3){
	 		case 'a': vowel++; break;
	 		case 'e': vowel++; break;
	 		case 'i': vowel++;break;
	 		case 'o': vowel++; break;
	 		case 'u': vowel++; break;
	 		case 'A': vowel++; break;
	 		case 'E': vowel++; break;
	 		case 'U' : vowel++; break;
	 		case 'I' : vowel++; break;
	 		case '0' : vowel++; break;
	 		
	 		default: consonants++;
	 		break ;
		 }
		 
		 printf("vowels: %d\n" , vowel);
		printf("consonants: %d\n" , consonants);
 	return 0;
}
