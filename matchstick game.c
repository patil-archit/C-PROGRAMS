/* om namah shivay */
#include <stdio.h>
int main()
{
    printf("\n \n  this  program is the matchstick game. \n \n let me explain the rules:- \n \n 1)there are 21 matchsticks \n \n 2)you then pick either 1, 2, 3 or 4 matchsticks \n \n 3)i then will do the same \n \n 4)whoever picks the last matchstick loses \n \n LET US PLAY !!!! \n \n");
    int user_input, computer_output, last_matchstick, while_count=0;
    while(while_count<4)
    {
       printf("\n \n please input your choice \n \n");
       scanf("%d", &user_input);
       if(user_input>0 && user_input<5)
       {
            computer_output=5-user_input;
            printf("\n \n i choose \n \n %d", computer_output);
            while_count=while_count+1;
       }
       else
       {
            printf("\n \n please read the rule again and try.");
            while_count=while_count;
       }
    }
    printf("\n \n please input your choice \n \n");
    scanf("%d", &last_matchstick);
    if(last_matchstick==1)
        printf("\n \n thank you and try again. sorry for the loss \n \n let me explain. the total count now is 20 so the 21st matchstick has to be yours. \n \n");
    else
        printf("\n \n dude you can only choose 1 stick lol, you have lost. try again \n \n");
    return 0;
}
