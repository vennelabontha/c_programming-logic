Repeatedly find the sum of digits of a number until it becomes a single-digit number (say sod). Then compute the factorial of sod and print it.
Input Format
One line containing an integer "n" denoting number
Constraints
1<=n<=10^7
Output Format
One number denoting the factorial of single digit
Sample Input 0
23
Sample Output 0
120
Explanation 0
Sum of digits: 23 --> 2+3 = 5 Factorial of 5 is 120
Sample Input 1
99
Sample Output 1
362880
Explanation 1
sum of digits 99 --> 9+9=18 if result>9 then repeat the same process until single digit 18 --> 1+8=9 Factorial of 9 is 362880

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //vennela 21up1a6610 AIML
    int num,sum;
    long int fact;
    scanf("%d",&num);
    sum=0,fact=1;
    while(num>0||sum>9){
        if(num==0){
            num=sum;
            sum=0;
        }
       sum+=num%10;
        num/=10;
    }
    for(int i=1;i<=sum;i++){
        fact=fact*i;
    }
    printf("%ld",fact);
    return 0;
}
