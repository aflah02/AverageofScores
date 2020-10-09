#include <cs50.h>
#include <stdio.h>
float average(int length, int array[]);

int main(void)

{
    int i, j;
    printf("This Program will Help you Compute the Average Score \n");         //Welcome Message
    int Total = get_int("How Many Scores do you wish to Use: ");               //Asks User for How Many Scores
    int scores[Total];                                                         //Stores Scores in an Array
    for (i=0; i < Total; i++)                                                  //A Loop to keep Asking for Scores
    {
        scores[i]=get_int("Enter Score %d \n", i+1);                           //i+1 is used as it would be better to start asking from Score 1 so that it avoids confusion
    }
    printf("The Average score is %f", average(Total, scores));
}

float average(int length, int array[])
  {  int sum = 0;
    for (int j=0; j < length; j++)
    {
        sum += array[j];
    }
    return sum/(float)length;
  }
