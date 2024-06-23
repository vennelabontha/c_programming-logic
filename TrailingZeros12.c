You are playing an online game. In the game, a numbers is displayed on the screen. In order to win the game, you have to Count the trailing zeros in the 
factorial value of the given number. Write an algorithm to count the trailing zeros in the factorial value of the given number.
Input Format
The input consists of an integer num, representing the number displayed on the screen.
Constraints
1<=n<=10^7
Output Format
Print An integer representing the count of trailing zeros in the factorial of the given numbers.
Sample Input 0
5
Sample Output 0
1
Explanation 0
On calculating the factorial of 5, the output is 120 (1 x2x3x4x5). There is only one trailing 0 in 120, So the output is 1.
Sample Input 1
4
Sample Output 1
0
Sample Input 2
7
Sample Output 2
1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,fact=1,count=0;
    int d;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
   // printf("%d",fact);
    while(fact!=0){
      d=fact%10;
        if(d==0){
            count++;
        }
        else{
            break;
        }
        fact=fact/10;
        
    }
    printf("%d",count);
    return 0;
}
