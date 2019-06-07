#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
{
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\n\t\t________________________________________");
     printf("\n\t\t\t         WELCOME ");
     printf("\n\t\t\t           to ");
     printf("\n\t\t\t    THE F.R.I.E.N.D.S Quiz ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t    PROVE YOUR F.R.I.E.N.D.S knowledge    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
        show_record();
        goto mainhome;
	}
     else if (choice=='H')
	{
        help();
        getch();
        goto mainhome;
	}
	else if (choice=='R')
	{
	    reset_score();
        getch();
        goto mainhome;
    }
	else if (choice=='Q')
        exit(1);
    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        gets(playername);
        system("cls");
        printf("\n ------------------  Welcome %s to the F.R.I.E.N.D.S Quiz Game --------------------------",playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLANGE ROUND\n");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.\n");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded 5 POINTS\n");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.\n");
        printf("\n >> You will be asked questions continuously, till right answers are given\n");
        printf("\n >> No negative marking for wrong answers!\n");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if(toupper(getch())=='Y')
		{
		    goto home;
        }
        else
		{
            goto mainhome;
            system("cls");
       }
        home:
        system("cls");
        count=0;
        for(i=1;i<=3;i++)
        {
            system("cls");
            r1=i;
            switch(r1)
            {
            case 1:
                printf("\n\nWhich of the following is a Character in the show?");
                printf("\n\nA.John\t\tB.Sheldon\n\nC.Joey\t\tD.Jonesy");
                if (toupper(getch())=='C')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }
                else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Joey");
		           getch();
                    break;
		       }

        case 2:
            printf("\n\n\nHow many seasons are there in the show?");
            printf("\n\nA.11\t\tB.8\n\nC.10\t\tD.13");
            if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
                getch();
                break;
            }
            else
		       {
		           printf("\n\nWrong!!! The correct answer is C.10");
                    getch();
                    break;
		       }

            case 3:
                printf("\n\n\nWhich character has the funniest laugh?");
                printf("\n\nA.Monica\t\tB.Janice\n\nC.Rachel\t\tD.Pheobe");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }
            else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Janice");
                    getch();
                    break;
                }
            }
        }

	if(count>=2)
	{
	    goto test;
    }
	else
	{
        system("cls");
        printf("\n\nSORRY YOU HAVEN'T WATCHED F.R.I.E.N.D.S YET TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
        getch();
        goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATIONS %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{
		    goto game;
        }
    game:
    countr=0;
    for(i=1;i<=20;i++)
    {
        system("cls");
        r=i;
        switch(r)
		{
            case 1:
                printf("\n\nHow many divorces does Ross have?");
                printf("\n\nA.1\t\tB.2\n\nC.3\t\tD.None");
            if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");countr++;getch();
                break;
                getch();
			 }
            else
		       {
                    printf("\n\nWrong!!! The correct answer is C.3");
                    getch();
                    goto score;
                    break;
		       }

		case 2:
            printf("\n\n\nWhose middle name is Muriel?");
            printf("\n\nA.Chandler\t\tB.Ross\n\nC.Tag\t\tD.Joey");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Chandler");
                getch();
                goto score;
                break;
            }

        case 3:
            printf("\n\n\nWhich team does Joey support?");
            printf("\n\nA.Warriors\t\tB.Lakers\n\nC.Knicks\t\tD.Caveliers");
            if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
			 }
            else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Knicks");
		           getch();
                    goto score;
                    break;
		       }

        case 4:
            printf("\n\n\nTo whom does Joey share his sandwich?");
            printf("\n\nA.Chandler\t\tB.Ross\n\nC.Mary Angela\t\tD.Cookie");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
			 }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Chandler");
                getch();
                goto score;
                break;
            }

        case 5:
            printf("\n\n\nWhat is Ross allergic to?");
            printf("\n\nA.Salmon\t\tB.Shellfish\n\nC.Cheese\t\tD.Anchovies");
            if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
			     break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Shellfish");
                getch();
                goto score;
                break;
            }

		case 6:
            printf("\n\n\nWhich character has a twin?");
            printf("\n\nA.Joey\t\tB.Pheobe\n\nC.Ross\t\tD.Rachel");
            if (toupper(getch())=='B' )
			{
			    printf("\n\nCorrect!!!");countr++;getch();
                break;
			 }
            else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Pheobe");
		           goto score;
                    getch();
                    break;
                }

        case 7:
            printf("\n\n\nWhich letter of the Thesaurus does Joey buy?");
            printf("\n\nA.D\t\tB.H\n\nC.T\t\tD.V");
            if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.V");
                getch();
                goto score;
                break;
            }

        case 8:
            printf("\n\n\nWhat is the last name of Carol's partner?");
            printf("\n\nA.Geller\t\tB.Bunch\n\nC.Willick\t\tD.Smith");
            if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
			    break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Bunch");
                getch();
                goto score;
                break;
            }

        case 9:
            printf("\n\n\nWhat was the name of Joey's roommate after Chandler moved out?");
            printf("\n\nA.Janine\t\tB.Kathy\n\nC.Susanne\t\tD.Sarah");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
			}
            else
		       {
                    printf("\n\nWrong!!! The correct answer is A.Janine");
                    getch();
                    goto score;
                    break;
		       }

        case 10:
            printf("\n\n\nWhat is Ross's profession in the beginning of the show?");
            printf("\n\nA.Paleontologist\t\tB.Professor\n\nC.Doctor\t\tD.Scientist");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
			    break;
            }
            else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Paleontologist");
		           getch();
		           break;
		           goto score;
                }

        case 11:
            printf("\n\n\nWhat is the Joey's favorite food?");
            printf("\n\nA.Cap'n Crunch\t\tB.Toast\n\nC.Sandwich\t\tD.Pasta");
            if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
			 }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Sandwich");
                getch();
                break;
              goto score;
            }

        case 12:
            printf("\n\n\nWhat book did Chandler get Kathy?");
            printf("\n\nA.The Velveteen Rabbit\t\tB.Goldilocks\n\nC.Harry Potter\t\tD.Chicken soup for the Soul");
            if (toupper(getch())=='A')
			  {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
			   }
            else
              {
                    printf("\n\nWrong!!! The correct answer is A.The Velveteen Rabbit");
                    getch();
                    break;
                    goto score;
                }

		case 13:
            printf("\n\n\nIn which season will Janice not make an appearance?");
            printf("\n\nA.4\t\tB.5\n\nC.6\t\tD.7");
            if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.6");
                getch();
                break;
                goto score;
            }

        case 14:
            printf("\n\n\nWhat is the name of Joey's imaginary friend?");
            printf("\n\nA.Maurice\t\tB.Tom\n\nC.Becky\t\tD.Matt");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
			 }
            else
		       {
                    printf("\n\nWrong!!! The correct answer is A.Maurice");
                    getch();
                    break;
                    goto score;
		       }

		case 15:
            printf("\n\n\nWhere does Rachel get to go for her job in the end?");
            printf("\n\nA.London\t\tB.Paris\n\nC.Milan\t\tD.New York");
            if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
			 }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Paris");
                getch();
                goto score;
                break;
            }

		case 16:
            printf("\n\n\nWhat is the Joey special?");
            printf("\n\nA.Two pizzas\t\tB.Meatball sandwich\n\nC.Chocolate mousse\t\tD.Stuffed turkey");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
			}
            else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Two pizzas");
		           getch();
                    goto score;
                    break;
		       }

        case 17:
            printf("\n\n\nWhat color is the cat that pounces on Ross when he is trying confess his feelings?");
            printf("\n\nA.Ginger\t\tB.Black\n\nC.Snow white\t\tD.Grey");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
            }
            else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Ginger");
		           getch();
		           goto score;
                    break;
                }

		case 18:
            printf("\n\n\nHow many times has Chandler kissed Rachel?");
            printf("\n\nA.0\t\tB.1\n\nC.2\t\tD.3\n\n");
            if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.3");
                getch();
                goto score;
                break;
            }

		case 19:
            printf("\n\n\nWhat was the name of the maid that Monica hired?");
            printf("\n\nA.Jill\tB.Samantha\n\nC.Brenda\tD.Ashley\n\n");
            if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Brenda");
                getch();
                goto score;
                break;
            }

		case 20:
            printf("\n\n\nWhat was the name of Ursula's fiance?");
            printf("\n\nA.David\t\tB.Eric\n\nC.Sam\t\tD.Malcom");
            if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Eric");
                getch();
                goto score;
                break;
            }
        }
    }
	score:
    system("cls");
	score=(float)countr*5;
	if(score>0.00 && score<=20.00)
	{
        printf("\n\n\t\tI guess you watched only a few F.R.I.E.N.D.S episodes ");
        printf("\n\t Your score is %.2f",score);
        goto go;
    }
    else if(score>20.00 && score<=40.00)
	{
        printf("\n\n\t\tBetter than not having watched F.R.I.E.N.D.S at all !!");
        printf("\n\t Your score is %.2f",score);
        goto go;
    }
    else if(score>40.00 && score<=80.00)
	{
        printf("\n\n\t\tF.R.I.E.N.D.S is one of your favorites isn't it ?!");
        printf("\n\t Your score is %.2f",score);
        goto go;
    }
    else if(score>80.00 && score<100.00)
	{
        printf("\n\n\t\tF.R.I.E.N.D.S is your all time favorite binge isn't it ?!");
        printf("\n\t Your score is %.2f",score);
        goto go;
    }

    else if(score==100.00)
	{
	    printf("\n\t\t\t\t You are a die hard F.R.I.E.N.D.S fan !!!!!!!!!");
	    printf("\n\t\t\t\t ->p.s: You got that die hard reference too right!! ");
	    printf("\n\t\t Your score is %.2f",score);
	    printf("\t\t Thank you for playing!!");
	}
    else
    {
        printf("\n\n\t******** Do you even know F.R.I.E.N.D.S ********");
	    printf("\n\t\t Your score is %.2f",score);
	    printf("\n\t\t TRY AGAIN");
	    goto go;
    }

	go:
	puts("\n\n Press Y if you want to play again?");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
    {
        edit_score(score,playername);
        goto mainhome;
    }
}
}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{
	    system("cls");
        printf("\n\n                              HELP");
        printf("\n -------------------------------------------------------------------------");
        printf("\n ......................... C program Quiz Game...........\n");
        printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND\n");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
        printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
        printf("\n    right answers otherwise you can't play the Game...........\n");
        printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
        printf("\n    total 20 questions each right answer will be awarded 5 points.\n");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option\n");
        printf("\n >> You will be asked questions continuously if you keep giving the right answers.\n");
        printf("\n >> No negative marking for wrong answers\n");
        printf("\n\n\t*********************BEST OF LUCK*********************************");
        }

void edit_score(float score, char plnm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if(score>=sc)
    {
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
    }
}
