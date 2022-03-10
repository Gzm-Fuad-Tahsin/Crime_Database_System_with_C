#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

struct login
{
    char fname[100];
    char lname[100];
    char rank[100];
    char postinga[100];
    char pass[100];
    char uname[100];
    char id[100];
}l;
struct FIR
{
    char dtype[100];
    char ddescribe[100][100];
    char name [100];
    char fname [100];
    char mname [100];
    char address [100];
    char gender [100];
    char rank [100];
    char fid[100];
    char mail[100];
    char pid[100];
    char dname [100];
    char dfname [100];
    char dmname [100];
    char daddress [100];
    char dgender [100];
    char drank [100];
    char dfid[100];
    char dlink[1000];
    char unc[1000];
    int age ;
    int id ;
    int sn;
    int a;
    int b;
    int c;
    int dage;
    char describe[100][100];
    char invesof[100];

}x;
struct criminal
{
    char name[100];
    char lname[100];
    char fname[100];
    char mname[100];
    char address[100];
    char cname[100];
    char nid[100];
    char cid[100];
    char arrdate[100];
}y;
void adminlogin()
{

    char name[100],passd[100];
    p1:
    printf("\n  ====================== ADMIN LOGIN FORM  ======================  \n");
    printf(" \n                        ENTER USERNAME:-");
	fflush(stdin);
	gets(name);
	printf(" \n                        ENTER PASSWORD:-");
	fflush(stdin);
	gets(passd);



      if(strcmp(name,"admin")==0 && strcmp(passd,"20100064")==0)
        {
            system("cls");
            admin();
        }
        else if(strcmp(name,"admin")!=0 && strcmp(passd,"20100064")==0)
        {
            printf("\nYour User name Is Invalid\n");
            goto p1;
        }
        else if(strcmp(name,"admin")==0 && strcmp(passd,"20100064")!=0)
        {
            printf("\nYour Password Is Invalid\n");
            goto p1;
        }
        else if(strcmp(name,"admin")!=0 && strcmp(passd,"20100064")!=0)
        {
            printf("\nYour User Name And Password Is Invalid\n");
            goto p1;
        }
  return ;
}

registe()
{
    printf("\n\n\t\t========================================\n");
    printf("\t\t\t  - ADD POLICE RECORDS -");
    printf("\n\t\t========================================\n");
    FILE*log;
    log=fopen("log.txt","ab+");
    printf("\nEnter First Name : ");
    fflush(stdin);
    gets(l.fname);
    printf("Enter Last Name : ");
    fflush(stdin);
    gets(l.lname);
    printf("Enter Police Rank : ");
    fflush(stdin);
    gets(l.rank);
    printf("Enter Police ID : ");
    fflush(stdin);
    gets(l.id);
    printf("Enter Posting Area : ");
    fflush(stdin);
    gets(l.postinga);
    printf("Enter User Name : ");
    fflush(stdin);
    gets(l.uname);
    printf("Enter PassWord : ");
    fflush(stdin);
    gets(l.pass);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    getch();
    system("cls");

return ;
}
login()
{
    char uname[100],pass[100];

    FILE*log;
    log=fopen("log.txt","r");
    p1:
    printf("\n  ====================== POLICE LOGIN FORM  ======================  \n");
    printf(" \n                        ENTER USERNAME:-");
	fflush(stdin);
	gets(uname);
	printf(" \n                        ENTER PASSWORD:-");
	fflush(stdin);
	gets(pass);

    while (fread(&l,sizeof(l),1,log)==1)
    {
        if(strcmp(uname,l.uname)==0 && strcmp(pass,l.pass)==0)
        {
            system("cls");
            crime_data();


        }
        else if(strcmp(uname,l.uname)==1 && strcmp(pass,l.pass)==0)
        {
            printf("\nYour User name Is Invalid\n");
            goto p1;
        }
        else if(strcmp(uname,l.uname)==0 && strcmp(pass,l.pass)==1)
        {
            printf("\nYour Password Is Invalid\n");
            goto p1;
        }
        //else if(strcmp(uname,l.uname)==1 && strcmp(pass,l.pass)!=0)
        //{
            //printf("\nYour User Name And Password Is Invalid\n");
           // goto p1;
       // }

    }
    fclose(log);
return;
}

void crime_data()
{
  printf("\n\n\t\t==================================================\n");
    printf("\t\t\t  - Search for files assigned to you -");
    printf("\n\t\t==================================================\n");
  int a ;
   FILE*f1,*f2,*f3,*f4,*f5,*f6,*f7;
    printf("\n1. Cyber crime. \n");
    printf("2. Fraud. \n");
    printf("3. Kidnapping. \n");
    printf("4. Murder. \n");
    printf("5. Rape and sexual assault. \n");
    printf("6. Robbery. \n");
    printf("7. Sexual harassment. \n");
    printf("8. Beck.\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        system("cls");
        char name1[100],pid1[100];
        f1=fopen("Cyber_Crime.txt","rb");

    printf("Enter Your Name : ");
    fflush(stdin);
    gets(name1);
    printf("Enter Your Police ID : ");
    fflush(stdin);
    gets(pid1);

    while (fread(&x,sizeof(x),1,f1))
    {
        if (strcmp(name1,x.invesof)==0 && strcmp(pid1,x.pid)==0)
        {
            printf("\n\t\t\t\t Victims Information.");
    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim National ID : %d",x.id);
    printf("\nVictim Social media Account Name : ");
    puts(x.fid);
    printf("Victim Mail Address : ");
    puts(x.mail);
    printf("\t\t\t\t Criminal Information.");
    printf("\nCriminal Social Media Account Name : ");
    puts(x.dfid);
    printf("\nCriminal Social Media Link : ");
    puts(x.dlink);
    printf("His/Her Crime : %s",x.describe);
    printf("\n\n");
        }
    }
    fclose(f1);
    int a;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&a);
        if (a==1)
        {
            system("cls");
            crime_data();
        }
    break;
    case 2:
        system("cls");
        char name2[100],pid2[100];
        f2=fopen("fraud.txt","rb");
        printf("Enter Your Name : ");
    fflush(stdin);
    gets(name2);
    printf("Enter Your Police ID : ");
    fflush(stdin);
    gets(pid2);
    while (fread(&x,sizeof(x),1,f2))
    {
        if (strcmp(name2,x.invesof)==0 && strcmp(pid2,x.pid)==0)
        {
           printf("\n\t\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim National ID : %d",x.id);
    printf("\n\t\t\t\t Criminal Information.");
    printf("\nCriminal Name : ");
    puts(x.dname);
    printf("Criminal Address : ");
    puts(x.daddress);
    printf("Criminal Gender [M/F] : ");
    puts(x.dgender);
    printf("His/Her Fraud : %s",x.describe);
    printf("\n\n");
        }
    }
    fclose(f2);
    int b;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&b);
        if (b==1)
        {
            system("cls");
            crime_data();
        }
        break;
    case 3:
        system("cls");
        char name3[100],pid3[100];
        f3=fopen("kidnapping.txt","rb");
        printf("Enter Your Name : ");
    fflush(stdin);
    gets(name3);
    printf("Enter Your Police ID : ");
    fflush(stdin);
    gets(pid3);
    while (fread(&x,sizeof(x),1,f3))
    {
        if (strcmp(name3,x.invesof)==0 && strcmp(pid3,x.pid)==0)
        {
            printf("\n\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Enter Victim Age : %d",x.age);
    printf("\nVictim Father/mother National National ID : %d",x.id);
    printf("\nVictim Body Color : ");
    puts(x.dname);
    printf("Victim Hair Color : ");
    puts(x.dfname);
    printf("The last one that wore the dress : ");
    puts(x.dmname);
    printf("Enter Victim Height : %d",x.dage);
    printf("\n\n\n");
        }

    }
    fclose(f3);
    int c;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&c);
        if (c==1)
        {
            system("cls");
            crime_data();
        }
        break;
    case 4:
        system("cls");
        char name4[100],pid4[100];
        f4=fopen("murder.txt","rb");
        printf("Enter Your Name : ");
    fflush(stdin);
    gets(name4);
    printf("Enter Your Police ID : ");
    fflush(stdin);
    gets(pid4);
    while (fread(&x,sizeof(x),1,f4))
    {
        if (strcmp(name4,x.invesof)==0 && strcmp(pid4,x.pid)==0)
        {
             printf("\n\t\t\t Death Body Information.");
    printf("\nDeath type: ");
    puts(x.dtype);
    printf("Describe Death Body : ");
    puts(x.ddescribe);

    printf("\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nEnter Victim Father/Mother National ID : %d",x.id);
    printf("\n\t\t\t Suspect Information.");
    printf("\nSuspect Name : ");
    puts(x.dname);
    printf("Suspect Father Name : ");
    puts(x.dfname);
    printf("Suspect Mother Name : ");
    puts(x.dmname);
    printf("Suspect Address : ");
    puts(x.daddress);
    printf("Suspect Gender [M/F] : ");
    puts(x.dgender);
    printf("\n\n");
        }

    }
    fclose(f4);
    int d;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&d);
        if (d==1)
        {
            system("cls");
            crime_data();
        }
        break;
    case 5:
        system("cls");
        char name5[100],pid5[100];
        f5=fopen("rape.txt","rb");
        printf("Enter Your Name : ");
    fflush(stdin);
    gets(name5);
    printf("Enter Your Police ID : ");
    fflush(stdin);
    gets(pid5);
    while (fread(&x,sizeof(x),1,f5))
    {
        if (strcmp(name5,x.invesof)==0 && strcmp(pid5,x.pid)==0)
        {
            printf("\n\t\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim Father/Mother National ID : %d",x.id);
    printf("\n\t\t\t\t Suspect Information.");
    printf("\nSuspect Name : ");
    puts(x.dname);
    printf("Suspect Father Name : ");
    puts(x.dfname);
    printf("Suspect Mother Name : ");
    puts(x.dmname);
    printf("Suspect Age : %d",x.dage);
    printf("\nSuspect Gender [M/F] : ");
    puts(x.dgender);
    printf("\n\n");
        }

    }
    fclose(f5);
    int e;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&e);
        if (e==1)
        {
            system("cls");
            crime_data();
        }
        break;
    case 6:
        system("cls");
        char name6[100],pid6[100];
        f6=fopen("robbery.txt","rb");
        printf("Enter Your Name : ");
    fflush(stdin);
    gets(name6);
    printf("Enter Your Police ID : ");
    fflush(stdin);
    gets(pid6);
    while (fread(&x,sizeof(x),1,f6))
    {
        if (strcmp(name6,x.invesof)==0 && strcmp(pid6,x.pid)==0)
        {
           printf("\n\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim Father/Mother National ID : %d",x.id);
    printf("\nDescribe Robbery : %s",x.describe);
     printf("\n\t\t\t Suspect Information.");
    printf("\nSuspect Name : ");
    puts(x.dname);
        }

    }
    fclose(f6);
    int f;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&f);
        if (f==1)
        {
            system("cls");
            crime_data();
        }
        break;
    case 7:
        system("cls");
        char name7[100],pid7[100];
        f7=fopen("sexual.txt","rb");
        printf("Enter Your Name : ");
    fflush(stdin);
    gets(name7);
    printf("Enter Your Police ID : ");
    fflush(stdin);
    gets(pid7);
    while (fread(&x,sizeof(x),1,f7))
    {
        if (strcmp(name7,x.invesof)==0 && strcmp(pid7,x.pid)==0)
        {
            printf("\n\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim Father/Mother National ID : %d",x.id);
    printf("\n\t\t\t Suspect Information.");
    printf("\nSuspect Name : ");
    puts(x.dname);
    printf("Suspect Father Name : ");
    puts(x.dfname);
    printf("Suspect Mother Name : ");
    puts(x.dmname);
    printf("Suspect Age : %d",x.dage);
    printf("\nSuspect Gender [M/F] : ");
    puts(x.dgender);
    printf("\n\n");

        }

    }
    fclose(f7);
    int g;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&g);
        if (g==1)
        {
            system("cls");
            crime_data();
        }
        break;
    case 8:
        system("cls");
        main();


        break;
    }

}
void date()
{
    ///printf("\n\n\t\t=========================================\n");
       /// printf("\t\t\t  - ENTER TODAYS DATE -");
       /// printf("\n\t\t=========================================\n");
    label2:
    printf("\nEnter Date (DD-MM-YY) :");
    scanf("%d-%d-%d",&x.a,&x.b,&x.c);

    if (x.b > 12 || x.b<1)
    {
        printf("\nInvalid Month\n");
        goto label2;

    }
    else if (x.b==1 || x.b==3 || x.b==5 || x.b==7 || x.b==8 || x.b==10 || x.b==12 )
    {
        if(x.a>31 || x.a<1)
        {
            printf("\ninvalid\n");
            goto label2;

        }
        if(x.a<=31 || x.a>1)
        {

        }
     }
   else if (x.b==4 || x.b==6 || x.b==9 || x.b==11 )
    {
        if(x.a>30 || x.a<1)
        {
            printf("\ninvalid\n");
            goto label2;

        }
        if(x.a<=30 || x.a>0)
        {

        }
    }
   else if (x.b==2)
    {
        if(x.c % 400 == 0 )
        {

           if(x.a>=30 ||x.a<1)
           {
              printf("Invalid date");
              goto label2;

           }

           else if(x.a<=29 || x.a<=1)
           {

           }

        }
        else if(x.c % 4 == 0)
        {
            if(x.c % 100 != 0)
            {
             if(x.a>=30 || x.a<1)
             {
               printf("Invalid date");
               goto label2;

             }
             else if(x.a<=29 || x.a<=1)
             {

             }

             }

            else
            {
            if(x.a>=29 || x.a<1)
            {
               printf("Invalid date");
               goto label2;

            }

            else if(x.a<=28 || x.a >= 1)
            {

            }

             }

         }
    else
    {
       if(x.a>=29 || x.a<1)
       {
          printf("Invalid date");
          goto label2;

       }
       else if(x.a<=28 || x.a >= 1)
       {

       }

    }

    }

}
void crime_data1()
{
    printf("\n\n\t\t==================================================\n");
    printf("\t\t\t  - LIST F.I.R ON CYBER CRIME -");
    printf("\n\t\t==================================================\n");


    FILE*f1;//,*f11;



        if((f1=fopen("Cyber_Crime.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {


				                while(fread(&x,sizeof(x),1,f1))
                                {
                                 //printf("\nCase Registered On : %d-%d-%d",x.a,x.b,x.c);

				                x.sn = x.sn+1-1;
				                printf("\nCyber Crime Case no : %d",x.sn);
				                printf("\nCase Registered On : %d-%d-%d",x.a,x.b,x.c);
				                printf("\nUncommon Number is : ");
				                puts(x.unc);
    printf("\n\t\t\t\t Victims Information.");
    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim National ID : %d",x.id);
    printf("\nVictim Social media Account Name : ");
    puts(x.fid);
    printf("Victim Mail Address : ");
    puts(x.mail);
    printf("\t\t\t\t Criminal Information.");
    printf("\nCriminal Social Media Account Name : ");
    puts(x.dfid);
    printf("\nCriminal Social Media Link : ");
    puts(x.dlink);
    printf("His/Her Crime : %s",x.describe);
    printf("\n\n");
    printf("\nInvestigation Officer : ");
    puts(x.invesof);
    printf("Investigation Officer ID Number: ");
    puts(x.pid);
    printf("\n\n");

    }


   }

    //fclose(f11);
    fclose(f1);

return;
}
void crime_data2()
{
    printf("\n\n\t\t==============================================\n");
    printf("\t\t\t  - LIST F.I.R ON FRAUD -");
    printf("\n\t\t==============================================\n");

    FILE*f2;


     if((f2=fopen("fraud.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {

				                while(fread(&x,sizeof(x),1,f2))
                                {


				                x.sn = x.sn+1-1;
				                printf("\nFraud Case no : %d",x.sn);
				                printf("\nCase Registered On : %d-%d-%d",x.a,x.b,x.c);
				                printf("\nUncommon Number is : ");
				                puts(x.unc);


    printf("\n\t\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim National ID : %d",x.id);
    printf("\n\t\t\t\t Criminal Information.");
    printf("\nCriminal Name : ");
    puts(x.dname);
    printf("Criminal Address : ");
    puts(x.daddress);
    printf("Criminal Gender [M/F] : ");
    puts(x.dgender);
    printf("His/Her Fraud : %s",x.describe);
    printf("\n\n");
    printf("\nInvestigation Officer : ");
    puts(x.invesof);
    printf("Investigation Officer ID Number: ");
    puts(x.pid);
    printf("\n\n");
    }//}
				             }
   fclose(f2);
   //fclose(f11);


}
void crime_data3()
{
    printf("\n\n\t\t================================================\n");
    printf("\t\t\t  - LIST F.I.R ON KIDNAPPING -");
    printf("\n\t\t================================================\n");

    FILE*f3;

    //f3=fopen("kidnapping.txt","rb");
    //while (fread(&x,sizeof(x),1,f3))
    //{
    if((f3=fopen("kidnapping.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f3))
                                {


				                x.sn = x.sn+1-1;
				                printf("Kidnapping Case no : %d",x.sn);
				                printf("\nCase Registered On : %d-%d-%d",x.a,x.b,x.c);
				                printf("\nUncommon Number is : ");
				                puts(x.unc);

    printf("\n\t\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Enter Victim Age : %d",x.age);
    printf("\nVictim Father/mother National National ID : %d",x.id);
    printf("\nVictim Body Color : ");
    puts(x.dname);
    printf("Victim Hair Color : ");
    puts(x.dfname);
    printf("The last one that wore the dress : ");
    puts(x.dmname);
    printf("Enter Victim Height : %d",x.dage);
    printf("\n\n\n");
    printf("\nInvestigation Officer : ");
    puts(x.invesof);
    printf("Investigation Officer ID Number: ");
    puts(x.pid);
    printf("\n\n");

    }
				             }
   fclose(f3);
return;
}
void crime_data4()
{
    printf("\n\n\t\t==============================================\n");
    printf("\t\t\t  - LIST F.I.R ON MURDER -");
    printf("\n\t\t==============================================\n");

    FILE*f4;

    //f4=fopen("murder.txt","rb");
    //while (fread(&x,sizeof(x),1,f4))
    //{
    if((f4=fopen("murder.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f4))
                                {


				                x.sn = x.sn+1-1;
				                printf("Murder Case no : %d",x.sn);
				                printf("\nCase Registered On : %d-%d-%d",x.a,x.b,x.c);
				                printf("\nUncommon Number is : ");
				                puts(x.unc);

    printf("\n\t\t\t\t Death Body Information.");
    printf("\nDeath type: ");
    puts(x.dtype);
    printf("Describe Death Body : ");
    puts(x.ddescribe);

    printf("\t\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nEnter Victim Father/Mother National ID : %d",x.id);
    printf("\n\t\t\t\t Suspect Information.");
    printf("\nSuspect Name : ");
    puts(x.dname);
    printf("Suspect Father Name : ");
    puts(x.dfname);
    printf("Suspect Mother Name : ");
    puts(x.dmname);
    printf("Suspect Address : ");
    puts(x.daddress);
    printf("Suspect Gender [M/F] : ");
    puts(x.dgender);
    printf("\n\n");
    printf("\nInvestigation Officer : ");
    puts(x.invesof);
    printf("Investigation Officer ID Number: ");
    puts(x.pid);
    printf("\n\n");

    }}
   fclose(f4);
return;
}
void crime_data5()
{
    printf("\n\n\t\t==============================================\n");
    printf("\t\t\t  - LIST F.I.R ON RAPE -");
    printf("\n\t\t==============================================\n");

    FILE*f5;

    //f4=fopen("murder.txt","rb");
    //while (fread(&x,sizeof(x),1,f4))
    //{
    if((f5=fopen("rape.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f5))
                                {


				                x.sn = x.sn+1-1;
				                printf("Rape Case no : %d",x.sn);
				                printf("\nCase Registered On : %d-%d-%d",x.a,x.b,x.c);
				                printf("\nUncommon Number is : ");
				                puts(x.unc);

    printf("\n\t\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim Father/Mother National ID : %d",x.id);
    printf("\n\t\t\t\t Suspect Information.");
    printf("\nSuspect Name : ");
    puts(x.dname);
    printf("Suspect Father Name : ");
    puts(x.dfname);
    printf("Suspect Mother Name : ");
    puts(x.dmname);
    printf("Suspect Age : %d",x.dage);
    printf("\nSuspect Gender [M/F] : ");
    puts(x.dgender);
    printf("\n\n");
    printf("\nInvestigation Officer : ");
    puts(x.invesof);
    printf("Investigation Officer ID Number: ");
    puts(x.pid);
    printf("\n\n");

    }}
   fclose(f5);
return;
}
void crime_data6()
{
    printf("\n\n\t\t==============================================\n");
    printf("\t\t\t  - LIST F.I.R ON ROBBERY -");
    printf("\n\t\t==============================================\n");

    FILE*f6;

    //f4=fopen("murder.txt","rb");
    //while (fread(&x,sizeof(x),1,f4))
    //{
    if((f6=fopen("robbery.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f6))
                                {


				                x.sn = x.sn+1-1;
				                printf("Robbery Case no : %d",x.sn);
				                printf("\nCase Registered On : %d-%d-%d",x.a,x.b,x.c);
				                printf("\nUncommon Number is : ");
				                puts(x.unc);

    printf("\n\t\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim Father/Mother National ID : %d",x.id);
    printf("\nDescribe Robbery : %s",x.describe);
     printf("\n\t\t\t\t Suspect Information.");
    printf("\nSuspect Name : ");
    puts(x.dname);
    printf("\n\n");
    printf("\nInvestigation Officer : ");
    puts(x.invesof);
    printf("Investigation Officer ID Number: ");
    puts(x.pid);
    printf("\n\n");

    }}
   fclose(f6);
return;
}
void crime_data7()
{
    printf("\n\n\t\t=================================================\n");
    printf("\t\t\t  - LIST F.I.R ON SEXUAL HARASSMENT -");
    printf("\n\t\t=================================================\n");

    FILE*f7;

    //f4=fopen("murder.txt","rb");
    //while (fread(&x,sizeof(x),1,f4))
    //{
    if((f7=fopen("sexual.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f7))
                                {


				                x.sn = x.sn+1-1;
				                printf("Sexual Harassment Case no : %d",x.sn);
				                printf("\nCase Registered On : %d-%d-%d",x.a,x.b,x.c);
				                printf("\nUncommon Number is : ");
				                puts(x.unc);

    printf("\n\t\t\t\t Victim Information.");

    printf("\nVictim Name : ");
    puts(x.name);
    printf("Victim Father Name : ");
    puts(x.fname);
    printf("Victim Mother Name : ");
    puts(x.mname);
    printf("Victim Address : ");
    puts(x.address);
    printf("Victim Gender [M/F] : ");
    puts(x.gender);
    printf("Victim Age : %d",x.age);
    printf("\nVictim Father/Mother National ID : %d",x.id);
    printf("\n\t\t\t\t Suspect Information.");
    printf("\nSuspect Name : ");
    puts(x.dname);
    printf("Suspect Father Name : ");
    puts(x.dfname);
    printf("Suspect Mother Name : ");
    puts(x.dmname);
    printf("Suspect Age : %d",x.dage);
    printf("\nSuspect Gender [M/F] : ");
    puts(x.dgender);
    printf("\n\n");
    printf("\nInvestigation Officer : ");
    puts(x.invesof);
    printf("Investigation Officer ID Number: ");
    puts(x.pid);
    printf("\n\n");

    }}
   fclose(f7);
return;
}
void crime_1()
{
    printf("\n\n\t\t==================================================\n");
    printf("\t\t\t  - WRITE F.I.R ON CYBER CRIME -");
    printf("\n\t\t==================================================\n");
    FILE*f1;
    if((f1=fopen("Cyber_Crime.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f1))
				                x.sn = x.sn+1;
				                if (x.sn == 0)
                                {
                                    x.sn+=1;

                                }
				             }
				          fclose(f1);
    date();
    printf("Cyber Crime Case No : %d",x.sn);
    printf("\nEnter A uncommon number [2b5,a25,85r] : ");
    fflush(stdin);
    gets(x.unc);
    printf("\n\t\t\t Victims Information.");
    printf("\nEnter Victim Name : ");
    fflush(stdin);
    gets(x.name);
    printf("Enter Victim Father Name : ");
    fflush(stdin);
    gets(x.fname);
    printf("Enter Victim Mother Name : ");
    fflush(stdin);
    gets(x.mname);
    printf("Enter Victim Address : ");
    fflush(stdin);
    gets(x.address);
    printf("Enter Victim Gender [M/F] : ");
    fflush(stdin);
    gets(x.gender);
    printf("Enter Victim Age : ");
    scanf("%d",&x.age);
    printf("Enter Victim National ID : ");
    scanf("%d",&x.id);
    printf("Enter Victim Social media Account Name : ");
    fflush(stdin);
    gets(x.fid);
    printf("Enter Victim Mail Address : ");
    fflush(stdin);
    gets(x.mail);
    printf("\t\t\t Criminal Information.");
    printf("\nEnter Criminal Social Media Account Name : ");
    fflush(stdin);
    gets(x.dfid);
    printf("\nEnter Criminal Social Media Link : ");
    fflush(stdin);
    gets(x.dlink);

    printf("Describe His/Her Crime : ");
    fflush(stdin);
    scanf("%[^\n]",x.describe);

return;
}
void crime_2()
{
    printf("\n\n\t\t==============================================\n");
    printf("\t\t\t  - WRITE F.I.R ON FRAUD -");
    printf("\n\t\t==============================================\n");
    FILE*f2;
    if((f2=fopen("fraud.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f2))
				                x.sn = x.sn+1;
				                if (x.sn == 0)
                                {
                                    x.sn+=1;
                                }
				             }
				          fclose(f2);

    date();
    printf("Fraud Case No : %d",x.sn);
    printf("\nEnter A uncommon number [2b5,a25,85r] : ");
    fflush(stdin);
    gets(x.unc);
    printf("\n\t\t\t Victim Information.");

    printf("\nEnter Victim Name : ");
    fflush(stdin);
    gets(x.name);
    printf("Enter Victim Father Name : ");
    fflush(stdin);
    gets(x.fname);
    printf("Enter Victim Mother Name : ");
    fflush(stdin);
    gets(x.mname);
    printf("Enter Victim Address : ");
    fflush(stdin);
    gets(x.address);
    printf("Enter Victim Gender [M/F] : ");
    fflush(stdin);
    gets(x.gender);
    printf("Enter Victim Age : ");

    scanf("%d",&x.age);
    printf("Enter Victim National ID : ");

    scanf("%d",&x.id);
    printf("\t\t\t Criminal Information.");
    printf("\nEnter Criminal Name : ");
    fflush(stdin);
    gets(x.dname);
    printf("Enter Criminal Address : ");
    fflush(stdin);
    gets(x.daddress);
    printf("Enter Criminal Gender [M/F] : ");
    fflush(stdin);
    gets(x.dgender);
    printf("Describe His/Her Fraud : ");
    fflush(stdin);
    scanf("%[^\n]",x.describe);

return;
}
void crime_3()
{
    printf("\n\n\t\t================================================\n");
    printf("\t\t\t  - WRITE F.I.R ON KIDNAPPING -");
    printf("\n\t\t================================================\n");
    FILE*f3;
           if((f3=fopen("kidnapping.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f3))
				                x.sn = x.sn+1;
				                if (x.sn == 0)
                                {
                                    x.sn+=1;
                                }
				             }
				          fclose(f3);

    date();
    printf("Kidnapping Case No : %d",x.sn);
    printf("\nEnter A uncommon number [2b5,a25,85r] : ");
    fflush(stdin);
    gets(x.unc);


    printf("\n\t\t\t Victim Information.");

    printf("\nEnter Victim Name : ");
    fflush(stdin);
    gets(x.name);
    printf("Enter Victim Father Name : ");
    fflush(stdin);
    gets(x.fname);
    printf("Enter Victim Mother Name : ");
    fflush(stdin);
    gets(x.mname);
    printf("Enter Victim Address : ");
    fflush(stdin);
    gets(x.address);
    printf("Enter Victim Gender [M/F] : ");
    fflush(stdin);
    gets(x.gender);
    printf("Enter Victim Age : ");

    scanf("%d",&x.age);
    printf("Enter Victim Father/mother National National ID : ");

    scanf("%d",&x.id);
    printf("\nEnter Victim Body Color : ");
    fflush(stdin);
    gets(x.dname);
    printf("Enter Victim Hair Color : ");
    fflush(stdin);
    gets(x.dfname);
    printf("Enter Victim Height : ");
    scanf("%d",& x.dage);
    printf("Enter The last one that wore the dress : ");
    fflush(stdin);
    gets(x.dmname);



return;
}
void crime_4()
{
    printf("\n\n\t\t==============================================\n");
    printf("\t\t\t  - WRITE F.I.R ON MURDER -");
    printf("\n\t\t==============================================\n");
    FILE*f4;
    if((f4=fopen("murder.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f4))
				                x.sn = x.sn+1;
				                if (x.sn == 0)
                                {
                                    x.sn+=1;
                                }
				             }
				          fclose(f4);

    date();
    printf("Murder Case No : %d",x.sn);
    printf("\nEnter A uncommon number [2b5,a25,85r] : ");
    fflush(stdin);
    gets(x.unc);
    printf("\n\t\t\t Death Body Information.");
    printf("\nEnter Death type: ");
    fflush(stdin);
    gets(x.dtype);
    printf("Describe Death Body : ");
    fflush(stdin);
    gets(x.ddescribe);

    printf("\t\t\t Victim Information.");

    printf("\nEnter Victim Name : ");
    fflush(stdin);
    gets(x.name);
    printf("Enter Victim Father Name : ");
    fflush(stdin);
    gets(x.fname);
    printf("Enter Victim Mother Name : ");
    fflush(stdin);
    gets(x.mname);
    printf("Enter Victim Address : ");
    fflush(stdin);
    gets(x.address);
    printf("Enter Victim Gender [M/F] : ");
    fflush(stdin);
    gets(x.gender);
    printf("Enter Victim Age : ");

    scanf("%d",&x.age);
    printf("Enter Victim Father/Mother National ID : ");

    scanf("%d",&x.id);
    printf("\t\t\t Suspect Information.");
    printf("\nEnter Suspect Name : ");
    fflush(stdin);
    gets(x.dname);
    printf("Enter Suspect Father Name : ");
    fflush(stdin);
    gets(x.dfname);
    printf("Enter Suspect Mother Name : ");
    fflush(stdin);
    gets(x.dmname);
    printf("Enter Suspect Address : ");
    fflush(stdin);
    gets(x.daddress);
    printf("Enter Suspect Gender [M/F] : ");
    fflush(stdin);
    gets(x.dgender);

return;
}
void crime_5()
{
    printf("\n\n\t\t==============================================\n");
    printf("\t\t\t  - WRITE F.I.R ON RAPE -");
    printf("\n\t\t==============================================\n");
    FILE*f5;
    if((f5=fopen("rape.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f5))
				                x.sn = x.sn+1;
				                if (x.sn == 0)
                                {
                                    x.sn+=1;
                                }
				             }
				          fclose(f5);

    date();
    printf("Rape Case No : %d",x.sn);
    printf("\nEnter A uncommon number [2b5,a25,85r] : ");
    fflush(stdin);
    gets(x.unc);


    printf("\n\t\t\t Victim Information.");

    printf("\nEnter Victim Name : ");
    fflush(stdin);
    gets(x.name);
    printf("Enter Victim Father Name : ");
    fflush(stdin);
    gets(x.fname);
    printf("Enter Victim Mother Name : ");
    fflush(stdin);
    gets(x.mname);
    printf("Enter Victim Address : ");
    fflush(stdin);
    gets(x.address);
    printf("Enter Victim Gender [M/F] : ");
    fflush(stdin);
    gets(x.gender);
    printf("Enter Victim Age : ");

    scanf("%d",&x.age);
    printf("Enter Victim Father/Mother National ID : ");

    scanf("%d",&x.id);
    printf("\t\t\t Suspect Information.");
    printf("\nEnter Suspect Name : ");
    fflush(stdin);
    gets(x.dname);
    printf("Enter Suspect Father Name : ");
    fflush(stdin);
    gets(x.dfname);
    printf("Enter Suspect Mother Name : ");
    fflush(stdin);
    gets(x.dmname);
    printf("Enter Suspect Age : ");
    scanf("%d",& x.dage);
    printf("Enter Suspect Gender [M/F] : ");
    fflush(stdin);
    gets(x.dgender);


return;
}
void crime_6()
{
    printf("\n\n\t\t==============================================\n");
    printf("\t\t\t  - WRITE F.I.R ON ROBBERY -");
    printf("\n\t\t==============================================\n");
    FILE*f6;
    if((f6=fopen("robbery.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f6))
				                x.sn = x.sn+1;
				                if (x.sn == 0)
                                {
                                    x.sn+=1;
                                }
				             }
				          fclose(f6);

    date();
    printf("Robbery Case No : %d",x.sn);
    printf("\nEnter A uncommon number [2b5,a25,85r] : ");
    fflush(stdin);
    gets(x.unc);


    printf("\n\t\t\t Victim Information.");

    printf("\nEnter Victim Name : ");
    fflush(stdin);
    gets(x.name);
    printf("Enter Victim Father Name : ");
    fflush(stdin);
    gets(x.fname);
    printf("Enter Victim Mother Name : ");
    fflush(stdin);
    gets(x.mname);
    printf("Enter Victim Address : ");
    fflush(stdin);
    gets(x.address);
    printf("Enter Victim Gender [M/F] : ");
    fflush(stdin);
    gets(x.gender);
    printf("Enter Victim Age : ");

    scanf("%d",&x.age);
    printf("Enter Victim Father/Mother National ID : ");

    scanf("%d",&x.id);
    printf("Describe Robbery : ");
    fflush(stdin);
    scanf("%[^\n]",x.describe);

    printf("\t\t\t Suspect Information.");
    printf("\nEnter Suspect Name : ");
    fflush(stdin);
    gets(x.dname);



return;
}
void crime_7()
{
    printf("\n\n\t\t=================================================\n");
    printf("\t\t\t  - WRITE F.I.R ON SEXUAL HARASSMENT -");
    printf("\n\t\t=================================================\n");
    FILE*f7;
    if((f7=fopen("sexual.txt","rb")) == NULL)
                          {
                                x.sn = 0;
                          }
				          else
				             {
				                while(fread(&x,sizeof(x),1,f7))
				                x.sn = x.sn+1;
				                if (x.sn == 0)
                                {
                                    x.sn+=1;
                                }
				             }
				          fclose(f7);

    date();
    printf("Sexual Harassment Case No : %d",x.sn);
    printf("\nEnter A uncommon number [2b5,a25,85r] : ");
    fflush(stdin);
    gets(x.unc);


    printf("\n\t\t\t\t Victim Information.");

    printf("\nEnter Victim Name : ");
    fflush(stdin);
    gets(x.name);
    printf("Enter Victim Father Name : ");
    fflush(stdin);
    gets(x.fname);
    printf("Enter Victim Mother Name : ");
    fflush(stdin);
    gets(x.mname);
    printf("Enter Victim Address : ");
    fflush(stdin);
    gets(x.address);
    printf("Enter Victim Gender [M/F] : ");
    fflush(stdin);
    gets(x.gender);
    printf("Enter Victim Age : ");

    scanf("%d",&x.age);
    printf("Enter Victim Father/Mother National ID : ");

    scanf("%d",&x.id);
    printf("\t\t\t\t Suspect Information.");
    printf("\nEnter Suspect Name : ");
    fflush(stdin);
    gets(x.dname);
    printf("Enter Suspect Father Name : ");
    fflush(stdin);
    gets(x.dfname);
    printf("Enter Suspect Mother Name : ");
    fflush(stdin);
    gets(x.dmname);
    printf("Enter Suspect Age : ");
    scanf("%d",& x.dage);
    printf("Enter Suspect Gender [M/F] : ");
    fflush(stdin);
    gets(x.dgender);

return;
}
void writefir()
{
    while(1)
    {
    int a;
    printf("\n\n\t\t====================================\n");
    printf("\t\t\t  - WRITE F.I.R -");
    printf("\n\t\t====================================\n");
    FILE*f1,*f2,*f3,*f4,*f5,*f6,*f7;
    printf("\n1. Cyber crime. \n");
    printf("2. Fraud. \n");
    printf("3. Kidnapping. \n");
    printf("4. Murder. \n");
    printf("5. Rape and sexual assault. \n");
    printf("6. Robbery. \n");
    printf("7. Sexual harassment. \n");
    printf("8. Beck.\n");
    printf("Choice : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ab;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ab);
        if (ab==1)
        {
            system("cls");
            writefir();
        }
        else
            system("cls");


        f1=fopen("Cyber_Crime.txt","ab+");
        crime_1();
        fwrite(&x,sizeof(x),1,f1);

        fclose(f1);
        int a;
        printf("\n\n1. Back. \n");
        printf("Choice : ");
        scanf("%d",&a);
        if (a==1)
        {
            system("cls");
        }

        break;
    case 2:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ac;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ac);
        if (ac==1)
        {
            system("cls");
            writefir();
        }
        else
            system("cls");

         f2=fopen("fraud.txt","ab+");

         crime_2();
         fwrite(&x,sizeof(x),1,f2);

         fclose(f2);
         int b;
        printf("\n\n1. Back. \n");
        printf("Choice : ");
        scanf("%d",&b);
        if (b==1)
        {
            system("cls");
        }

        break;
    case 3:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ad;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ad);
        if (ad==1)
        {
            system("cls");
            writefir();
        }
        else
            system("cls");
        f3=fopen("kidnapping.txt","ab+");

        crime_3();
        fwrite(&x,sizeof(x),1,f3);
        fclose(f3);
        int c;
        printf("\n\n1. Back. \n");
        printf("Choice : ");
        scanf("%d",&c);
        if (c==1)
        {
            system("cls");
        }
        break;
    case 4:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ae;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ae);
        if (ae==1)
        {
            system("cls");
            writefir();
        }
        else
            system("cls");
        f4=fopen("murder.txt","ab+");

        crime_4();
        fwrite(&x,sizeof(x),1,f4);

         fclose(f4);
         int d;
        printf("\n\n1. Back. \n");
        printf("Choice : ");
        scanf("%d",&d);
        if (d==1)
        {
            system("cls");
        }
        break;
    case 5:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int af;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&af);
        if (af==1)
        {
            system("cls");
            writefir();
        }
        else
            system("cls");
        f5=fopen("rape.txt","ab+");

        crime_5();
        fwrite(&x,sizeof(x),1,f5);

         fclose(f5);
         int e;
        printf("\n\n1. Back. \n");
        printf("Choice : ");
        scanf("%d",&e);
        if (e==1)
        {
            system("cls");
        }
        break;
    case 6:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ag;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ag);
        if (ag==1)
        {
            system("cls");
            writefir();
        }
        else
            system("cls");
        f6=fopen("robbery.txt","ab+");


        crime_6();
        fwrite(&x,sizeof(x),1,f6);

         fclose(f6);
         int f;
        printf("\n\n1. Back. \n");
        printf("Choice : ");
        scanf("%d",&f);
        if (f==1)
        {
            system("cls");
        }
        break;
    case 7:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ah;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ah);
        if (ah==1)
        {
            system("cls");
            writefir();
        }
        else
            system("cls");
        f7=fopen("sexual.txt","ab+");

        crime_7();
        fwrite(&x,sizeof(x),1,f7);

         fclose(f7);
         int g;
        printf("\n\n1. Back. \n");
        printf("Choice : ");
        scanf("%d",&g);
        if (g==1)
        {
            system("cls");
        }
        break;

    case 8:
        system("cls");
        people();
        break;
    }
    }
return;
}
void people()
{
    system("cls");
    printf("\n\n\t\t====================================\n");
    printf("\t\t\t  - PEOPLE CHOICE -");
    printf("\n\t\t====================================\n");
    FILE*f1;
    int a;
    printf("\n1. Write FIR. ");
    printf("\n2. Back. \n");
    printf("Choice : ");
    scanf("%d",&a);

    switch (a)
    {
   case 1:
       system("cls");

        writefir();
        break;
   case 2:
       system("cls");
       main();
       break;


    }
return;
}
void show_fir()
{

    int b;
    while (1)
    {
    printf("\n\n\t\t====================================\n");
    printf("\t\t\t - LIST RECORDS -");
    printf("\n\t\t====================================\n");
    printf("\n1. Cyber crime Case. \n");
    printf("2. Fraud Case. \n");
    printf("3. Kidnapping Case. \n");
    printf("4. Murder Case. \n");
    printf("5. Rape and sexual assault Case. \n");
    printf("6. Robbery Case. \n");
    printf("7. Sexual harassment Case. \n");
    printf("8. Beck.\n");
    printf("Choice : ");
    scanf("%d",&b);
    switch (b)
    {
    case 1:
        system("cls");

        crime_data1();
        int a;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&a);
        if (a==1)
        {
            system("cls");
        }
        break;
    case 2:
        system("cls");
        crime_data2();
        int b;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&b);
        if (b==1)
        {
            system("cls");
        }
        break;
    case 3:
        system("cls");
        crime_data3();
        int c;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&c);
        if (c==1)
        {
            system("cls");
        }
        break;
    case 4:
        system("cls");
        crime_data4();
        int d;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&d);
        if (d==1)
        {
            system("cls");
        }
        break;
    case 5:
        crime_data5();
        int e;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&e);
        if (e==1)
        {
            system("cls");
        }
        break;
    case 6:
        system("cls");
        crime_data6();
        int f;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&f);
        if (f==1)
        {
            system("cls");
        }
        break;
    case 7:
        system("cls");
        crime_data7();
        int g;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&g);
        if (g==1)
        {
            system("cls");
        }
        break;
    case 8:
        system("cls");
        admin();
        break;

    }
    }

}
void modi_fir()
{

    int b;
    while (1)
    {
            printf("\n\n\t\t========================================\n");
    printf("\t\t\t - MODIFY LIST RECORDS -");
    printf("\n\t\t========================================\n");
    printf("\n1. Modify Cyber crime Case. \n");
    printf("2. Modify Fraud Case. \n");
    printf("3. Modify Kidnapping Case. \n");
    printf("4. Modify Murder Case. \n");
    printf("5. Modify Rape and sexual assault Case. \n");
    printf("6. Modify Robbery Case. \n");
    printf("7. Modify Sexual harassment Case. \n");
    printf("8. Beck.\n");
    printf("Choice : ");
    scanf("%d",&b);
    fflush(stdin);
    switch (b)
    {
    case 1:
        system("cls");
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - SEARCH F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        int ab;
        char num[1000];
        FILE*f1;
        printf("\nEnter Case Number : ");
        fflush(stdin);
        scanf("%d",&ab);
        printf("Enter Case Uncommon Number : ");
        fflush(stdin);
        gets(num);
        f1=fopen("Cyber_Crime.txt","rb+");
        while (fread(&x,sizeof(x),1,f1))
        {




        if (strcmp(num,x.unc)==0)
        {
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - MODIFY F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        printf("\nEnter Investigation Officer : ");
        fflush(stdin);
        gets(x.invesof);
        printf("\nEnter Investigation Officer ID Number: ");
        gets(x.pid);
        }
        }
        fseek(f1,-sizeof(x),SEEK_CUR);

        fwrite(&x,sizeof(x),1,f1);

        fseek(f1,-sizeof(x),SEEK_CUR);

        fread(&x,sizeof(x),1,f1);

        fclose(f1);
        int a;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&a);
        if (a==1)
        {
            system("cls");
        }
        break;
    case 2:
        system("cls");
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - SEARCH F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        int ac;
        char num1[1000];
        FILE*f2;
        printf("\nEnter Case Number : ");
        scanf("%d",&ac);
        printf("Enter Case Uncommon Number : ");
        fflush(stdin);
        gets(num1);
        f2=fopen("fraud.txt","rb+");
        while (fread(&x,sizeof(x),1,f2)==1)
        {




        if (strcmp(num1,x.unc)==0)
        {
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - MODIFY F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        printf("\nEnter Investigation Officer : ");
        fflush(stdin);
        gets(x.invesof);
        printf("\nEnter Investigation Officer ID Number: ");
        fflush(stdin);
        gets(x.pid);
        }
        }
        fseek(f2,-sizeof(x),SEEK_CUR);

        fwrite(&x,sizeof(x),1,f2);

        fseek(f2,-sizeof(x),SEEK_CUR);

        fread(&x,sizeof(x),1,f2);

        fclose(f2);

        int b;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&b);
        if (b==1)
        {
            system("cls");
        }
        break;
    case 3:
        system("cls");
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - SEARCH F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        int ad;
        char num2[1000];
        FILE*f3;
        printf("\nEnter Case Number : ");
        scanf("%d",&ad);
        printf("Enter Case Uncommon Number : ");
        fflush(stdin);
        gets(num2);
        f3=fopen("kidnapping.txt","rb+");
        while (fread(&x,sizeof(x),1,f3)==1)
        {




        if (strcmp(num2,x.unc)==0)
        {
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - MODIFY F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        printf("\nEnter Investigation Officer : ");
        fflush(stdin);
        gets(x.invesof);
        printf("\nEnter Investigation Officer ID Number: ");
        fflush(stdin);
        gets(x.pid);
        }
        }
        fseek(f3,-sizeof(x),SEEK_CUR);

        fwrite(&x,sizeof(x),1,f3);

        fseek(f3,-sizeof(x),SEEK_CUR);

        fread(&x,sizeof(x),1,f3);

        fclose(f3);

        int c;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&c);
        if (c==1)
        {
            system("cls");
        }
        break;
    case 4:
        system("cls");
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - SEARCH F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        int ae;
        char num3[1000];
        FILE*f4;
        printf("\nEnter Case Number : ");
        scanf("%d",&ae);
        printf("Enter Case Uncommon Number : ");
        fflush(stdin);
        gets(num3);
        f4=fopen("murder.txt","rb+");
        while (fread(&x,sizeof(x),1,f4)==1)
        {




        if (strcmp(num3,x.unc)==0)
        {
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - MODIFY F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        printf("\nEnter Investigation Officer : ");
        fflush(stdin);
        gets(x.invesof);
        printf("\nEnter Investigation Officer ID Number: ");
        fflush(stdin);
        gets(x.pid);
        }
        }
        fseek(f4,-sizeof(x),SEEK_CUR);

        fwrite(&x,sizeof(x),1,f4);

        fseek(f4,-sizeof(x),SEEK_CUR);

        fread(&x,sizeof(x),1,f4);

        fclose(f4);

        int d;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&d);
        if (d==1)
        {
            system("cls");
        }
        break;
    case 5:
        system("cls");
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - SEARCH F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        int af;
        char num4[1000];
        FILE*f5;
        printf("\nEnter Case Number : ");
        scanf("%d",&af);
        printf("Enter Case Uncommon Number : ");
        fflush(stdin);
        gets(num4);
        f5=fopen("rape.txt","rb+");
        while (fread(&x,sizeof(x),1,f5)==1)
        {
          if (strcmp(num4,x.unc)==0)
        {
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - MODIFY F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        printf("\nEnter Investigation Officer : ");
        fflush(stdin);
        gets(x.invesof);
        printf("\nEnter Investigation Officer ID Number: ");
        fflush(stdin);
        gets(x.pid);
        }
        }
        fseek(f5,-sizeof(x),SEEK_CUR);

        fwrite(&x,sizeof(x),1,f5);

        fseek(f5,-sizeof(x),SEEK_CUR);

        fread(&x,sizeof(x),1,f5);

        fclose(f5);
        int e;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&e);
        if (e==1)
        {
            system("cls");
        }
        break;
    case 6:
        system("cls");
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - SEARCH F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        int ag;
        char num5[1000];
        FILE*f6;
        printf("\nEnter Case Number : ");
        scanf("%d",&ag);
        printf("Enter Case Uncommon Number : ");
        fflush(stdin);
        gets(num5);
        f5=fopen("robbery.txt","rb+");
        while (fread(&x,sizeof(x),1,f6)==1)
        {
          if (strcmp(num5,x.unc)==0)
        {
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - MODIFY F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        printf("\nEnter Investigation Officer : ");
        fflush(stdin);
        gets(x.invesof);
        printf("\nEnter Investigation Officer ID Number: ");
        fflush(stdin);
        gets(x.pid);
        }
        }
        fseek(f6,-sizeof(x),SEEK_CUR);

        fwrite(&x,sizeof(x),1,f6);

        fseek(f6,-sizeof(x),SEEK_CUR);

        fread(&x,sizeof(x),1,f6);

        fclose(f6);

        int f;
        printf("\n\n1. Beck. \n");
        scanf("%d",&f);
        if (f==1)
        {
            system("cls");
        }
        break;
    case 7:
        system("cls");
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - SEARCH F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        int ah;
        char num6[1000];
        FILE*f7;
        printf("\nEnter Case Number : ");
        scanf("%d",&ah);
        printf("Enter Case Uncommon Number : ");
        fflush(stdin);
        gets(num6);
        f7=fopen("sexual.txt","rb+");
        while (fread(&x,sizeof(x),1,f7)==1)
        {
          if (strcmp(num6,x.unc)==0)
        {
        printf("\n\n\t\t========================================\n");
        printf("\t\t\t - MODIFY F.I,R RECORDS -");
        printf("\n\t\t========================================\n");
        printf("\nEnter Investigation Officer : ");
        fflush(stdin);
        gets(x.invesof);
        printf("\nEnter Investigation Officer ID Number: ");
        fflush(stdin);
        gets(x.pid);
        }
        }
        fseek(f7,-sizeof(x),SEEK_CUR);

        fwrite(&x,sizeof(x),1,f7);

        fseek(f7,-sizeof(x),SEEK_CUR);

        fread(&x,sizeof(x),1,f7);

        fclose(f7);

        int g;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&g);
        if (g==1)
        {
            system("cls");
        }
        break;
    case 8:
        system("cls");
        admin();
        break;

    }
    }

}
void add_criminal()
{
    printf("\n\n\t\t========================================\n");
    printf("\t\t\t  - ADD CRIMINAL RECORDS -");
    printf("\n\t\t========================================\n");

    printf("\nEnter Criminal First Name : ");
    fflush(stdin);
    gets(y.name);
    printf("Enter Criminal Last Name : ");
    fflush(stdin);
    gets(y.lname);
    printf("Enter Criminal Father Name : ");
    fflush(stdin);
    gets(y.fname);
    printf("Enter Criminal Mother Name : ");
    fflush(stdin);
    gets(y.mname);
    printf("Enter Arrested Date : ");
    fflush(stdin);
    gets(y.arrdate);
    printf("Enter Criminal National ID Number : ");
    fflush(stdin);
    gets(y.nid);
    printf("Enter Criminal Number : ");
    fflush(stdin);
    gets(y.cid);
    printf("Enter The name of the offender's crime : ");
    fflush(stdin);
    gets(y.cname);
}

void sapl()
{
    printf("\n\n\t\t========================================\n");
    printf("\t\t\t- SEARCH POLICE RECORDS -");
    printf("\n\t\t========================================\n\n");
    char arean[100];

    FILE*log;
    log=fopen("log.txt","rb");
    printf("\nEnter Area Name : ");
    fflush(stdin);
    gets(arean);

    while (fread(&l,sizeof(l),1,log))
    {
        if(strcmp(arean,l.postinga)==0 )
        {
            printf("\nFirst Name : ");
            puts(l.fname);
            printf("Last Name : ");
            puts(l.lname);
            printf("Police Rank : ");
            puts(l.rank);
            printf("Police ID : ");
            puts(l.id);
            printf("\n\n");
        }
    }
    fclose(log);
}
void mpd()
{
    lebel:
    printf("\n\n\t\t==========================================\n");
    printf("\t\t\t- MODIFY POLICE RECORDS -");
    printf("\n\t\t==========================================\n\n");
    FILE*log;
    char id[100],rank[100],choice;
    int a;
    printf("\nEnter Police Rank : ");
    fflush(stdin);
    gets(rank);
    printf("\nEnter Police ID : ");
    fflush(stdin);
    gets(id);
    log=fopen("log.txt","rb+");
     while ( fread ( &l, sizeof ( l ), 1, log ) == 1 )
        {
            if(strcmp(l.id,id)==0 && strcmp(l.rank,rank)==0)
            {
                printf("\nYOUR OLD RECORD WAS AS:");
                printf("\nFirst Name : ");
                puts(l.fname);
                printf("Last Name : ");
                puts(l.lname);
                printf("Police Rank : ");
                puts(l.rank);
                printf("Police ID : ");
                puts(l.id);
                printf("Posting Area : ");
                puts(l.postinga);
                printf("User Name : ");
                puts(l.uname);
                printf("PassWord : ");
                puts(l.pass);
                printf("\n\n\t\tWHAT WOULD YOU LIKE TO EDIT..");

                printf("\n1. First Name. \n");
                printf("2. Last Name. \n");
                printf("3. Police Rank. \n");
                printf("4. Police ID. \n");
                printf("5. Posting Area. \n");
                printf("6. User Name. \n");
                printf("7. PassWord. \n");
                printf("8. Whole Record. \n");
                printf("9. Back. ");
                do
                {

                    printf("\n\tENTER YOUR CHOICE:");
                    fflush(stdin);
                    scanf("%d",&a);
                    fflush(stdin);

                    switch(a)
                    {
                    case 1:
                        printf("\nEnter New Data. ");
                        printf("\nEnter First Name : ");
                        gets(l.fname);
                        break;
                    case 2:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Last Name : ");
                        gets(l.lname);
                        break;
                    case 3:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Police Rank : ");
                        gets(l.rank);
                        break;
                    case 4:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Police ID : ");
                        gets(l.id);
                        break;
                    case 5:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Posting Area : ");
                        gets(l.postinga);
                        break;
                    case 6:
                        printf("\nEnter New Data. ");
                        printf("\nEnter User Name : ");
                        gets(l.uname);
                        break;
                    case 7:
                        printf("\nEnter New Data. ");
                        printf("\nEnter PassWord : ");
                        gets(l.pass);
                        break;
                    case 8:
                        printf("\nEnter First Name : ");
                        gets(l.fname);
                        printf("Enter Last Name : ");
                        gets(l.lname);
                        printf("Enter Police Rank : ");
                        gets(l.rank);
                        printf("Enter Police ID : ");
                        gets(l.id);
                        printf("Enter Posting Area : ");
                        gets(l.postinga);
                        printf("Enter User Name : ");
                        gets(l.uname);
                        printf("Enter PassWord : ");
                        gets(l.pass);
                        break;
                    case 9:
                        system("cls");
                        admin();
                        break;
                    }



               }
               while(a<1||a>10);

                fseek(log,-sizeof(l),SEEK_CUR);

                fwrite(&l,sizeof(l),1,log);

                fseek(log,-sizeof(l),SEEK_CUR);

                fread(&l,sizeof(l),1,log);

                choice=5;

                break;


        }
    }
    if(choice==5)

        {

            system("cls");

            printf("\n\t\tEDITING COMPLETED...\n");
            printf("--------------------\n");
            printf("THE NEW RECORD IS:\n");
            printf("--------------------\n");
           printf("\nFirst Name : ");
                puts(l.fname);
                printf("Last Name : ");
                puts(l.lname);
                printf("Police Rank : ");
                puts(l.rank);
                printf("Police ID : ");
                puts(l.id);
                printf("Posting Area : ");
                puts(l.postinga);
                printf("User Name : ");
                puts(l.uname);
                printf("PassWord : ");
                puts(l.pass);

                fclose(log);
                printf("\n\n\tWOULD YOU LIKE TO EDIT ANOTHER RECORD.(Y/N)");
                scanf("%c",&choice);

        }
        else
        {

            printf("\nTHE RECORD DOES NOT EXIST::\n");
            printf("\nWOULD YOU LIKE TO TRY AGAIN...(Y/N)");
        	scanf("%c",&choice);

        }
        if (choice == 'y')
        {
            system("cls");
            goto lebel;
        }
        else admin();



}
void scl()
{
    printf("\n\n\t\t========================================\n");
    printf("\t\t\t - CRIMINAL LIST RECORDS -");
    printf("\n\t\t========================================\n");
    FILE*f8;
    f8=fopen("Criminal_Data.txt","rb");
    while (fread(&y,sizeof(y),1,f8))
    {
    printf("\nCriminal First Name : ");
    puts(y.name);
    printf("Criminal Last Name : ");
    puts(y.lname);
    printf("Criminal Father Name : ");
    puts(y.fname);
    printf("Criminal Mother Name : ");
    puts(y.mname);
    printf("Arrested Date : ");
    puts(y.arrdate);
    printf("Criminal National ID Number : ");
    puts(y.nid);
    printf("Criminal Number : ");
    puts(y.cid);
    printf("The name of the offender's crime : ");
    puts(y.cname);
    }
    fclose(f8);
return;

}

void mcd()
{
    lebel:
    printf("\n\n\t\t==========================================\n");
    printf("\t\t\t- MODIFY CRIMINAL RECORDS -");
    printf("\n\t\t==========================================\n\n");
    FILE*f8;
    char id[100],choice;
    int a;
    printf("\nEnter Criminal Number : ");
    fflush(stdin);
    gets(id);

    f8=fopen("Criminal_Data.txt","rb+");

    while ( fread ( &y, sizeof ( y ), 1, f8 ) == 1 )
        {

            if(strcmp(y.cid,id)==0)
            {
                printf("\nYOUR OLD RECORD WAS AS:");
                printf("\nCriminal First Name : ");
                puts(y.name);
                printf("Criminal Last Name : ");
                puts(y.lname);
                printf("Criminal Father Name : ");
                puts(y.fname);
                printf("Criminal Mother Name : ");
                puts(y.mname);
                printf("Arrested Date : ");
                puts(y.arrdate);
                printf("Criminal National ID Number : ");
                puts(y.nid);
                printf("Criminal Number : ");
                puts(y.cid);
                printf("The name of the offender's crime : ");
                puts(y.cname);

                printf("\n\n\t\tWHAT WOULD YOU LIKE TO EDIT..");

                printf("\n1. First Name. \n");
                printf("2. Last Name. \n");
                printf("3. Father Name. \n");
                printf("4. Mother Name. \n");
                printf("5. National ID. \n");
                printf("6. Criminal Number. \n");
                printf("7. Arrested Date. \n");
                printf("8. The name of the offender's crime. \n");
                printf("9. Whole Record. \n");
                printf("10. Back. ");


                do
                {

                    printf("\n\tENTER YOUR CHOICE:");
                    fflush(stdin);
                    scanf("%d",&a);
                    fflush(stdin);

                    switch(a)
                    {
                    case 1:
                        printf("\nEnter New Data. ");
                        printf("\nEnter First Name : ");
                        gets(y.name);
                        break;
                    case 2:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Last Name : ");
                        gets(y.lname);
                        break;
                    case 3:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Father Name : ");
                        gets(y.fname);
                        break;
                    case 4:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Mother Name : ");
                        gets(y.mname);
                        break;
                    case 5:
                        printf("\nEnter New Data. ");
                        printf("\nEnter National ID : ");
                        gets(y.nid);
                        break;
                    case 6:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Criminal Number : ");
                        gets(y.cid);
                        break;
                    case 7:
                        printf("\nEnter New Data. ");
                        printf("\nEnter Arrested Date : ");
                        gets(y.arrdate);
                        break;
                    case 8:
                        printf("\nEnter New Data. ");
                        printf("\nEnter The name of the offender's crime : ");
                        gets(y.cname);
                        break;
                    case 9:
                        printf("\nEnter New Data. ");
                        printf("\nEnter First Name : ");
                        gets(y.name);
                        printf("Enter Last Name : ");
                        gets(y.lname);
                        printf("Enter Father Name : ");
                        gets(y.fname);
                        printf("\nEnter Mother Name : ");
                        gets(y.mname);
                        printf("Enter National ID : ");
                        gets(y.nid);
                        printf("Enter Criminal Number : ");
                        gets(y.cid);
                        printf("Enter Arrested Date : ");
                        gets(y.arrdate);
                        printf("Enter The name of the offender's crime : ");
                        gets(y.cname);
                        break ;
                    case 10:
                        system("cls");
                        admin();
                        break;
                    }



               }
               while(a<1||a>11);

                fseek(f8,-sizeof(y),SEEK_CUR);

                fwrite(&y,sizeof(y),1,f8);

                fseek(f8,-sizeof(y),SEEK_CUR);

                fread(&y,sizeof(y),1,f8);

                choice=5;

                break;


        }
    }
    if(choice==5)

        {

            system("cls");

            printf("\n\t\tEDITING COMPLETED...\n");
            printf("--------------------\n");
            printf("THE NEW RECORD IS:\n");
            printf("--------------------\n");
            printf("\nCriminal First Name : ");
                puts(y.name);
                printf("Criminal Last Name : ");
                puts(y.lname);
                printf("Criminal Father Name : ");
                puts(y.fname);
                printf("Criminal Mother Name : ");
                puts(y.mname);
                printf("Arrested Date : ");
                puts(y.arrdate);
                printf("Criminal National ID Number : ");
                puts(y.nid);
                printf("Criminal Number : ");
                puts(y.cid);
                printf("The name of the offender's crime : ");
                puts(y.cname);

                fclose(f8);
                printf("\n\n\tWOULD YOU LIKE TO EDIT ANOTHER RECORD.(Y/N)");
                scanf("%c",&choice);

        }
        else
        {

            printf("\nTHE RECORD DOES NOT EXIST::\n");
            printf("\nWOULD YOU LIKE TO TRY AGAIN...(Y/N)");
        	scanf("%c",&choice);

        }
        if (choice == 'y')
        {
            system("cls");
            goto lebel;
        }
        else admin();



}
void admin()
{
    //printf("\n\n\t\t====================================\n");
    //printf("\t\t\t  - ADMIN PANEL -");
    //printf("\n\t\t====================================\n");
    system("cls");
    int a;
    while (1)
    {
    printf("\n\n\t\t====================================\n");
    printf("\t\t\t  - ADMIN PANEL -");
    printf("\n\t\t====================================\n");
    printf("\n1. ADD POLICE OFFICER. \n");
    printf("2. ADD CRIMINAL. \n");
    printf("3. SHOW F.I.R. \n");
    printf("4. SHOW Area POLICE LIST. \n");
    printf("5. MODIFIED POLICE DATA. \n");
    printf("6. MODIFIED CRIMINAL DATA. \n");
    printf("7. MODIFIED F.I.R. \n");
    printf("8. SHOW CRIMINAL LIST. \n");
    printf("9. Back. \n");
    printf("Choice : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ab;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ab);
        if (ab==1)
        {
            system("cls");
            admin();
        }
        else
            system("cls");
        registe();
        int a;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&a);
        if (a==1)
        {
            system("cls");
        }
        break;
    case 2:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ac;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ac);
        if (ac==1)
        {
            system("cls");
            admin();
        }
        else
            system("cls");
        FILE*f8;
        f8=fopen("Criminal_Data.txt","ab+");
        add_criminal();
        fwrite(&y,sizeof(y),1,f8);
        fclose(f8);
        int b;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&b);
        if (b==1)
        {
            system("cls");
        }

        break;
    case 3:
        system("cls");

        show_fir();
        int c;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&c);
        if (c==1)
        {
            system("cls");
        }
        break;
    case 4:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ad;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ad);
        if (ad==1)
        {
            system("cls");
            admin();
        }
        else
            system("cls");
        sapl();
        int d;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&d);
        if (d==1)
        {
            system("cls");
        }
        break;
    case 5:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ak;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ak);
        if (ak==1)
        {
            system("cls");
            admin();
        }
        else
            system("cls");
        mpd();


        int e;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&e);
        if (e==1)
        {
            system("cls");
        }

        break;
    case 6:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int ae;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&ae);
        if (ae==1)
        {
            system("cls");
            admin();
        }
        else
            system("cls");
        mcd();

        int f;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&f);
        if (f==1)
        {
            system("cls");
        }

        break;
    case 7:
        system("cls");
        modi_fir();

        int g;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&g);
        if (g==1)
        {
            system("cls");
        }

        break;
    case 8:
        system("cls");
        printf("\n\n\t\t====================================\n");
        printf("\t\t\t  - CONFIRMATION -");
        printf("\n\t\t====================================\n");
        int af;
        printf("\n\n1. Back. \n");
        printf("2. Continue. \n");
        printf("Choice : ");
        scanf("%d",&af);
        if (af==1)
        {
            system("cls");
            admin();
        }
        else
            system("cls");
        scl();

        int h;
        printf("\n\n1. Beck. \n");
        printf("Choice : ");
        scanf("%d",&h);
        if (h==1)
        {
            system("cls");
        }


        break;
    case 9:
        system("cls");
        main();
        break;

    }
    }

}
int main()
{

    int a;

    while (1)
    {
        printf("\n\n\t========================================================\n");
    printf("\t   -DIGITALISED POLICE AND CRIME MANAGEMENT SYSTEM-\n");
    ///printf("\t\t     -CREATED DATE : 15-09-2020-\n");
    ///printf("\t\t  -MADE BY : GAZI FUAD MD. TAHSIN.-\n");
    printf("\t========================================================");

    printf("\n\n1. People. \n");
    printf("2. Police. \n");
    printf("3. Admin. \n");
    printf("Choice : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        system("cls");

        people();

        break;

    case 2:
        system("cls");

        login();
        break;
    case 3:
        system("cls");
        adminlogin();
        int b;
        printf("\n\n1. Beck. \n");
        scanf("%d",&b);
        if (b==1)
        {
            system("cls");
        }
        break;
    }
    }
    return 0;
}
