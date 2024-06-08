Electricity board has decided to charge rupees based on the units consumed by a particular home. If the units consumed is less than or equal to 200, the cost for one unit is 0.5. If the unit is less than or equal to 400, the cost for one unit is 0.65 and Rs.100 extra charge. If the unit is less than or equal to 600, the cost for one unit is 0.80 and Rs.200 extra charge. If the unit is greater than 600 the cost for one unit is 1.25 and Rs.425 extra charge. You need to now calculate the electricity bill based on the units consumed (given input).
Input Format
Input consists of one integer. This corresponds to the units consumed.
Constraints
1<=n<=10^7
Output Format
The output consists of one integer. This corresponds to the electricity bill in rupees.
Sample Input 0
200
Sample Output 0
Rs.100

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int cost;
    if(n<=200){
        cost=n*0.5;
    }
    else if(n>200&&n<=400){
        cost=(n*0.65)+100;
    }
    else if(n>400&&n<=600){
        cost=(0.80*n)+200;
    }
    else
        cost=(1.25*n)+425;
    printf("Rs.%d",cost);
    return 0;
}
