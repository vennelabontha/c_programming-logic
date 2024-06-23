A supermarket maintains a pricing format for all its products. A value N is printed on each product. When the scanner reads the value N on the item, 
the product of all the digits in the value N is the price of the item. The task here is to design the software such that given the code of any item N the product (multiplication) 
of all the digits of value should be computed(price).
Input Format
Read n value
Constraints
1<=n<=10^7
Output Format
Product of digits
Sample Input 0
5244
Sample Output 0
160
Sample Input 1
32650
Sample Output 1
180

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int digit,remain;
    int product=1;
    while(n>0){
        digit=n%10;
        if(digit!=0){
           product=(product*digit); 
        }
        remain=n/10;
        n=remain;
    }
    printf("%d",product);
    return 0;
}
