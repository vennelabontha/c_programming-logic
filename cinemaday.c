There is a practice of showing a cinema in the auditorium of a college on a cinema day. 
A cinema day is a day where the sum of Day(D), Month(M), Year(Y)should be divisible by 
product of 3 and 4. On that particular day the total number of students in the hostel should be 
greater than 50 but less than 100. Write a program to find whether the given day is cinema day or not.
Input Format
Read day,month,year and number of students
Constraints
1<=n<=10^7
Output Format
Print Cinema Day or Not a Cinema Day
Sample Input 0
3 
3 
1914 
76
Sample Output 0
Cinema Day

#include <stdio.h>

int is_cinema_day(int day, int month, int year, int num_students) {
    // Check if the sum of Day, Month, and Year is divisible by 12 (product of 3 and 4)
    if ((day + month + year) % 12 == 0) {
        // Check if the number of students is within the required range
        if (num_students > 50 && num_students < 100) {
            return 1; // Cinema Day
        }
    }
    return 0; // Not a Cinema Day
}

int main() {
    int day, month, year, num_students;
    scanf("%d", &day);
    scanf("%d", &month);
    scanf("%d", &year);
    scanf("%d", &num_students);
    
    // Output
    if (is_cinema_day(day, month, year, num_students)) {
        printf("Cinema Day\n");
    } else {
        printf("Not a Cinema Day\n");
    }
    
    return 0;
}
