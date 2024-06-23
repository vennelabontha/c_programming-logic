Write a code to read a number and print number in words
Input Format
Read n value
Constraints
1<=n<=10^7
Output Format
Print number in words
Sample Input 0
3456
Sample Output 0
THREE FOUR FIVE SIX

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void display(int);
void display(int);
void digit(int n){
    int temp;
    while(n!=0){
        temp=n%10;
        display(temp);
        n/=10;
    }
}
void display(int num){
    switch(num){
        case 0: printf("ZERO ");
            break;
        case 1: printf("ONE ");
            break;
        case 2: printf("TWO ");
            break;
        case 3: printf("THREE ");
            break;
        case 4: printf("FOUR ");
            break;
        case 5: printf("FIVE ");
            break;
        case 6: printf("SIX ");
            break;
        case 7: printf("SEVEN ");
            break;
        case 8: printf("EIGHT ");
            break;
        case 9: printf("NINE ");
            break;
        default:
            printf("Invalid ");
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num,sum=0;
    scanf("%d",&num);
    if(num==0){
        printf("ZERO");
    }
    else{
        while(num!=0){
            sum=(sum*10)+(num%10);
            num/=10;
        }
       digit(sum);
    }
    return 0;
}
