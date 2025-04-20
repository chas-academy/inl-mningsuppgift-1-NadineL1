#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    //creating a dice with numers 1-6 that rolls 100 times 
    int dice_rolls[100];
    for (int i = 0; i<100 ; i++)
    {
        dice_rolls[i] = (rand()%6)+1;
    }

    //variable for each number you can get with the dice
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    //saving the sum of the dice rolls in a variable sum
    int sum = 0;
    //coonting how many of each dice is rolled 
    for (int i =0; i<100; i++)
    {
        if (dice_rolls[i] == 1)
        {
            one ++;
        }
        if (dice_rolls[i] == 2)
        {
            two ++;
        } 
        if (dice_rolls[i] == 3)
        {
            three ++;
        } 
        if (dice_rolls[i] == 4)
        {
            four ++;
        } 
        if (dice_rolls[i] == 5)
        {
            five ++;
        } 
        if (dice_rolls[i] == 6)
        {
            six ++;
        }
        //saving each roll in the sum variable
        sum+= dice_rolls[i];
    }   
    //write out how many of each number you get after the 100 rolls
    printf("%d\n", one);
    printf("%d\n", two);   
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six);
    //writing out the sum, and the avarage value using a float
    printf("%d\n", sum);
    printf("%.1f",sum/100.0);

    return 0;
}
