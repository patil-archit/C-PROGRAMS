/* om namah shivay */

#include <stdio.h>

int main()
{
    printf("this program will help you find out what day it is based on the date, month and year that you input \n \n please input the date:- ");

    int date, month, year, year_m_1, no_of_leap_years, no_of_normal_years_that_happended_before_said_year, no_of_days_before_said_first_january, jan_days, feb_days, march_days, april_days, may_days, june_days, july_days, aug_days, sept_days, oct_days, nov_days, dec_days, leap_year;

    scanf("%d", &date);

    printf("\n please input the month:- ");

    scanf("%d", &month);

    printf("\n please input the digit year:- ");

    scanf("%d", &year);

    year_m_1=year-1;

    no_of_leap_years=(year_m_1/4)-(year_m_1/100)+(year_m_1/400);/*gregorian calender rule states that the year divisible by 100 but not by 400 are not leap years */

    no_of_normal_years_that_happended_before_said_year=year-no_of_leap_years;

    no_of_days_before_said_first_january=(no_of_leap_years*366)+(no_of_normal_years_that_happended_before_said_year*365);

    leap_year=year%4;

    if(month==1)

        {

          if(date<=31)

               {

                jan_days=(no_of_days_before_said_first_january+date-1)%7;

                if(jan_days==1)

                    printf("\n it is a monday");

                else if(jan_days==2)

                    printf("\n it is a tuesday");

                else if(jan_days==3)

                    printf("\n it is a wednesday");

                else if(jan_days==4)

                    printf("\n it is a thursday");

                else if(jan_days==5)

                    printf("\n it is a friday");

                else if(jan_days==6)

                    printf("\n it is saturday");

                else if(jan_days==0)

                    printf("\n it is a sunday");

               }

          else

                printf("\n no such date exists");

        }
    else if(month==2)

       {

        if(leap_year==0)

          {

            if(date<=29)

                   {

                    feb_days=(no_of_days_before_said_first_january+date+31-1)%7;

                    if(feb_days==1)

                        printf("\n it is a monday");

                    else if(feb_days==2)

                        printf("\n it is a tuesday");

                    else if(feb_days==3)

                        printf("\n it is a wednesday");

                    else if(feb_days==4)

                        printf("\n it is a thursday");

                    else if(feb_days==5)

                        printf("\n it is a friday");

                    else if(feb_days==6)

                        printf("\n it is saturday");

                    else if(feb_days==0)

                        printf("\n it is a sunday");

                   }

            else

                printf("\n no such date exists");

          }

        else

           {

            if(date<=28)

                    {

                    feb_days=(no_of_days_before_said_first_january+date+31-1)%7;

                    if(feb_days==1)

                        printf("\n it is a monday");

                    else if(feb_days==2)

                        printf("\n it is a tuesday");

                    else if(feb_days==3)

                        printf("\n it is a wednesday");

                    else if(feb_days==4)

                        printf("\n it is a thursday");

                    else if(feb_days==5)

                        printf("\n it is a friday");

                    else if(feb_days==6)

                        printf("\n it is saturday");

                    else if(feb_days==0)

                        printf("\n it is a sunday");

                   }
            else

                printf("\n no such date exists");

       }

       }

    else if(month==3)

         {

           if(leap_year==0)

               {

                if(date<=31)

                {

                     march_days=(no_of_days_before_said_first_january+date+31+29-1)%7;

                            if(march_days==1)

                                printf("\n it is a monday");

                            else if(march_days==2)

                                printf("\n it is a tuesday");

                            else if(march_days==3)

                                printf("\n it is a wednesday");

                            else if(march_days==4)

                                printf("\n it is a thursday");

                            else if(march_days==5)

                                printf("\n it is a friday");

                            else if(march_days==6)

                                printf("\n it is saturday");

                            else if(march_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else
                {

                if(date<=31)

                {

                     march_days=(no_of_days_before_said_first_january+date+31+28-1)%7;

                            if(march_days==1)

                                printf("\n it is a monday");

                            else if(march_days==2)

                                printf("\n it is a tuesday");

                            else if(march_days==3)

                                printf("\n it is a wednesday");

                            else if(march_days==4)

                                printf("\n it is a thursday");

                            else if(march_days==5)

                                printf("\n it is a friday");

                            else if(march_days==6)

                                printf("\n it is saturday");

                            else if(march_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }

         }

    else if(month==4)

        {

           if(leap_year==0)

               {

                if(date<=30)

                {

                     april_days=(no_of_days_before_said_first_january+date+31+29+31-1)%7;

                            if(april_days==1)

                                printf("\n it is a monday");

                            else if(april_days==2)

                                printf("\n it is a tuesday");

                            else if(april_days==3)

                                printf("\n it is a wednesday");

                            else if(april_days==4)

                                printf("\n it is a thursday");

                            else if(april_days==5)

                                printf("\n it is a friday");

                            else if(april_days==6)

                                printf("\n it is saturday");

                            else if(april_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=30)

                {

                     april_days=(no_of_days_before_said_first_january+date+31+28+31-1)%7;

                            if(april_days==1)

                                printf("\n it is a monday");

                            else if(april_days==2)

                                printf("\n it is a tuesday");

                            else if(april_days==3)

                                printf("\n it is a wednesday");

                            else if(april_days==4)

                                printf("\n it is a thursday");

                            else if(april_days==5)

                                printf("\n it is a friday");

                            else if(april_days==6)

                                printf("\n it is saturday");

                            else if(april_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else if(month==5)

        {

           if(leap_year==0)

               {

                if(date<=31)

                {

                     may_days=(no_of_days_before_said_first_january+date+31+29+31+30-1)%7;

                            if(may_days==1)

                                printf("\n it is a monday");

                            else if(may_days==2)

                                printf("\n it is a tuesday");

                            else if(may_days==3)

                                printf("\n it is a wednesday");

                            else if(may_days==4)

                                printf("\n it is a thursday");

                            else if(may_days==5)

                                printf("\n it is a friday");

                            else if(may_days==6)

                                printf("\n it is saturday");

                            else if(may_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=31)

                {

                     may_days=(no_of_days_before_said_first_january+date+31+28+31+30-1)%7;

                            if(may_days==1)

                                printf("\n it is a monday");

                            else if(may_days==2)

                                printf("\n it is a tuesday");

                            else if(may_days==3)

                                printf("\n it is a wednesday");

                            else if(may_days==4)

                                printf("\n it is a thursday");

                            else if(may_days==5)

                                printf("\n it is a friday");

                            else if(may_days==6)

                                printf("\n it is saturday");

                            else if(may_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else if(month==6)

        {

           if(leap_year==0)

               {

                if(date<=30)

                {

                    june_days=(no_of_days_before_said_first_january+date+31+29+31+30+31-1)%7;

                            if(june_days==1)

                                printf("\n it is a monday");

                            else if(june_days==2)

                                printf("\n it is a tuesday");

                            else if(june_days==3)

                                printf("\n it is a wednesday");

                            else if(june_days==4)

                                printf("\n it is a thursday");

                            else if(june_days==5)

                                printf("\n it is a friday");

                            else if(june_days==6)

                                printf("\n it is saturday");

                            else if(june_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=30)

                {
                     june_days=(no_of_days_before_said_first_january+date+31+28+31+30+31-1)%7;

                            if(june_days==1)

                                printf("\n it is a monday");

                            else if(june_days==2)

                                printf("\n it is a tuesday");

                            else if(june_days==3)

                                printf("\n it is a wednesday");

                            else if(june_days==4)

                                printf("\n it is a thursday");

                            else if(june_days==5)

                                printf("\n it is a friday");

                            else if(june_days==6)

                                printf("\n it is saturday");

                            else if(june_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else if(month==7)

        {

           if(leap_year==0)

               {

                if(date<=31)

                {

                    july_days=(no_of_days_before_said_first_january+date+31+29+31+30+31+30-1)%7;

                            if(july_days==1)

                                printf("\n it is a monday");

                            else if(july_days==2)

                                printf("\n it is a tuesday");

                            else if(july_days==3)

                                printf("\n it is a wednesday");

                            else if(july_days==4)

                                printf("\n it is a thursday");

                            else if(july_days==5)

                                printf("\n it is a friday");

                            else if(july_days==6)

                                printf("\n it is saturday");

                            else if(july_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=31)

                {
                     july_days=(no_of_days_before_said_first_january+date+31+28+31+30+31+30-1)%7;

                            if(july_days==1)

                                printf("\n it is a monday");

                            else if(july_days==2)

                                printf("\n it is a tuesday");

                            else if(july_days==3)

                                printf("\n it is a wednesday");

                            else if(july_days==4)

                                printf("\n it is a thursday");

                            else if(july_days==5)

                                printf("\n it is a friday");

                            else if(july_days==6)

                                printf("\n it is saturday");

                            else if(july_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else if(month==8)

        {

           if(leap_year==0)

               {

                if(date<=31)

                {

                    aug_days=(no_of_days_before_said_first_january+date+31+29+31+30+31+30+31-1)%7;

                            if(aug_days==1)

                                printf("\n it is a monday");

                            else if(aug_days==2)

                                printf("\n it is a tuesday");

                            else if(aug_days==3)

                                printf("\n it is a wednesday");

                            else if(aug_days==4)

                                printf("\n it is a thursday");

                            else if(aug_days==5)

                                printf("\n it is a friday");

                            else if(aug_days==6)

                                printf("\n it is saturday");

                            else if(aug_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=31)

                {
                     aug_days=(no_of_days_before_said_first_january+date+31+28+31+30+31+30+31-1)%7;

                            if(aug_days==1)

                                printf("\n it is a monday");

                            else if(aug_days==2)

                                printf("\n it is a tuesday");

                            else if(aug_days==3)

                                printf("\n it is a wednesday");

                            else if(aug_days==4)

                                printf("\n it is a thursday");

                            else if(aug_days==5)

                                printf("\n it is a friday");

                            else if(aug_days==6)

                                printf("\n it is saturday");

                            else if(aug_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else if(month==9)

        {

           if(leap_year==0)

               {

                if(date<=30)

                {

                    sept_days=(no_of_days_before_said_first_january+date+31+29+31+30+31+30+31+31-1)%7;

                            if(sept_days==1)

                                printf("\n it is a monday");

                            else if(sept_days==2)

                                printf("\n it is a tuesday");

                            else if(sept_days==3)

                                printf("\n it is a wednesday");

                            else if(sept_days==4)

                                printf("\n it is a thursday");

                            else if(sept_days==5)

                                printf("\n it is a friday");

                            else if(sept_days==6)

                                printf("\n it is saturday");

                            else if(sept_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=30)

                {
                     sept_days=(no_of_days_before_said_first_january+date+31+28+31+30+31+30+31+31-1)%7;

                            if(sept_days==1)

                                printf("\n it is a monday");

                            else if(sept_days==2)

                                printf("\n it is a tuesday");

                            else if(sept_days==3)

                                printf("\n it is a wednesday");

                            else if(sept_days==4)

                                printf("\n it is a thursday");

                            else if(sept_days==5)

                                printf("\n it is a friday");

                            else if(sept_days==6)

                                printf("\n it is saturday");

                            else if(sept_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else if(month==10)

        {

           if(leap_year==0)

               {

                if(date<=31)

                {

                    oct_days=(no_of_days_before_said_first_january+date+31+29+31+30+31+30+31+31+30-1)%7;

                            if(oct_days==1)

                                printf("\n it is a monday");

                            else if(oct_days==2)

                                printf("\n it is a tuesday");

                            else if(oct_days==3)

                                printf("\n it is a wednesday");

                            else if(oct_days==4)

                                printf("\n it is a thursday");

                            else if(oct_days==5)

                                printf("\n it is a friday");

                            else if(oct_days==6)

                                printf("\n it is saturday");

                            else if(oct_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=31)

                {
                     oct_days=(no_of_days_before_said_first_january+date+31+28+31+30+31+30+31+31+30-1)%7;

                            if(oct_days==1)

                                printf("\n it is a monday");

                            else if(oct_days==2)

                                printf("\n it is a tuesday");

                            else if(oct_days==3)

                                printf("\n it is a wednesday");

                            else if(oct_days==4)

                                printf("\n it is a thursday");

                            else if(oct_days==5)

                                printf("\n it is a friday");

                            else if(oct_days==6)

                                printf("\n it is saturday");

                            else if(oct_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else if(month==11)

        {

           if(leap_year==0)

               {

                if(date<=30)

                {

                    nov_days=(no_of_days_before_said_first_january+date+31+29+31+30+31+30+31+31+30+31-1)%7;

                            if(nov_days==1)

                                printf("\n it is a monday");

                            else if(nov_days==2)

                                printf("\n it is a tuesday");

                            else if(nov_days==3)

                                printf("\n it is a wednesday");

                            else if(nov_days==4)

                                printf("\n it is a thursday");

                            else if(nov_days==5)

                                printf("\n it is a friday");

                            else if(nov_days==6)

                                printf("\n it is saturday");

                            else if(nov_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=30)

                {
                     nov_days=(no_of_days_before_said_first_january+date+31+28+31+30+31+30+31+31+30+31-1)%7;

                            if(nov_days==1)

                                printf("\n it is a monday");

                            else if(nov_days==2)

                                printf("\n it is a tuesday");

                            else if(nov_days==3)

                                printf("\n it is a wednesday");

                            else if(nov_days==4)

                                printf("\n it is a thursday");

                            else if(nov_days==5)

                                printf("\n it is a friday");

                            else if(nov_days==6)

                                printf("\n it is saturday");

                            else if(nov_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else if(month==12)

        {

           if(leap_year==0)

               {

                if(date<=31)

                {

                    dec_days=(no_of_days_before_said_first_january+date+31+29+31+30+31+30+31+31+30+31+30-1)%7;

                            if(dec_days==1)

                                printf("\n it is a monday");

                            else if(dec_days==2)

                                printf("\n it is a tuesday");

                            else if(dec_days==3)

                                printf("\n it is a wednesday");

                            else if(dec_days==4)

                                printf("\n it is a thursday");

                            else if(dec_days==5)

                                printf("\n it is a friday");

                            else if(dec_days==6)

                                printf("\n it is saturday");

                            else if(dec_days==0)

                                printf("\n it is a sunday");
                }

               else

                    printf("\n no such date exists");

               }

            else

                {

                if(date<=31)

                {
                     dec_days=(no_of_days_before_said_first_january+date+31+28+31+30+31+30+31+31+30+31+30-1)%7;

                            if(dec_days==1)

                                printf("\n it is a monday");

                            else if(dec_days==2)

                                printf("\n it is a tuesday");

                            else if(dec_days==3)

                                printf("\n it is a wednesday");

                            else if(dec_days==4)

                                printf("\n it is a thursday");

                            else if(dec_days==5)

                                printf("\n it is a friday");

                            else if(dec_days==6)

                                printf("\n it is saturday");

                            else if(dec_days==0)

                                printf("\n it is a sunday");
                }

                else

                    printf("\n no such date exists");

               }


        }

    else

        printf(" \n \n there exist no such date");

    printf("\n \n thanks a lot for using our code \n \n");

    return 0;
}
