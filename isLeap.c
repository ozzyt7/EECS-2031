#include <stdio.h>
int countRemainDays(int, int, int);
int isLeap(int);

int main(){
    int days,year,month, remainDays;

    printf("Enter a date (YYYY MM DD): ");
    scanf("%d %d %d", &year, &month, &days);

    
    while (year > 0){

        remainDays = countRemainDays(month, days, isLeap(year));

        printf("The remaining days of %d are: %d", year, remainDays);
        if (isLeap(year) > 0){
            printf("[leap year]\n\n");
        }
        else{
            printf("\n\n");
        }

        printf("Enter a date (YYYY MM DD): ");
        scanf("%d %d %d", &year, &month, &days);
    }
}


int countRemainDays(int m, int d, int year){
    int daysNum = 0;
    int remain = 0;
    for (int i = 12; i >= m; i--){
        if (i == 4 || i == 6 || i ==9 || i ==11){
            daysNum += 30;

            
        }
        else if (i == 1 || i == 3 || i ==5 || i == 7 || i == 8|| i == 10 || i ==12 ){
            daysNum += 31;
          
        }
        else if (year == 0){
            daysNum += 29;
            
        }
        else {
          daysNum += 28;
        }   

    }

    daysNum -= d;

    

    return daysNum;

}

int isLeap(int year){
    if ((year % 4 == 0 && year % 100 != 0) && year %400 == 0){
        return 0;
    }
    return 1;
}
