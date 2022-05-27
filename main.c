#include <stdio.h>
#include <stdlib.h>
int password = 1234;
int password2;
int choose;
float amount;
float newBalance;
char accountNo[20];
char phoneNo[20];
char decoderNo[20];
char meterNo[20];

float savingsAccountBalance = 5000000.30;
float currentAccountBalance = 6000000.78;
float fixedDepositAccountBalance =7000000.984;

char receipt_details[20];
FILE *file;

int main()
{
    printf("\n^^^^^^SESSION 9^^^^^^\n");
    printf("\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("\t$$$$AUTOMATED TELLER MACHINE$$$$$\n");
    printf("\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    printf("\t$$$$WELCOME TO GTBANK$$$$$\n\n");
    printf("\t$$$$Please Insert Your Card$$$$$\n\n");
displayLogin();
    return 0;


}

void displayLogin(){

    printf("\t$$$$Enter Your Password$$$$$\n");
    scanf("%d", &password2);

     if(password==password2){
        printf("What Transaction do you want to Make?\n");
     printf("1-For Deposit\n2-For Withdrawal\n3-Transfer\n4-TopUp");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displayDeposit();
    break;

 case 2:
    displayWithdrawal();
    break;

    case 3:
    displayTransfer();
    break;

    case 4:
        displayTopUp();
        break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }

     }

     }
     else{
            printf("Invalid Password!");

     printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
     }



void displayDeposit(){
printf("What Account do you want to Deposit in?\n");
printf("1-For Savings Account\n2-For Current Account\n3For Fixed Deposit Account");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displaySavingsAccountDeposit();
    break;

 case 2:
    displayCurrentAccountDeposit();
    break;

 case 3:
    displayFixedDepositAccountDeposit();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
}

//SAVINGS ACCOUNT DEPOSIT

void displaySavingsAccountDeposit(){
printf("\nEnter the amount of money you want deposit\n");
scanf("%f", &amount);
newBalance = savingsAccountBalance+amount;
printf("\n %f has been deposited into your account, Your new balance is: %f", amount, newBalance);

file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "%f has been deposited into your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}


printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}

//CURRENT ACCOUNT DEPOSIT

void displayCurrentAccountDeposit(){
printf("\nEnter the amount of money you want deposit\n");
scanf("%f", &amount);
newBalance = currentAccountBalance+amount;
printf("\n %f has been deposited into your account, Your new balance is: %f", amount, newBalance);


file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "%f %f has been deposited into your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


//FIXED DEPOSIT ACCOUNT DEPOSIT

void displayFixedDepositAccountDeposit(){
printf("\nEnter the amount of money you want deposit\n");
scanf("%f", &amount);
newBalance = fixedDepositAccountBalance+amount;
printf("\n %f has been deposited into your account, Your new balance is: %f", amount, newBalance);


file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "%f %f has been deposited into your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


// WITHDRAWAL SESSION
void displayWithdrawal(){
   printf("Welcome to Withdrawal Session\n");
    printf("What Account do you want to Withdraw from?\n");
printf("1-For Savings Account\n2-For Current Account\n3For Fixed Deposit Account");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displaySavingsAccountWithdrawal();
    break;

 case 2:
    displayCurrentAccountWithdrawal();
    break;

 case 3:
    displayFixedDepositAccountWithdrawal();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }

}

//SAVINGS ACCOUNT WITHDRAWAL
void displaySavingsAccountWithdrawal(){
printf("\nEnter the amount of money you want withdraw\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;

printf("Do you want Recipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been withdrawn from your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been withdrawn from your account, Your new balance is: %f", amount, newBalance);
}

}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }

}

//CURRENT ACCOUNT WITHDRAWAL
void displayCurrentAccountWithdrawal(){
printf("\nEnter the amount of money you want withdraw\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Recipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been withdrawn from your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been withdrawn from your account, Your new balance is: %f", amount, newBalance);
}

}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }

}

//FIXED DEPOSIT ACCOUNT WITHDRAWAL

void displayFixedDepositAccountWithdrawal(){
printf("\nEnter the amount of money you want withdraw\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;


printf("Do you want Recipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been withdrawn from your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been withdrawn from your account, Your new balance is: %f", amount, newBalance);
}

}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }

}

// TRANSFER SESSION

void displayTransfer(){
 printf("Welcome to Transfer Session\n");
    printf("What Account do you want to Transfer from?\n");
printf("1-For Savings Account\n2-For Current Account\n3For Fixed Deposit Account");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displaySavingsAccountTransfer();
    break;

 case 2:
    displayCurrentAccountTransfer();
    break;

 case 3:
    displayFixedDepositAccountTransfer();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
}


//Savings Account Transfer
void displaySavingsAccountTransfer(){

printf("Enter account no you want to transfer into:\n");
scanf("%s", accountNo);
printf("\nEnter the amount of money you want transfer\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;

printf("Do you want Recipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been transfered from your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been transfered from your account to %s account, Your new balance is: %f", amount,accountNo, newBalance);
}


}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }

}


//Current Account Transfer
void  displayCurrentAccountTransfer(){

printf("Enter account no you want to transfer into:\n");
scanf("%s", accountNo);
printf("\nEnter the amount of money you want transfer\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;

printf("Do you want Recipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been transfered from your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been transfered from your account to %s account, Your new balance is: %f", amount,accountNo, newBalance);
}
}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}

//Fixed Deposit Account Transfer
void  displayFixedDepositAccountTransfer(){
printf("Enter account no you want to transfer into:\n");
scanf("%s", accountNo);
printf("\nEnter the amount of money you want transfer\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;

printf("Do you want Recipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been transfered from your account.", amount);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been transfered from your account to %s account, Your new balance is: %f", amount,accountNo, newBalance);
}
}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


//TOPUP SESSION
void displayTopUp(){
printf("Welcome to TopUP Session\n");
    printf("What Account do you want to TopUp from?\n");
printf("1-For Savings Account\n2-For Current Account\n3For Fixed Deposit Account");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displaySavingsAccountTopUp();
    break;

 case 2:
    displayCurrentAccountTopUp();
    break;

 case 3:
    displayFixedDepositAccountTopUp();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
}


//Savings Account TopUp
void displaySavingsAccountTopUp(){
 printf("Welcome to Savings Account TopUP Session\n");
    printf("What Type of TopUp do you want to Make?\n");
printf("1-For Airtime\n2-For DSTV\n3-For NEPA Bill");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displaySavingsAccountTopUpAirtime();
    break;

 case 2:
    displaySavingsAccountTopUpDSTV();
    break;

 case 3:
    displaySavingsAccountTopUpNEPABill();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
}

// Savings Account TopUp Airtime
void displaySavingsAccountTopUpAirtime(){
     printf("Welcome to TopUPAirtime Session\n");
    printf("What Type of Biller?\n");
printf("1-For MTN\n2-For GLO\n3-For AIRTEL\n4-9MOBILE");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displaySavingsAccountTopUpMTN();
    break;

 case 2:
    displaySavingsAccountTopUpGLO();
    break;

 case 3:
    displaySavingsAccountTopUpAirtel();
    break;

    case 4:
    displaySavingsAccountTopUp9Mobile();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
}

//Savings Account TopUp MTN
void displaySavingsAccountTopUpMTN(){
printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;

printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}

}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }

}

//Savings Account TopUp GLO
void displaySavingsAccountTopUpGLO(){
printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;

printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}
}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}

//Savings Account TopUp  Airtel
void displaySavingsAccountTopUpAirtel(){
printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}

//Savings Account TopUp 9Mobile
void  displaySavingsAccountTopUp9Mobile(){
printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


//Savings Account TopUp DSTV
void displaySavingsAccountTopUpDSTV(){
 printf("Welcome to TopUPDSTV Session\n");
    printf("What Type of Package?\n");
printf("1-For Family\n2-For Access\n3-For Compact\n");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displaySavingsAccountTopUpDSTVFamily();
    break;

 case 2:
    displaySavingsAccountTopUpDSTVAccess();
    break;

 case 3:
    displaySavingsAccountTopUpDSTVCompact();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
}

//Savings Account TopUp DSTV Family
void  displaySavingsAccountTopUpDSTVFamily(){
printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;

printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}
}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


//Savings Account TopUp DSTV Access
void  displaySavingsAccountTopUpDSTVAccess(){
printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


//Savings Account TopUp DSTV Compact
void  displaySavingsAccountTopUpDSTVCompact(){
printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}

//Savings Account TopUp NEPA Bill
void displaySavingsAccountTopUpNEPABill(){
 printf("Welcome to TopUP NEPA Bill Session\n");
 printf("\nEnter the Meter No\n");
scanf("%s", meterNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(savingsAccountBalance<=amount){
newBalance = savingsAccountBalance-amount;

printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Meter No for your NEPA Bill %s.", amount, meterNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Meter No for your NEPA Bill %s, Your new balance is: %f", amount,meterNo, newBalance);
}

}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


//CURRENT ACCOUNT TOPUP
void displayCurrentAccountTopUp(){
printf("Welcome to Current Account TopUP Session\n");
    printf("What Type of TopUp do you want to Make?\n");
printf("1-For Airtime\n2-For DSTV\n3-For NEPA Bill");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displayCurrentAccountTopUpAirtime();
    break;

 case 2:
    displayCurrentAccountTopUpDSTV();
    break;

 case 3:
    displayCurrentAccountTopUpNEPABill();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }

}


//Current Account TopUp Airtime
void  displayCurrentAccountTopUpAirtime(){
printf("Welcome to TopUPAirtime Session\n");
    printf("What Type of Biller?\n");
printf("1-For MTN\n2-For GLO\n3-For AIRTEL\n4-9MOBILE");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displayCurrentAccountTopUpMTN();
    break;

 case 2:
    displayCurrentAccountTopUpGLO();
    break;

 case 3:
    displayCurrentAccountTopUpAirtel();
    break;

    case 4:
    displaySavingsAccountTopUp9Mobile();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
}

//Current Account TopUp MTN
void displayCurrentAccountTopUpMTN(){
printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }

}

//Current Account TopUp GLO
void displayCurrentAccountTopUpGLO(){
printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}

//Current Account TopUp Airtel
void displayCurrentAccountTopUpAirtel(){
printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}

//Current Account TopUp 9Mobile
void displayCurrentAccountTopUp9Mobile(){
printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


//Current Account TopUp DSTV
void displayCurrentAccountTopUpDSTV(){
printf("Welcome to TopUPDSTV Session\n");
    printf("What Type of Package?\n");
printf("1-For Family\n2-For Access\n3-For Compact\n");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displayCurrentAccountTopUpDSTVFamily();
    break;

 case 2:
    displayCurrentAccountTopUpDSTVAccess();
    break;

 case 3:
    displayCurrentAccountTopUpDSTVCompact();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
}


//Current Account TopUp DSTV Family
void displayCurrentAccountTopUpDSTVFamily(){
printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
}


//Current Account TopUp DSTV Access
 void displayCurrentAccountTopUpDSTVAccess(){
 printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }


 //Current Account TopUp DSTV Compact
 void displayCurrentAccountTopUpDSTVCompact(){
 printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }


 //Current Account TopUp NEPA Bill
 void   displayCurrentAccountTopUpNEPABill(){

 printf("Welcome to TopUP NEPA Bill Session\n");
 printf("\nEnter the Meter No\n");
scanf("%s", meterNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(currentAccountBalance<=amount){
newBalance = currentAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }


// FIXED DEPOSIT ACCOUNT TOP UP SESSION
 void displayFixedDepositAccountTopUp(){
 printf("Welcome to Fixed Deposit Account TopUP Session\n");
    printf("What Type of TopUp do you want to Make?\n");
printf("1-For Airtime\n2-For DSTV\n3-For NEPA Bill");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displayFixedDepositAccountTopUpAirtime();
    break;

 case 2:
    displayFixedDepositAccountTopUpDSTV();
    break;

 case 3:
    displayFixedDepositAccountTopUpNEPABill();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
 }


 //Fixed Deposit Account TopUp Airtime
 void displayFixedDepositAccountTopUpAirtime(){
 printf("Welcome to TopUP Airtime Session\n");
    printf("What Type of Biller?\n");
printf("1-For MTN\n2-For GLO\n3-For AIRTEL\n4-9MOBILE");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displayFixedDepositAccountTopUpMTN();
    break;

 case 2:
    displayFixedDepositAccountTopUpGLO();
    break;

 case 3:
    displayFixedDepositAccountTopUpAirtel();
    break;

    case 4:
    displayFixedDepositAccountTopUp9Mobile();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
 }


 // Fixed Deposit Account TopUp MTN
 void  displayFixedDepositAccountTopUpMTN(){
 printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }


 //Fixed Deposit Account TopUp GLO
 void displayFixedDepositAccountTopUpGLO(){
 printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }


 //Fixed Deposit Account TopUp Airtel
 void displayFixedDepositAccountTopUpAirtel(){
 printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }



//Fixed Deposit Account TopUp 9Mobile
 void displayFixedDepositAccountTopUp9Mobile(){
 printf("Enter Phone no you want to buy airtime into:\n");
scanf("%s", phoneNo);
printf("\nEnter the amount of airtime you want buy\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for airtime to this phone no %s.", amount, phoneNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for airtime to this phone no %s, Your new balance is: %f", amount,phoneNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }


 //Fixed Deposit Account TopUp DSTV
 void displayFixedDepositAccountTopUpDSTV(){
 printf("Welcome to TopUPDSTV Session\n");
    printf("What Type of Package?\n");
printf("1-For Family\n2-For Access\n3-For Compact\n");
       scanf("%d",&choose);
     switch(choose){
 case 1:
    displayFixedDepositAccountTopUpDSTVFamily();
    break;

 case 2:
    displayFixedDepositAccountTopUpDSTVAccess();
    break;

 case 3:
    displayFixedDepositAccountTopUpDSTVCompact();
    break;

    default:printf("Invalid input");
    break;

    printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
     }
 }



 // Fixed Deposit Account TopUp DSTV Family
 void displayFixedDepositAccountTopUpDSTVFamily(){
 printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }


 // Fixed Deposit Account TopUp DSTV Access
 void displayFixedDepositAccountTopUpDSTVAccess(){
 printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }



 // Fixed Deposit Account TopUp DSTV Compact
 void displayFixedDepositAccountTopUpDSTVCompact(){
 printf("Enter Decoder no you want to use to TopUP:\n");
scanf("%s", decoderNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Decoder No %s.", amount, decoderNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Decoder No %s, Your new balance is: %f", amount,decoderNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }

 //Fixed Deposit Account TopUp NEPA Bill
 void    displayFixedDepositAccountTopUpNEPABill(){

 printf("Welcome to TopUP NEPA Bill Session\n");
 printf("\nEnter the Meter No\n");
scanf("%s", meterNo);
printf("\nEnter the amount you want to TopUP\n");
scanf("%f", &amount);
if(fixedDepositAccountBalance<=amount){
newBalance = fixedDepositAccountBalance-amount;
printf("Do you want Receipt for this transaction? \n 1-For Yes\n 2-For No");
scanf("%d", &choose);
if(choose==1){
   file = fopen("C:\\Users\\ADIA ICT CENTER\\Documents\\Batch_A_C_Programming_Project\\DepositReceipt.txt", "w");
   if(file == NULL){
    printf("Erorr!!!");
    exit(1);
   }
else{
fprintf(file,"*****GTBANK RECEIPT*****\n");
fprintf(file, "\n %f has been debited on your account for TopU to this Meter No for your NEPA Bill %s.", amount, meterNo);
fprintf(file, "\nYour new balance is: %f", newBalance);
fprintf(file, "\n Thank You for Banking with us!!!");

   fclose(file);
}
}

else{
printf("\n %f has been debited on your account for TopU to this Meter No for your NEPA Bill %s, Your new balance is: %f", amount,meterNo, newBalance);
}}
else{
    printf("Insufficient Fund!!!");
}

printf("\nDo you want to make another Transaction?\n");
      printf("1-For Yes\n2-For No\n");
      scanf("%d",&choose);
      if(choose==1){
        displayLogin();
      }

      else{
        printf("Thank you for banking with us!!!\n");
      }
 }
