#include <stdio.h>

int main() 
{
    float c1,c2,c3,c4,c5;
    float agg,total;
    
    printf("Enter your marks in all the courses");
    scanf("%f%f%f%f%f",&c1,&c2,&c3,&c4,&c5);
    
    total = c1+c2+c3+c4+c5;
    agg = total/5;

    if(agg<40) {
        printf("\nResult: FAIL\n");
    } else {

        printf("\nResult: PASS\n");
        printf("Aggregate Percentage: %.2f%%\n", agg);

        if(agg >= 75)
            printf("Grade: Distinction\n");
        else if(agg >= 60)
            printf("Grade: First Division\n");
        else if(agg>= 50)
            printf("Grade: Second Division\n");
        else if(agg >= 40)
            printf("Grade: Third Division\n");
    }

    return 0;
}

