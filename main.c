#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

void print_title(char a[]);
void string_to_caps(char a[]);

int main()
{
   int userHand, computerHand;
   char userHandString[10], computerHandString[10];

   int result;

   int keepAsking;
   char keepPlaying = 'Y';

   /*Start Randomizer*/
   srand(time(NULL));

   while(keepPlaying == 'Y' || keepPlaying == 'y')
   {

       /*Generate computers hand*/
       computerHand = rand() % 3;


       switch(computerHand)
       {
        case 0:
            strcpy(computerHandString, "ROCK");
            break;
        case 1:
            strcpy(computerHandString, "PAPER");
            break;
        case 2:
            strcpy(computerHandString, "SCISSORS");
            break;
        default:
            break;
       }

       /*Game*/
       print_title("ROCK, PAPER, SCISSORS BY ZABE");


       do
       {
           printf("\nROCK, PAPER or SCISSORS?: ");

           scanf("%s", userHandString);
           string_to_caps(userHandString);

           keepAsking = 0;

           if(strcmp(userHandString, "ROCK") == 0)
            userHand = 0;
           else if(strcmp(userHandString, "PAPER") == 0)
            userHand = 1;
           else if(strcmp(userHandString, "SCISSORS") == 0)
            userHand = 2;
           else
            keepAsking = 1;
       }
       while(keepAsking==1);

       printf("\n\nYour hand: %s", userHandString);
       printf("\nComputer hand: %s\n\n", computerHandString);

       result = userHand = computerHand;
       if(result<0)
           result+=3;

           switch(result)
           {
           case 0:
            printf("Its a draw, gg\n\n");
            break;
           case 1:
            printf("You Won!\n\n");
            break;
           case 2:
            printf("Oh you Lost. GG EZ NOOB\n\n");
            break;
           default:
            break;
           }

           do
           {
               printf("Do you want to keep playing? [Y/N]");
               fflush(stdin);
               scanf("%c", &keepPlaying);
           }
           while(keepPlaying != 'y' && keepPlaying != 'Y' && keepPlaying != 'n' && keepPlaying != 'N');
           system("@cls||clear");
   }
       print_title("Thanks for playing! UxU");
       clock_t start_time = clock();
       while(clock()<start_time+16000);

           return 0;
}



void print_title(char a[])
{
    int j=0;
    printf("%c %c",176,177);
    for(int i=0; i<strlen(a)+7; i++)
    {
        printf("%c",178);
    }
    printf("%c%c\n",177,176);
    printf("%c%c%c%c",176,177,178,177,176);
    while(a[j]!='\0')
    {
        printf("%c",a[j]);
        j++;
    }
    printf("%c%c%c%c",176,177,178,177,176);
    printf("%c%c",176,177);
    for(int i=0; i<=strlen(a)+7; i++)
    {
        printf("%c",178);
    }
    printf("%c%c",177,176);
}



void string_to_caps(char a[])
{
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]>96 && a[i]<123)
            a[i]=32;
    }
}
