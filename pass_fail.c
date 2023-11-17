#include <stdio.h>
int main(){
    int grade;
    printf("Enter your grade: ");
    scanf(" %d", &grade);

    if( grade < 45){
        printf("You failed.");        
    }
    else{
        printf("You passed.");
    }
    
    if( grade > 90){
    	printf("A");
	}
	else if( grade > 75){
		printf("B");
	}
	else if( grade > 55){
		pritnf("C");
	}
	else if(grade > 45 ){
		printf("D");
	}
	else{
		printf("F");
	}

    return 0;
}
