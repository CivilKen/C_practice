/*
    Author: CivilKen
    Date: 17th July 2019
 */

#include <stdio.h>

int main()
{
    int Prime[50] = {3, 5};
    int last = 100;
    int i =7;
    int count = 1; // count the last element in Prime array

    for ( i ; i < last; i+=2)
    {
        for (int j = 0; j <= count; j++)
        {
            if (i % Prime[j] == 0)
            {
                break;
            }
            else if (i % Prime[j] != 0 && j==count)
            {
                count += 1;
                Prime[count] = i;
            }
        }
    }
    
    for (int k = 0; k <= count; k++)
    {
        printf("%d\n", Prime[k]);
    }
    
    return 0 ;
}