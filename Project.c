#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

int quiz();
int lib();
int con();

int main()
 {
    int n;
    printf("Enter your choice\n 1. Quiz\n 2. Library Management System\n 3. Currency converter\n");
    scanf("%d", &n);
    SetConsoleOutputCP(CP_UTF8);
    switch(n)
	 {
	 
        case 1:
        		printf("Answers must be lowercase without spaces:\n");
        		printf("\n");
    printf("\n");
     printf("\n");
            quiz();
            break;
            
        case 2:
            lib();
            break;
            
            case 3:
            	
            	con();
            	break;
            
        default:
            printf("Wrong choice\n");
    }
    
    return 0;
}

int quiz() 
{
	 SetConsoleOutputCP(CP_UTF8);
    char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],j[20],i=0;
    int x,sml=1;
     printf("Q no 1.");
    printf("Which is largest desert in the world?\n");
   scanf("%s",a);

    if(strcmp(a, "sahara") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is sahara.\n");
    }
    
    printf("\n");
    printf("\n");
  
    
    printf("Q no 2.");
     printf("Which is smallest planet in solar systmen?\n");
   scanf("%s",b);
    if(strcmp(b, "mercury") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is mercury:\n");
    }

 printf("\n");
    printf("\n");
  
    
    printf("Q no 3.");
    
    printf("Q no 3: When was the UNO established?\n");
    scanf("%d",&x);
    if(x == 1945) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect! The correct answer is 1945.\n");
    }
    
      printf("\n");
    printf("\n");
  
    
    printf("Q no 4.");
     printf("In which country is the global seed vault located?\n");
   scanf("%s",c);
    if(strcmp(c, "norway") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is norway:\n");
    }
    
    
      printf("\n");
    printf("\n");
  
    
    printf("Q no 5.");
     printf("What city is known as 'The Eternal city'?\n");
   scanf("%s",d);
    if(strcmp(d, "rome") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is rome:\n");
    }
    
    
      printf("\n");
    printf("\n");
  
    
    printf("Q no 6.");
     printf("Which animal is known as the""Ship of the Desert""?\n");
   scanf("%s",e);
    if(strcmp(e, "camel") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is camel:\n");
    }
    
    
      printf("\n");
    printf("\n");
  
    
    printf("Q no 7.");
     printf("Which city is largest city in US?\n");
   scanf("%s",f);
    if(strcmp(f, "newyorkcity") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is newyorkcity:\n");
    }
    
    
    
      printf("\n");
    printf("\n");
  
    
    printf("Q no 8.");
     printf("Which Country produces the most coffee in the world?\n");
   scanf("%s",g);
    if(strcmp(g, "brazil") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is brazil:\n");
    }
    
    
      printf("\n");
    printf("\n");
  
    
    printf("Q no 9.");
     printf("Which planet is known as the ""Morning Star""?\n");
   scanf("%s",h);
    if(strcmp(h, "venus") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is venus:\n");
    }
    
    
      printf("\n");
    printf("\n");
  
    
    printf("Q no 10.");
     printf("Which is largest organ in human body?\n");
   scanf("%s",j);
    if(strcmp(j, "skin") == 0) {
        printf("Correct!\n");
        i++;
    } else {
        printf("Incorrect!\n");
        printf("The correct answer is skin:\n");
    }
     printf("\n");
    printf("\n");
    printf("Game Finished\n");
    printf("Hope You Enjoyed The Game: \U0001F60A\n");
   
    printf("Your Total Score is %d:",i);
     printf("\n");
     
   printf("Thank You:\U0001F60A\ \U0001F60A\ \U0001F60A\ \U0001F60A\n");

    
    
    
    
    return 0;
}

int lib()
 {
   int d;

    printf("Enter 1 to insert new data\n");
    printf("Enter 2 to Read data\n");
    printf("Enter 3 to Edit data\n");
    printf("Enter 4 to Read Particular student information\n");
    printf("Enter your choice:\n");
    scanf("%d", &d);
printf("\n\n");
    switch (d) {
        case 1: {
            int id, b, dt,i,t;
            char x[30];
            FILE *fp;

          
            fp = fopen("Bij.txt", "a");
            if (fp == NULL) {
                printf("Error opening file!\n");
                return 1;
            }
printf("Enter Number of students whose data is needed to be inserted\n");
scanf("%d",&t);
for(i=0;i<t;i++)
{

            
            printf("Enter Student ID: ");
            scanf("%d", &id);

            printf("Enter Student Name: ");
            scanf("%s", x);

            printf("Enter Book ID: ");
            scanf("%d", &b);

            printf("Enter Date (e.g., YYYYMMDD): ");
            scanf("%d", &dt);
}
            
            fprintf(fp, "Student ID: %d\n", id);
            fprintf(fp, "Student Name: %s\n", x);
            fprintf(fp, "Book ID: %d\n", b);
            fprintf(fp, "Date: %d\n\n", dt);
            fflush(fp);
            fclose(fp);

            printf("Data successfully inserted!\n");
            break;
        }

        
              case 2: {
                FILE *fp;
                char ch;

              
                fp = fopen("Bij.txt", "r");
                if (fp == NULL) {
                    printf("Error opening file! Ensure data has been inserted first.\n");
                    break;
                }
               printf("Student`s data are:\n");
               
                 while ((ch = fgetc(fp)) != EOF) {
                    putchar(ch);}
printf("Thank You:\U0001F60A\ \U0001F60A\ \U0001F60A\ \U0001F60A\n");
                fclose(fp);
               
                break;
            }
          

        case 3: {
            int searchId, newBookId, newDate;
            char newName[30];
            FILE *fp = fopen("Bij.txt", "r");
            FILE *temp = fopen("Temp.txt", "w");
            char line[100];
            int id, found = 0;

            if (fp == NULL || temp == NULL) {
                printf("Error opening file!\n");
                return 1;
            }

            printf("Enter Student ID to edit:\n ");
            scanf("%d", &searchId);
            fflush(stdin);

             while (fgets(line, sizeof(line), fp) != NULL)
{
	 if (sscanf(line, "Student ID: %d", &id) == 1 && id == searchId)
	 {
	  
found=1;
                    printf("Enter New Student Name: ");
                    scanf("%s", newName);
                    printf("Enter New Book ID: ");
                    scanf("%d", &newBookId);
                    printf("Enter New Date (YYYYMMDD): ");
                    scanf("%d", &newDate);

                    fprintf(temp, "Student ID: %d\n", id);
                    fprintf(temp, "Student Name: %s\n", newName);
                    fprintf(temp, "Book ID: %d\n", newBookId);
                    fprintf(temp, "Date: %d\n\n", newDate);
                 
            }
            else
            {
            	 fputs(line, temp);
			}
       }

            fclose(fp);
            fclose(temp);

            if (found) {
                remove("Bij.txt");
                rename("Temp.txt", "Bij.txt");
                printf("Data updated successfully!\U0001F60A\ \U0001F60A\n");
               
            } else {
                printf("Student ID not found.\n");
                remove("Temp.txt");
            }
            break;
        }

        
    
    case 4:
    	{
		
     int searchId, id, b, dt;
            char x[30];
            FILE *fp = fopen("Bij.txt", "r");
            char line[100];
            int found = 0;

            if (fp == NULL) {
                printf("Error opening file! Ensure data has been inserted first.\n");
                break;
            }

            printf("Enter Student ID to search: ");
            scanf("%d", &searchId);

            while (fgets(line, sizeof(line), fp) != NULL) {
                if (sscanf(line, "Student ID: %d", &id) == 1 && id == searchId) {
                    found = 1;
                    printf("\nStudent Details:\n");
                    printf("%s", line);

                    fgets(line, sizeof(line), fp);
                    printf("%s", line);

                    fgets(line, sizeof(line), fp);
                    printf("%s", line);

                    fgets(line, sizeof(line), fp);
                    printf("%s", line);
                }
            }

            if (!found) {
                printf("Student ID not found.\n");
            }
printf("Thank you:\U0001F60A\ \U0001F60A\ \U0001F60A\ \U0001F60A\n");
            fclose(fp);
            break;
        }

        default:
            printf("Wrong choice\n");
            printf("Please select between 1-4\n");
            break;
    }
    
    return 0;
}
int con()
{
	int x,m;
	float y;
	printf("Enter amount in Nepalese Rupee\n");
	scanf("%d",&x);
	printf("\n");
  printf("Select the currency to convert to:\n");
  printf("\n");
    printf("1. USD (United States Dollar)\n");
    printf("2. INR (Indian Rupee)\n");
    printf("3. PKR (Pakistani Rupee)\n");
    printf("4. IR (Indonesian Rupiah)\n");
    printf("5. YEN (Japanese Yen)\n");
    printf("6. CAD (Canadian Dollar)\n");
    printf("7. YUAN (Chinese Yuan)\n");
    printf("8. EURO (Euro)\n");
printf("\n");
scanf("%d",&m);

switch(m)
{
	case 1:
		y=x*0.0072;
		printf("%d NPR = %0.2f USD\n",x,y);
		printf("Thank You\U0001F60A\n");
		break;
		
		case 2:
		y=x*0.625;
		printf("%d NPR = %0.2f INR\n",x,y);
		printf("Thank You\U0001F60A\n");
		break;
		
		case 3:
		y=x*2.01;
		printf("%d NPR = %0.2f PKR\n",x,y);
		printf("Thank You\U0001F60A\n");
		break;
		
		case 4:
		y=x*117.38;
		printf("%d NPR = %0.2f IR\n",x,y);
		printf("Thank You\U0001F60A\n");
		break;
		
		case 5:
		y=x*1.13;
		printf("%d NPR = %0.2f YEN\n",x,y);
		printf("Thank You\U0001F60A\n");
		break;
		
		case 6:
		y=x*0.010;
		printf("%d NPR = %0.2f CUSD\n",x,y);
		printf("Thank You\U0001F60A\n");
		break;
		
		case 7:
	y=x*0.053;
		printf("%d NPR = %0.2f Yuan\n",x,y);
		printf("Thank You\U0001F60A\n");
		break;
		
		case 8:
		y=x*0.0070;
		printf("%d NPR = %0.2f EURO\n",x,y);
		printf("Thank You\U0001F60A\n");
		break;
		
		 default:
            printf("Wrong choice\n");
            break;
		
}
getch();
return 0;
}
