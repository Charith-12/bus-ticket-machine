#include <stdio.h>

int s,num,t_fare=0,fare=0,end_station,fstation,p,g,sstation,w,f,a=0,ft,st,k=0,u,pa;
void menu();
void iss_ticket();
void ending();
void station_5();
void station_4();
void station_3();
void station_2();
void station_1();
void cal_range();
void cal_fare();
void search_dis();
int d[5]={0,2,5,9,15};
int l[20];
//
int main()
{    int pass=0000;
   int i=0;
    printf("\n\n\n\t\t\t\t ================================== ");
    printf("\n\t\t\t\t || Bus Ticket Management System || ");
    printf("\n\t\t\t\t ================================== ");
    printf("\n\n\n\t\t\t\t\t    USER LOGIN ");
    printf("\n\n\n\t\t\t\tEnter the password to login:");
    scanf("%d",&pa);
    if (pass==pa)
        {printf("\n\nLogin successful!\n");
        printf("\n");
        system("pause");
        system("cls");
        menu();        }
    else
        {   printf("\n\nWrong password!!!\a\a\a");
login_try:
//
printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&g);
            if (g==1)
                    {   system("cls");
                        main();                   }
            else if (g==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    wait(1000000000);
                    system("cls");
                    goto login_try;}       }       return 0;
}
void wait(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
void close(void)
{
    printf("\n\n\n\nThank you !");
    getch();
    return 0;
    }
//
void menu()
{
int choice;
    printf("\n\n\t\t   =============  MAIN MENU  =============\n\n");
    printf("\n\t\t----Please choose one of the options below----\n");
    printf("1) Issue Tickets\n");
    printf("2) Search For Distance\n");\
    printf("3) Calculate Fare\n");
    printf("4) Calculate Total Money Collected Between Ticket Number Range\n\n");
    printf("5) Exit The Application\n");
    printf("\n\n\t\t\tInput Your Selection : \n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:iss_ticket();
        break;
        case 2:search_dis();
        break;
        case 3:cal_fare();
        break;
        case 4:cal_range();
        break;
        case 5:close();
        break;
   }
}
//
void iss_ticket()
{int start_station;
system("cls");
 printf("\t\tYou Selected Issue Tickets\n\n");
 printf("\t\tInput Starting Station\n");
 scanf("%d",&start_station);

printf("Starting From %d\n",start_station);
printf("\t\tInput Stopping Station\n");
scanf("%d",&end_station);
if(start_station,end_station<1)
{
    printf("Error");
    iss_ticket();
}
if(start_station,end_station>5)
{
    printf("Error");
    iss_ticket();
}
if(start_station>=end_station)
{
    printf("Error");
    iss_ticket();
}
printf("Enter Number Of Passengers\n");
scanf("%d",&num);
//
p=d[end_station-1]-d[start_station-1];
fare=(7+(p-1)*2);
t_fare=fare*num;
system("cls");
printf("\n\tSirimath Express\n");
printf("=================================\n");
printf("\tTicket No = %d\n\n",a+1);
printf("Journey Starting Station = %d\n",start_station);
printf("Destination = %d\n",end_station);
printf("Journey Distance = %d\n",p);
printf("No. of Passengers = %d\n",num);
printf("Fare (For a Person) = %d\n",fare);
printf("Your Total Fare is %d\n",t_fare);
l[a]=t_fare;
a++;
getch();
{   login_try:
           printf("Press 1 to continue or Press 0 to return to Main menu \n");
            scanf("%d",&g);
            if (g==1)
                    {                        iss_ticket();                    }
            else if (g==0)
                    {         system("cls");
                    menu();}
            else                   {printf("\nInvalid!");
                    wait(1000000000);
                    system("cls");
                    goto login_try;}
        }       return 0;
}
//

void search_dis()
{
system("cls");	
printf("\tYou Selected Search For Distance\n");
printf("Please Enter The Two Stations You Need To Find The Distance\n");
printf("Enter The First Station\n");
scanf("%d",&fstation);
printf("Enter The Second Station\n");
scanf("%d",&sstation);
if(fstation,sstation<1)
{
    printf("Error");
    search_dis();
}
if(fstation,sstation>5)
{
    printf("Error");
    search_dis();
}
if(fstation>=sstation)
{
    printf("Error");
    search_dis();
}
w=d[sstation-1]-d[fstation-1];
printf("Distance Between %d station and %d Station is %d km..\n",fstation,sstation,w);
//
{
login_try:
           printf("Press 1 to continue or Press 0 to return to Main menu  \n");
            scanf("%d",&g);

            if (g==1)
                    {

                        system("cls");
                        search_dis();
                    }

            else if (g==0)
                    {
                    system("cls");
                    menu();}
            else
                    {printf("\nInvalid!");
                    wait(1000000000);
                    system("cls");
                    goto login_try;}
        }

        return 0;

}
//

void cal_fare()
{
system("cls");	
printf("\tYou Selected Calculate Fare\n");
printf("Please Enter The Two Stations You Need To Calculate The Fare\n");
printf("Enter The First Station\n");
scanf("%d",&fstation);
printf("Enter The Second Station\n");
scanf("%d",&sstation);
if(fstation<1)
{
    printf("Error");
    cal_fare();
}
if(sstation>5)
{
    printf("Error");
    cal_fare();
}
if(fstation>=sstation)
{
    printf("Error");
    cal_fare();
}
w=d[sstation-1]-d[fstation-1];
f=(7+(w-1)*2);
printf("Fare Between %d station and %d Station is RS. %d ..\n",fstation,sstation,f);
//
{
login_try:
           printf("Press 1 to continue or Press 0 to return to Main menu \n");
            scanf("%d",&g);

            if (g==1)
                    {

                        system("cls");
                        search_dis();
                    }

            else if (g==0)
                    {
                    system("cls");
                    menu();}
            else
                    {printf("\nInvalid!");
                    wait(1000000000);
                    system("cls");
                    goto login_try;}
        }

        return 0;
}
//

void cal_range()
{
system("cls");	
printf("\tYou Selected Calculate Total Money Collected Between Ticket Number Range\n");
printf("Please Enter The Range  You Need To Calculate The Fare \n");
printf("######## Only Upto 20 Tickets ########\n");
printf("Enter The First Ticket Number\n");
scanf("%d",&ft);
printf("Enter The Last Ticket Number\n");
scanf("%d",&st);
u=ft;
if(ft,st<1)
{
    printf("Error");
    cal_range();
}
if(ft,st>20)
{
    printf("Error");
    cal_range();
}
for(ft;ft<=st;ft++)
{
    k=k+l[ft-1];

}
printf("Total Money Collected Between Ticket Number %d and Ticket Number %d is %d\n\n",u,st,k);
//
{   login_try:
           printf("Press 1 to continue or Press 0 to return to Main menu \n");
            scanf("%d",&g);

            if (g==1)
                    {

                        system("cls");
                        cal_range();
                    }

            else if (g==0)
                    {
                    system("cls");
                    menu();}
            else
                    {printf("\nInvalid!");
                    wait(1000000000);
                    system("cls");
                    goto login_try;}
        }

        return 0;
}

