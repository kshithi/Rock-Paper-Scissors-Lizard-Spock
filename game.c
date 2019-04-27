#include <stdio.h>
int main(){
	char x,y;
	char R,C,L,S,P;
	scanf("%s %s" ,&x,&y);
	if (x=='R'){
		if ((y=='C')||(y=='L')){
		printf("Player 1 wins\n");
		}
			else if ((y=='S')||(y=='P')){
			printf("Player 2 wins\n");
			}
				else if (y==('R')){
				printf("Tie\n");
				}}
				//else {
				//printf("Wrong input\n");
				//}}
	
	else if (x=='P'){
		if ((y=='R')||(y=='S')){
		printf("Player 1 wins\n");
		}
			else if ((y=='C')||(y=='L')){
			printf("Player 2 wins\n");
			}
				else if (y==('P')){
				printf("Tie\n");
				}}
				//else {
				//printf("Wrong input\n");
				//}}
	else if (x=='C'){
		if ((y=='P')||(y=='L')){
		printf("Player 1 wins\n");
		}
			else if ((y=='S')||(y=='R')){
			printf("Player 2 wins\n");
			}
				else if (y==('C')){
				printf("Tie\n");
				}}
				//else {
				//printf("Wrong input\n");
				//}}
	else if (x=='S'){
		if ((y=='C')||(y=='R')){
		printf("Player 1 wins\n");
		}
			else if ((y=='L')||(y=='P')){
			printf("Player 2 wins\n");
			}
				else if (y==('S')){
				printf("Tie\n");
				}}
				//else {
				//printf("Wrong input\n");
				//}}
	else if (x=='L'){
		if ((y=='P')||(y=='S')){
		printf("Player 1 wins\n");
		}
			else if ((y=='C')||(y=='R')){
			printf("Player 2 wins\n");
			}
				else if (y==('L')){
				printf("Tie\n");
				}}
	else {
		printf("Wrong input\n");
		}
	return 0;
	}













