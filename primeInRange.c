Write a program to display all the Prime Numbers between a given range of numbers.
Input Format
Constraints
1<=n<=10^7
Output Format
Sample Input 0
25
50
Sample Output 0
29 31 37 41 43 47
Sample Input 1
100
200
Sample Output 1
101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ int m,n;
    scanf("%d %d",&m,&n);
    int count=0;
    for(int i=m;i<=n;i++){
        for(int j=3;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
            else
                count=0;
        }
        if(count==0){
            printf("%d ",i);
        }
    }
    
    return 0;
}
