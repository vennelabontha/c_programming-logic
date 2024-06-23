Write a Python program to find the sum of the series 2 +22 + 222 + 2222 + .. n terms
Input Format
Line 1:
Constraints
1<=n<=10^7
Output Format
Sample Input 0
5
Sample Output 0
24690
Sample Input 1
7
Sample Output 1
2469134

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,sum=0;
    int val=2;
    scanf("%d",&n);
    while(n>0){
        sum+=val;
        val=(val*10)+2;
        //printf("%d ",sum);
        n--;
    }
    printf("%d",sum);
    
    return 0;
}
