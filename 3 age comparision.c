/* om namah shivay */

#include <stdio.h>

int main()
{
    printf(" \n \n ram please enter your age :- ");

    int ram, shyam, ajay;

    scanf("%d", &ram);

    printf(" \n \n shyam please enter your age :- ");

    scanf("%d", &shyam);

    printf(" \n \n ajay please enter your age :- ");

    scanf("%d", &ajay);


    if(ram < shyam && ram < ajay)

        printf(" \n \n ram is the youngest \n \n");

    else if(shyam < ram && shyam < ajay)

        printf(" \n \n shyam is the youngest \n \n");

    else if(ajay <  ram && ajay < shyam)

        printf("\n \n ajay is the youngest \n \n");

    else if(shyam==ram && ram < ajay)

        printf(" \n \n both shyam and ram are the youngest as they are of the same age \n \n");

    else if(shyam==ajay && ajay <  ram)

        printf(" \n \n both shyam and ajay are the youngest as they are of the same age \n \n");

    else if(ram==ajay && ram< shyam)

        printf(" \n \n both ram and ajay are the youngest as they are of the same age \n \n");

    else if(ram==ajay && ram==shyam)

        printf(" \n \n they all are of the same age hence none of them are the youngest \n \n");

    return 0;
}
