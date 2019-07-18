/*
    Author: CivilKen
    Date: 18th July 2019
 */

#include <stdio.h>
#include <stdlib.h>

#define YEARS 5  // predefine variables
#define Moinths 12

int main()
{
    float rainfall[YEARS][Moinths]={
        {1.2, 1.5, 0.8, 2.4, 6.1, 6.5, 6.2, 5.1, 4.3, 3.1, 1.2, 0.7},
        {0.5, 1.2, 2.1, 3.4, 4.3, 5.7, 7.2, 5.2, 4.9, 2.1, 1.1, 0.4},
        {2.1, 1.6, 2.2, 2.9, 5.6, 7.0, 5.5, 5.4, 5.3, 4.1, 2.2, 0.6},
        {1.5, 1.3, 1.8, 3.1, 6.5, 6.9, 6.2, 5.0, 6.3, 3.9, 1.8, 0.9},
        {1.7, 1.9, 1.5, 2.7, 6.1, 6.3, 5.5, 5.4, 3.3, 6.1, 1.5, 1.7},
    };
    float yearrain[5];
    float monthrain[12];
    int year[5] = {2010, 2011, 2012, 2013, 2014};
    char month[12] = {'J', 'F', 'M', 'A', 'M','J', 'J', 'A', 'S', 'O', 'N', 'D'};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            yearrain[i] += rainfall[i][j];
            monthrain[j] += rainfall[i][j];
        }
    }

    printf("YEAR   RAINFALL(inch)\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d   %f\n", year[i], yearrain[i]);
    }
    
    double yearsum=0, yearavg=0;
    for (int i = 0; i < 5; i++)
    {
        yearsum += yearrain[i];
    }
    
    yearavg = yearsum / 5;
    printf("The year average is %.2f inches.\n", yearavg);

    for (int i = 0; i < 12; i++)
    {
        printf("%c     ", month[i]);
    }
    printf("\n");
    for (int i = 0; i < 12; i++)
    {
        monthrain[i] /= 5;
        printf("%.2f  ", monthrain[i]);
    }
    
    

    return 0;
}