Write a program to check whether the person is eligible to donate blood. Age must be 18 or above. Weight must be 45 or above. Hemoglobin must be 5.5 or above.
Input Format
First input consists of age Second Input consists of weight Third Input consists of hemoglobin level.
Constraints
1<=n<=10^7
Output Format
Eligible then display He or She can donate blood Not eligible then display He or She unable to donate blood
Sample Input 0
15
44
5.4
Sample Output 0
He or She unable to donate blood

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int age,wei;
    float hem;
    scanf("%d %d",&age,&wei);
    scanf("%f",&hem);
    if(age>=18){
        if(wei>=45){
            if(hem>=5.5){
                printf("He or She can donate blood");
            }
        }
    }
    else
        printf("He or She unable to donate blood");
    
    return 0;
}
