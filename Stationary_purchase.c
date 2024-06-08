Mr.Kumar went to purchase stationary items for his office. He asked the shopkeeper for a discount. The shopkeeper said that if he purchases more than 200 quantity of the item, then a discount of 20% can be applied on the total bill amount, excluding the GST. Get the Quantity and price per item as an input and calculate and tell whether Mr.Kumar is eligible for the discount and what would be the net amount he has to pay after the discount. Take the GST at 18%. Net Amount = Total bill amount after discount + GST
Input Format
Enter quantity Enter price per unit
Constraints
1<=n<=10^7
Output Format
Print the output
Sample Input 0
100
5
Sample Output 0
Quantity Ordered 100
Price per item is Rs.5
Total Amount = Rs.500
GST - Rs.90.0
Net Amount Payable is Rs.590.0

Sample Input 1
350
20
Sample Output 1
Quantity Ordered 350
Price per item is Rs.20
Total Amount = Rs.7000
Discount Earned = Rs.1400.0
Amount after Discount - Rs.5600.0
GST - Rs.1008.0
Net Amount Payable is Rs.6608.0

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int quant,price;
    scanf("%d %d",&quant,&price);
    int total=quant*price;
    float gst=0.0,dis=0.0,net=0.0;
    printf("Quantity Ordered %d\n",quant);
    printf("Price per item is Rs.%d\n",price);
    printf("Total Amount = Rs.%d\n",total);
    
    if(quant>200){
        dis=(0.2)*total;
        net=total-dis;
        gst=(0.18)*net;
        printf("Discount Earned = Rs.%.1f\n",dis);
        printf("Amount after Discount - Rs.%.1f\n",net);
        printf("GST - Rs.%.1f\n",gst);
        printf("Net Amount Payable is Rs.%.1f\n",(net+gst));
    }
    else{
        gst=(0.18)*total;
        printf("GST - Rs.%.1f\n",gst);
        printf("Net Amount Payable is Rs.%.1f\n",(total+gst));
    }
    return 0;
}
