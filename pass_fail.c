#include <stdio.h>
int main(){
    int grade;
    printf("Enter your grade: ");
    scanf(" %d", &grade);

    if( grade < 45){
        printf("You failed.");        
    }
    else{
        printf("You passed.\n");
    }
    printf("With: ");

    if( grade > 90){
    	printf("A");
	}
	else if( grade > 75){
		printf("B");
	}
	else if( grade > 55){
		printf("C");
	}
	else if(grade > 45 ){
		printf ("D");
	}

    return 0;
}
