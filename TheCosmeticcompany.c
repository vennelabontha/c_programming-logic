The cosmetic company “BeautifyMe” has decided to reward its brand promoters with a batch of cosmetics. Each batch is identified by a unique numeric barcode. 
Each digit of the barcode number represents a product ID of the products present in the batch. Before distributing the products to its promoters, 
the company wants to make sure that all products present in the batch are still fresh and safe to use. The distribution center has therefore been advised to 
identify the oldest product in each batch is the one with the smallest product ID. There can be multiplies of the same product in one batch.
Input Format
Read n denoting the product ID
Constraints
1<=n<=10^7
Output Format
Print an integer representing the ID …..oldest product present in the batch.
Sample Input 0
345627
Sample Output 0
2
Explanation 0
The smallest product ID is 2. Hence it is the oldest product.
Sample Input 1
341827
Sample Output 1
1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,r;
    scanf("%d",&n);
    int min=n%10;
    while(n!=0){
        r=n%10;
        if(min>r)
           min=r;
        n=n/10;
            
    }
    printf("%d",min);
    return 0;
}
