#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#include<stdio.h>
#include<windows.h>

void loading(int size,int min , int sec);

int main()
{
float t_oven_base,t_oven;
int min,sec,door;
sec =0;
int d = 1000;
int En = 1;
printf("Enter the Temperature of the room:\n");
scanf("%f",&t_oven_base);
printf("Enter the preferred heat of the oven:\n");
scanf("%f",&t_oven);
printf("Setting the Timer\n");
printf("Enter Time in Minutes:");
scanf("%d",&min);


printf("If the door of the oven is closed enter 1 if not enter 0 :");
scanf("%d",&door);
while (door != 1)
    {
        printf("please, Close the oven's door then enter 1 :");
        scanf("%d",&door);
    }
system("cls");

if (min > 59 || sec >59)
    {
        printf("Error");
        exit(0);
    }
while (min > 0 || sec > 0)
    {
        sec--;
        if(sec < 0 )
            {
                min--;
                sec = 59;
            }


        if (En == 1)
            {
                t_oven_base = t_oven_base + t_oven_base*0.001;
                    if (t_oven_base >= t_oven+(t_oven*0.1))
                         {En = 0;}
            }
        else if (En == 0)
            {
              t_oven_base = t_oven_base - t_oven_base*0.0001;
                    if (t_oven_base <= t_oven-(t_oven*0.1))
                        {En = 1;}
            }

        switch(En)
            {
                case 0:
                printf(RED);
                printf("\t\t\t\t\t\tOVEN OFF\n");
                printf(RESET);
                printf("\t\t\t\t\t%02d:%02d\t Temp = %0.2f",min,sec,t_oven_base);
                Sleep(d);
                system("cls");
                break;
                case 1:
                printf(GREEN);
                printf("\t\t\t\t\t\tOVEN ON\n");
                printf(RESET);
                printf("\t\t\t\t\t%02d:%02d\t Temp = %0.2f",min,sec,t_oven_base);
                Sleep(d);
                system("cls");
                break;
            }

    }
    printf("\t\t\t\t\t\tToooooooooooooT");
    Sleep(3000);
    system("cls");
    printf(GREEN);
    printf("\t\t\t\t\t\tYour dish Is ready");
    printf(RESET);



return 0;
}
