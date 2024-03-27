#include <stdio.h>

void calc_age(int curr_m, int curr_d, int curr_y, int birth_m, int birth_d, int birth_y, int *years, int *months, int *days);

int main() {
    int curr_m, curr_d, curr_y;
    int birth_m, birth_d, birth_y;
    
    int years, months, days; // declare these variables

    printf("Enter Current Date (MM DD YYYY): ");
    scanf("%d %d %d", &curr_m, &curr_d, &curr_y); 

    printf("Enter Your Birth Date (MM DD YYYY): ");
    scanf("%d %d %d", &birth_m, &birth_d, &birth_y);
    
    calc_age(curr_m, curr_d, curr_y, birth_m, birth_d, birth_y, &years, &months, &days); // remove type declarations
    printf("Your age is %d years %d months and %d days!\n", years, months, days);

    return 0;
}

void calc_age(int curr_m, int curr_d, int curr_y, int birth_m, int birth_d, int birth_y, int *years, int *months, int *days){
    *years = curr_y - birth_y;
    *months = curr_m - birth_m;
    *days = curr_d - birth_d;

    if (*days < 0) {
        *months -= 1;
        // Using a simple approach of 30 days per month
        *days += 30;
    }

    if (*months < 0) {
        *years -= 1;
        *months += 12;
    }
}


