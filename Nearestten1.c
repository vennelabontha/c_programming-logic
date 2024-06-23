Write a program to return the nearest 10 multiple of any given number
Input Format
Read a number
Constraints
1<=n<=10^7
Output Format
Print nearest 10 multiple no
Sample Input 0
18
Sample Output 0
20
Sample Input 1
134
Sample Output 1
130
Sample Input 2
155
Sample Output 2
160

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int rem =n%10;
    if(rem<5)
        printf("%d",(n-rem));
    else
        printf("%d",(n+(10-rem)));
    return 0;
}
