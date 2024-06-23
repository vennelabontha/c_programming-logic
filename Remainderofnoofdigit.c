The function/method count Digits return an integer representing the remainder when the given number is divided by the number of digits in it. 
The function/method count Digits accepts an argument-num,an integer representing the given number. The function/method countDigits compiles code successfully 
but fails to get the desirable result for some test cases due to logical errors. Your task is to fix the code so that it passes all the test cases.
Input Format
Read a number
Constraints
1<=n<10^7
Output Format
Print remainder of number by no of digits
Sample Input 0
785
Sample Output 0
2

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  int num;
    scanf("%d",&num);
    int digit=(int)log10(num)+1;
    printf("%d",(num%digit));
    return 0;
}
