#include<stdio.h>

int main (){
    int marks;
    printf("enter marks (0-100): ");
    scanf("%d", &marks);

    if(marks>= 0 && marks<30){
        printf("life haga hai tu \n");
    }
    else if(marks>30 && marks<70){
        printf("Kya krra hai tu");
    }
    else if (marks>70 && marks<90){
        printf("sabash beta bahut badhiya");
    }
    else if (marks>90 && marks<=100){
        printf("ruk saale zinda pakadenge teko aaj");

    }
    else{
        printf("gand ke aandhe");
    }
}