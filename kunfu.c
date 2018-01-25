#include <stdio.h>
int tot_mins;  
int hrs;          
int mins;        

const int MINaHOUR = 60;      

char num_text[50];     

int main() {
	printf("Input minutes: ");
	fgets(num_text, sizeof(num_text), stdin);
	sscanf(num_text, "%d", &tot_mins);

	hrs = (tot_mins / MINaHOUR);
	mins = (tot_mins % MINaHOUR);

	printf("%d Hours, %d Minutes.\n", hrs, mins);

	return(0);
}
