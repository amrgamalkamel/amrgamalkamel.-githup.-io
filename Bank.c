#include<stdio.h>
#include<conio.h>
int main()
{

    float Withdraw,Deposit, Transfer;
       char name[25],username[15];
    float Balence=20000;
    int Acount1 ,Acount,Pin;
    int b,type,password;
    int Transection=1;
    int number,X,Y;
int option;



system("cls");


printf("\n\n\tINSTRUCTIONS:\n\n\tplease don't share your ATM pin, CAERD no.CVV. ACCOUNT NO.\n\tBank never ask your persnol information like this.\n\tSo please BECAREFULL.\n\n\n");



printf("\n\n\t 1.  FOR LOGIN :\t\t");


printf("\t2. NEW USER RISISTER:\n\n");



        printf("\n\t\t\tCHOOSE ONE OPTION:\n\n\t\t\t\t") ;

              scanf("%d", &option);

switch(option){

case 1:
    printf("\n\t\t\tLOGIN HERE:\n\n");
printf("USER NAME:\t\t");
scanf("%s", &username);
printf("PASSWORD:\t\t");
scanf("%d", &password);
break;


case 2:
    printf("\n\t\t\tRESISTER HERE:\n");
    printf("\n\nyou are new user, \nso kindly fill all information carefully:\n\n");
    printf("\nplease enter your  name\n");
    scanf("%s", &name);
    printf("\n father name: \n");
     scanf("%s", &name);

    printf("\nplease enter address:\n");
      scanf("%s", &name);
    printf("\nname of your state:\n");
      scanf("%s", &name);

printf("\nEnter your mobile number:\n");
    scanf("%d", &type);

     printf("\ncreate your user name:\n");
      scanf("%s", &username);

printf("\n Create your password:\n");
    scanf("%d", &password);
    printf("\nReEnter your password:\n");
    scanf("%d", &type);
    printf("CONGRATES !!now you can get your account number and ATM pin number:\n");

    printf("your username is: %s",username);
    printf("\nyour password is: %d",password);



    printf("\n\tyour account number is: 35138246144\nyour ATM pin is: 4587.\t Don't share with anyone\n");
    printf("\n\tNow you are elligible for SBI BANK GROUP.\n");
    printf("\n\tyou have succesfully resister with us. \nAnd you are most welcome to be a new member of SBI BANK GROUP.\n");



printf("\n\n\t\t\tpress any key to continue\n");
    break;
default:
    printf("\nerror..????\n\n");
    break;



}

while(1)
{






        printf("\t************************************************************\n");

printf("\n \t\t\tWELCOME TO SBI BANK GROUP:\n\n\t\t\t\tPURE BANKING NOTHING ELSE:\n\n");
printf("\t************************************************************\n");













            printf("\n\t\t\tHOW MAY I HELP YOU ?\n\n");
            printf("1. BALENCE ENQUIRY\n");
            printf("2. DIPOSIT\n");
            printf("3. CASH WITHDRAW\n");
            printf("4. FUND TRANSFER\n");
            printf("5. EXIT");
            printf("\t\t\t\t\t\t");


            printf("6. LINK AADHAR\n\t\t\t\t\t\t");
            printf("7. MINI STATEMENT\n\t\t\t\t\t\t");
            printf("8. CHANGE PIN\n\t\t\t\t\t\t");

            printf("9. CONTACT US\t\t\t\t\t\t\n");




        printf("\n\t\t\tCHOOSE ONE OPTION:\n\t\t") ;

              scanf("%d", &option);

            switch(option)
            {  printf("\n\t\tpress any key to EXIT");

                case 1:


                printf("\t BALENCE ENQUIRY\n");
                printf("your current balence is:%f\n\n",Balence);

                printf("\n\n\t\t\tpress any key to continue\n");
                break;

                case 2:
                printf("\t\t DEPOSIT\n");
                printf("How much money do you want to deposit.\n\n");
                scanf("%f", &Deposit);
                if(Deposit> 0 && Deposit<=20000)
                {
                    printf("\n you have deposited RS: %f\n",Deposit);
                    Balence=Balence+Deposit;
                    printf("YOUR CURRENT BALENCE IS: %f\n\n", Balence);

                }

                else if(Deposit>20000)
                {
                    printf("\n you can't deposit that amount in one time:\n\n");

                }
                else{
                    printf("\n Invailid deposit amount\n");

                }
            printf("\n\n\t\t\tpress any key to continue\n");
                break;
                case 3:
                printf("\n\t\tCASH WITHDRAW\n\n");
                printf("\n How much amount do you want to withdraw.\n\n");
                scanf("%f", &Withdraw);
                if(Withdraw<=Balence && Withdraw<=20000)
                {
                    printf("\n you have just withdraw RS: %f \n\n",Withdraw);
                    Balence=Balence- Withdraw;
                    printf("\nyour current balance after withdraw is RS: %f \t",Balence);

                }
                else if(Withdraw>20000)
                {
                    printf(" \nyou can't withdraw that amount at one time:\n Because limited amount you can withdraw is 20000. \nSo please try again.\n\n ");

                }
                else{
                    printf("\n you don't have enough money in your acount.\n\n");

                }
    printf("\n\n\t\t\tpress any key to continue\n");
                break;
                case 4:
                printf("\n\t\t TRANSFER AMOUNT\n\n ");
                printf("\t\t Name of account in which  you want to transfer.\n\n");
                scanf("%d", &Acount);



                printf("\n Enter amount to transfer.\n");
                scanf("%d", &Acount);




                if(Balence>=Transfer){
                    printf("\n CONGRATULATION !!\nyou have succesfully transfered.\n\n");
                    Balence=Balence-Transfer;
                    printf("\nyour current balance after transfer is RS: %f \t",Balence);

                }
                else{
                    printf("\nyou don't have sufficient balance\n\n");

                }
    printf("\n\n\t\t\tnpress any key to contineo\n");
                break;
                case 5:
                    exit(0);
                        printf("\n\n\n\t\t\tpress any key to exit...\n");
                    break;


                case 6:
                    printf("please enter your 12 digit aadhar number:\t\n\n\n");
                    scanf("%d",&type);
printf("if correct press 1");





printf("\t\t\t\t");
printf("if incorrect press 0\n\n\t\t");

scanf("%d",&type);


  printf("\n\nyou have no 2nd chance , so please fill carefully:\n");
printf("\n  PLEASE Re-Enter YOUR 12 DIGIT AADHAR NUMBER:\n\n");
scanf("%d", &option);

switch(option)
{

case 1:
    printf("\nplease enter your 12 digit aadhar number:\t\n\n");
    scanf("%d", &type);
}


                    printf("\nCONGRATES !!\n\n you have succesfully resister your aadhar number.\n\n");
printf("\n\n\t\t\tpress any key to continue\n");
break;




                case 7:

        printf("\t************************************************************\n");
printf("\n \t\t\tWELCOME TO SBI BANK GROUP:\n\n\t\t\t\tPURE BANKING NOTHING ELSE:\n\n");
printf("\t************************************************************\n\n\n");

printf("\t\t\tyour PASSBOOK statement is given bellow:\n\n\n");


printf("_________________________________________________________________________\n");

  printf("\nDate: 20/5/2K18\t\t\t");
  printf("Time: 10:49:34 AM\n\n");


Balence=(Balence+Deposit)+(Balence-Withdraw)+(Balence-Transfer);
                 printf("\nyour current balance is RS. %f \t",Balence) ;

if(Deposit> 0 && Deposit<=20000)
                {
                    printf("\n\n you have deposit in your Acount RS: %f\n",Deposit);

                }


if(Withdraw <=Balence && Withdraw<=20000)
                {
                    printf("\n\n you have withdraw balance from your account RS: %f \n\n",Withdraw);
                }





                if(Balence>=Transfer){
                    printf("\n \n you have transfered balance from your account RS:%f\n\n",Balence);
                }
printf("\n\n\t\t\tpress any key to continue\n");

break;
case 8:
    printf("\nplease enter your old pin number\n");
     scanf("%d",&type);
    printf("\n Enter your new pin number\n");
    scanf("%d",&type);
     printf("\n Enter conform pin number\n");
    scanf("%d",&type);
    printf("congratulation !!\n you have succesfully change your pin number.\n\n");

    printf("\n\n\t\t\tpress any key to continue\n");
    break;


case 9:

printf("\n_______________________________________________________________________________\n");
    printf("\n\t\t\tNOW YOU CAN FLLOW THESE STEP FOR CONTACT US:\n");

printf("\n_______________________________________________________________________________\n");

printf("BANK:\t\tSBI GROUP. \n\n");
printf("BRANCH:\t\tSIWAN\n\n");
printf("IFSC CODE:\tSBIN0017825\n\n");
printf("CALL:\t\t+142567-3456789/87654321(24x7).\n\n");
printf("MOBILE:\t\t7979909093/6202807337/9523438295\n\n");
printf("\nE-mail US at\tsupport.SBIGROUP@gmail.com / abhinitkr86@gmail.com /\n\n\t\tkrabhinit60@gmail.com\n\n");
printf("\t\nOUR ONLINE PORTAL:\t\thttp://www.sbigroup.co.in\n\n");

printf("\n_______________________________________________________________________________\n");

    printf("\n\n\t\t\tpress any key to continue\n");
break;

default:
    printf("\n\n Invailid option, choose correct:\n\n ");


printf("\n\n\t\t\tpress any key to continue\n");
 break;




}

getch();


    }


}
 