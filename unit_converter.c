#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//Structures for UNITS

struct temp
{
     float kel;
     float cel;
     float far;
     float k;
}tr;

struct len
{
     float cm;
     float m;
     float km;
     float mile;
     float con;
}ln;

struct time
{
     float hr;
     float sec;
     float min;
     float tim;
}tm;

struct mass
{
     float mas;
     float val;
}ma;

struct currency
{
     float rup;
     float dollar;
     float pound;
     float curr;
}cr;



//Declaring FUNCTIONS

void length();
void time();
void mass();
void temperature();
void currency();

void display();
void display2();
void display3();
void display4();
void display5();


//Making File Pointer

FILE *fp;


int main()
{
     int ch;

     //system("COLOUR E0")

     while(1)
     {
          //cls command is used to clear the entry
         // system("cls");

          printf("\n############     UNIT CONVERTER     ############\n\n");
          printf("\n************     CONVERSIONS     ************\n");
          printf("\nSelect The Option from given Below : \n");
          printf("\nPRESS [1] for Length Conversion\n");
          printf("\nPRESS [2] for Temperature Conversion\n");
          printf("\nPRESS [3] for Time Conversion\n");                         
          printf("\nPRESS [4] for Mass Conversion\n\n");
          printf("\nPRESS [10] for Currency Conversion\n\n");



          printf("\n************     HISTORY     ************\n");

          printf("\nPRESS [5] to Check History of Length Conversion\n");
          printf("\nPRESS [6] to Check History of Temperature Conversion\n");
          printf("\nPRESS [7] to Check History of Time Conversion\n");
          printf("\nPRESS [8] to Check History of Mass Conversion\n");
          printf("\nPRESS [9] to Check History of Currency Conversion\n");
          printf("\nPRESS [0] to EXIT\n");

          printf("\nENTER your Choice : \n");
          scanf("%d",&ch);

         switch(ch)
         {
               case 0 : printf("\n*****\tTHANK YOU FOR USING UNIT CONVERTER\t*****\n");
                         exit(0);

               case 1: 
                         length();
                         break;

               case 2 : 
                         temperature();
                         break;

              case 3 : 
                         time();
                         break;

               case 4 : 
                         mass();
                         break;

               case 5 : 
                         display();
                         break;

               case 6 : 
                         display2();
                         break;

               case 7 : 
                         display3();
                         break;

               case 8 : 
                         display4();
                         break;

               case 9 : 
                         display5();
                         break;

               case 10 : 
                         currency();
                         break;

               default : printf("\nINVALID CHOICE\n");

               
         }

          getch();

     }

}
     
     void length()
     {
          printf("\n*******    LENGTH CONVERTER    *******\n");
          int b;
          float a = 0 , n = 0 ;

          printf("\nPRESS [1]  for CM to M\n");
          printf("\nPRESS [2]  for CM to KM\n");
          printf("\nPRESS [3]  for CM to MILES\n");
          printf("\nPRESS [4]  for M to CM\n");
          printf("\nPRESS [5]  for M to KM\n");
          printf("\nPRESS [6]  for M to MILES\n");
          printf("\nPRESS [7]  for KM to CM\n");
          printf("\nPRESS [8]  for KM to M\n");
          printf("\nPRESS [9]  for KM to MILES\n");
          printf("\nPRESS [10] for MILES to CM\n");
          printf("\nPRESS [11] for MILES to M\n");
          printf("\nPRESS [12] for MILES to KM\n");

          printf("\nENTER Your Choice : \n");
          scanf("%d",&b);

          fp = fopen("student3.txt","ab");

          switch(b)
          {
               case 1 : a = pow(10,2);
               printf("\nEnter the cm value : \n");
               scanf("%f",&ln.cm);
               if(ln.cm<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.cm) / a;
               printf("\nYour Value is %f m\n",ln.con);}
               break;

               case 2 : a = (10,5);
               printf("\nEnter cm Value : \n");
               scanf("%f",&ln.cm);
               if(ln.cm<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.cm) / a;
               printf("/nYour Value is %f km\n",ln.con);}
               break;

               case 3:
               printf("\nEnter cm Value : \n");
               scanf("%f",&ln.cm);
               if(ln.cm<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = ((ln.cm) / 160934);
               printf("\nYour Value is %f mile\n",ln.con);}
               break;

               case 4 : 
               printf("\nEnter m Value : \n");
               scanf("%f",&ln.m);
               if(ln.m<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.m) * 100;
               printf("\nYour Value is %f cm\n",ln.con);}
               break;
               
               
               case 5 : a = (10,3);
               printf("\nEnter m Value : \n");
               scanf("%f",&ln.m);
               if(ln.m<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.m) / a;
               printf("\nYour Value is %f km\n",ln.con);}
               break;
     

               case 6 : 
               printf("\nEnter m Value : \n");
               scanf("%f",&ln.m);
               if(ln.m<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.m) * 0.000621;
               printf("\nYour Value is %f mile\n",ln.con);}
               break;


               case 7 : 
               printf("\nEnter km Value : \n");
               scanf("%f",&ln.km);
               if(ln.km<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.km) / 100000;
               printf("\nYour Value is %f cm\n",ln.con);}
               break;

               case 8 :
               printf("\nEnter km Value : \n");
               scanf("%f",&ln.km);
               if(ln.km<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.km) * 1000;
                printf("\nYour Value is %f m\n",ln.con);}
               break;
               
               case 9 : 
               printf("\nEnter km Value : \n");
               scanf("%f",&ln.km);
               if(ln.km<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = ((ln.km) * 0.621);
               printf("\nYour Value is %f miles\n",ln.con);}
               break;

               case 10 : 
               printf("\nEnter miles Value : \n");
               scanf("%f",&ln.mile);
               if(ln.mile<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.mile) * 160934;
               printf("\nYour Value is %f cm\n",ln.con);}
               break;

               case 11 : 
               printf("\nEnter miles Value : \n");
               scanf("%f",&ln.mile);
               if(ln.mile<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.mile) * 1609;
               printf("\nYour Value is %f m\n",ln.con);}
               break;

               case 12 : 
               printf("\nEnter miles Value : \n");
               scanf("%f",&ln.mile);
               if(ln.mile<0)
               printf("Invalid credentials.....\n");
               else{
               ln.con = (ln.mile) * 1.609;
               printf("\nYour Value is %f km\n",ln.con);}
               break;

               
               default : printf("\nINVALID CHOICE\n");
               break; 
               
          }

          fwrite(&ln,sizeof(ln),1,fp);
          printf("\n***   HISTORY SAVED   ***\n");
          printf("\n***   PRESS ANY KEY TO CONTINUE   ***\n");

          fclose(fp);

     }    

void display()
{
     printf("\n***   LENGTH HISTORY   ***\n");
     printf("\n Previosly Calculated Values = \n");

     fp = fopen("student3.txt","rb");

     while(fread(&ln,sizeof(ln),1,fp) == 1)
     {
          printf("\n%.10f\n",ln.con);
     }
     fclose(fp);
}

void temperature()
{
     printf("\n********** TEMPERATURE CONVERTER **********\n");
     int ch1;

     printf("\nPRESS [13] FOR KELVIN TO CELCIUS\n");
     printf("\nPRESS [14] FOR KELVIN TO FARANHEIT\n");
     printf("\nPRESS [15] FOR CELCIUS TO KELVIN\n");
     printf("\nPRESS [16] FOR CELCIUS TO FARANHEIT\n");
     printf("\nPRESS [17] FOR FARANHEIT TO KELVIN\n");
     printf("\nPRESS [18] FOR FARANHEIT TO CELCIUS\n");
     printf("\nENTER YOUR CHOICE : \n");

     fflush(stdin);


     scanf("%d",&ch1);


     fp = fopen("student2.txt","ab");

     switch(ch1)
     {
          case 13: printf("\nEnter the value in kelvin : \n");
                   fflush(stdin);
                   scanf("%f",&tr.kel);
                   tr.k = (tr.kel-273.15);
                   printf("\nValue is = %.2f C\n",tr.k);
                   break;
          case 14: printf("\nEnter the value in kelvin : \n");
                   fflush(stdin);
                   scanf("%f",&tr.kel);
                   tr.k = (tr.kel-273.15)*9/5+32;
                   printf("\nValue is = %.2f F\n",tr.k);
                   break;
          case 15: printf("\nEnter the value in Celcius : \n");
                   fflush(stdin);
                   scanf("%f",&tr.cel);
                   tr.k = (tr.cel+273.15);
                   printf("\nValue is = %.2f K\n",tr.k);
                   break;
          case 16: printf("\nEnter the value in Celcius : \n");
                   fflush(stdin);
                   scanf("%f",&tr.kel);
                   tr.k = ((tr.cel*9/5)+32);
                   printf("\nValue is = %.2f F\n",tr.k);
                   break;
          case 17: printf("\nEnter the value in Farenheit : \n");
                   fflush(stdin);
                   scanf("%f",&tr.far);
                   tr.k = ((tr.far-32)*5/9+273.15);
                   printf("\nValue is = %.2f K\n",tr.k);
                   break;
          case 18: printf("\nEnter the value in Farenheit : \n");
                   fflush(stdin);
                   scanf("%f",&tr.far);
                   tr.k = (tr.far-32)*5/9;
                   printf("\nValue is = %.2f C\n",tr.k);
                   break;
          default: printf("\nInvalid choice......\n");
                    break;


     }

          fwrite(&tr,sizeof(tr),1,fp);
          printf("\n***   HISTORY SAVED   ***\n");
          printf("\n***   PRESS ANY KEY TO CONTINUE   ***\n");

          fclose(fp);

}



void display2()
{
     printf("\n***   TEMPERATURE HISTORY   ***\n");
     printf("\n Previosly Calculated Values = \n");

     fp = fopen("student2.txt","rb");

     while(fread(&tr,sizeof(tr),1,fp) == 1)
     {
          printf("\n%.10f\n",tr.k);
     }
     fclose(fp);
}


void time()
{
     printf("\n********** TIME CONVERTER **********\n");
     int ch2;

     printf("\nPRESS [19] FOR MINUTES TO SECONDS\n");
     printf("\nPRESS [20] FOR MINUTES TO HOUR\n");
     printf("\nPRESS [21] FOR HOUR TO SECONDS\n");
     printf("\nPRESS [22] FOR HOUR TO MINUTES\n");
     printf("\nPRESS [23] FOR SECONDS TO MINUTES\n");
     printf("\nPRESS [24] FOR SECONDS TO HOUR\n");
     printf("\nENTER YOUR CHOICE : \n");

     fflush(stdin);


     scanf("%d",&ch2);


     fp = fopen("tim.txt","ab");

     switch(ch2)
     {
          case 19: printf("\nEnter the value in minutes : \n");
                   fflush(stdin);
                   scanf("%f",&tm.min);
                   if(tm.min<0)
                   printf("Invalid credentials.....\n");
                   else{
                   tm.tim = ((tm.min)*60);
                   printf("\nValue is = %.6f sec\n",tm.tim);}
                   break;

          case 20: printf("\nEnter the value in minutes : \n");
                   fflush(stdin);
                   scanf("%f",&tm.min);
                   if(tm.min<0)
                   printf("Invalid credentials.....\n");
                   else{
                   tm.tim = ((tm.min)/60);
                   printf("\nValue is = %.6f Hr\n",tm.tim);}
                   break;

          case 21: printf("\nEnter the value in Hours : \n");
                   fflush(stdin);
                   scanf("%f",&tm.hr);
                   if(tm.hr<0)
                   printf("Invalid credentials.....\n");
                   else{
                   tm.tim = ((tm.hr)*3600);
                   printf("\nValue is = %.6f sec\n",tm.tim);}
                   break;

          case 22: printf("\nEnter the value in Hours : \n");
                   fflush(stdin);
                   scanf("%f",&tm.hr);
                   if(tm.hr<0)
                   printf("Invalid credentials.....\n");
                   else{
                   tm.tim = ((tm.hr)*60);
                   printf("\nValue is = %.6f min\n",tm.min);}
                   break;

          case 23: printf("\nEnter the value in Seconds: \n");
                   fflush(stdin);
                   scanf("%f",&tm.sec);
                   if(tm.sec<0)
                   printf("Invalid credentials.....\n");
                   else{
                   tm.tim = ((tm.sec)/60);
                   printf("\nValue is = %.6f min\n",tm.tim);}
                   break;

          case 24: printf("\nEnter the value in Seconds : \n");
                   fflush(stdin);
                   scanf("%f",&tm.sec);
                   if(tm.sec<0)
                   printf("Invalid credentials.....\n");
                   else{
                   tm.tim = ((tm.sec)/3600);
                   printf("\nValue is = %.6f Hr\n",tm.tim);}
                   break;

          default: printf("\nInvalid choice......\n");
                    break;


     }

          fwrite(&tm,sizeof(tm),1,fp);
          printf("\n***   HISTORY SAVED   ***\n");
          printf("\n***   PRESS ANY KEY TO CONTINUE   ***\n");

          fclose(fp);

}



void display3()
{
     printf("\n***   TIME HISTORY   ***\n");
     printf("\n Previosly Calculated Values = \n");

     fp = fopen("tim.txt","rb");

     while(fread(&tm,sizeof(tm),1,fp) == 1)
     {
          printf("\n%.2f\n",tm.tim);
     }
     fclose(fp);
}



void mass()
{
     printf("\n********** MASS CONVERTER **********\n");
     int ch3;

     printf("\nPRESS [25] FOR GRAM TO KG\n");
     printf("\nPRESS [26] FOR GRAM TO MILLIGRAM\n");
   
     printf("\nPRESS [27] FOR KG TO GRAM\n");
     printf("\nPRESS [28] FOR KG TO MILLIGRAM\n");
    
     printf("\nPRESS [29] FOR MILLIGRAM TO KG\n");
     printf("\nPRESS [30] FOR MILLIGRAM TO GRAM\n");
   
     printf("\nENTER YOUR CHOICE : \n");

     fflush(stdin);


     scanf("%d",&ch3);

     switch(ch3)
     {
          case 25: printf("\nEnter the value in gram : \n");
                   fflush(stdin);
                   scanf("%f",&ma.mas);
                   if(ma.mas<0)
                   printf("Invalid credentials.....");
                   else{
                   ma.val = ((ma.mas)/1000);
                   printf("\nValue is = %.10f kg\n",ma.val);}
                   break;

          case 26: printf("\nEnter the value in gram : \n");
                   fflush(stdin);
                   scanf("%f",&ma.mas);
                   if(ma.mas<0)
                   printf("Invalid credentials.....");
                   else{
                   ma.val = ((ma.mas)*10);
                   printf("\nValue is = %.10f mg\n",ma.val);}
                   break;

          case 27: printf("\nEnter the value in kg : \n");
                   fflush(stdin);
                   scanf("%f",&ma.mas);
                   if(ma.mas<0)
                   printf("Invalid credentials.....");
                   else{
                   ma.val = ((ma.mas)*1000);
                   printf("\nValue is = %.10f gm\n",ma.val);}
                   break;

          case 28: printf("\nEnter the value in kg : \n");
                   fflush(stdin);
                   scanf("%f",&ma.mas);
                   if(ma.mas<0)
                   printf("Invalid credentials.....");
                   else{
                   ma.val = ((ma.mas)*10000);
                   printf("\nValue is = %.10f mg\n",ma.val);}
                   break;

          case 29: printf("\nEnter the value in Milligram: \n");
                   fflush(stdin);
                   scanf("%f",&ma.mas);
                   if(ma.mas<0)
                   printf("Invalid credentials.....");
                   else{
                   ma.val = ((ma.mas)/10000);
                   printf("\nValue is = %.10f kg\n",ma.val);}
                   break;

          case 30: printf("\nEnter the value in milligram : \n");
                   fflush(stdin);
                   scanf("%f",&ma.mas);
                   if(ma.mas<0)
                   printf("Invalid credentials.....");
                   else{
                   ma.val = ((ma.mas)/10);
                   printf("\nValue is = %.10f gm\n",ma.val);}
                   break;

          default: printf("\nInvalid choice......\n");
                    break;


     }

          fwrite(&ma,sizeof(ma),1,fp);
          printf("\n***   HISTORY SAVED   ***\n");
          printf("\n***   PRESS ANY KEY TO CONTINUE   ***\n");

          fclose(fp);

}



void display4()
{
     printf("\n***   MASS HISTORY   ***\n");
     printf("\n Previosly Calculated Values = \n");

     fp = fopen("mas.txt","rb");

     while(fread(&ma,sizeof(ma),1,fp) == 1)
     {
          printf("\n%.10f\n",ma.val);
     }
     fclose(fp);
}


void currency()
{
     printf("\n********** CURRENCY CONVERTER **********\n");
     int ch4;

     printf("\nPRESS [31] FOR RUPPEE TO DOLLAR \n");
     printf("\nPRESS [32] FOR RUPPEE TO POUND\n");
     printf("\nPRESS [33] FOR DOLLAR TO RUPPEE\n");
     printf("\nPRESS [34] FOR DOLLAR TO POUND\n");
     printf("\nPRESS [35] FOR POUND TO RUPPEE\n");
     printf("\nPRESS [36] FOR POUND TO DOLLAR\n");
     printf("\nENTER YOUR CHOICE : \n");

     fflush(stdin);


     scanf("%d",&ch4);


     fp = fopen("curr.txt","ab");

     switch(ch4)
     {
          case 31: printf("\nEnter the value in Ruppee : \n");
                   fflush(stdin);
                   scanf("%f",&cr.rup);
                   if(cr.rup<0)
                   printf("Invalid credentials.....\n");
                   else{
                   cr.curr = ((cr.rup) / 82);
                   printf("\nValue is = %.6f dollar\n",cr.curr);}
                   break;

          case 32: printf("\nEnter the value in Ruppee : \n");
                   fflush(stdin);
                   scanf("%f",&cr.rup);
                   if(cr.rup<0)
                   printf("Invalid credentials.....\n");
                   else{
                   cr.curr = ((cr.rup) / 105);
                   printf("\nValue is = %.6f pound\n",cr.curr);}
                   break;

          case 33: printf("\nEnter the value in Dollar : \n");
                   fflush(stdin);
                   scanf("%f",&cr.dollar);
                   if(cr.dollar<0)
                   printf("Invalid credentials.....\n");
                   else{
                   cr.curr = ((cr.dollar)*82);
                   printf("\nValue is = %.6f Ruppees\n",cr.curr);}
                   break;

          case 34: printf("\nEnter the value in Dollar : \n");
                   fflush(stdin);
                   scanf("%f",&cr.dollar);
                   if(cr.dollar<0)
                   printf("Invalid credentials.....\n");
                   else{
                   cr.curr = ((cr.dollar) * 0.78);
                   printf("\nValue is = %.6f Pound\n",cr.curr);}
                   break;

          case 35: printf("\nEnter the value in Pound: \n");
                   fflush(stdin);
                   scanf("%f",&cr.pound);
                   if(cr.pound<0)
                   printf("Invalid credentials.....\n");
                   else{
                   cr.curr = ((cr.pound) * 105);
                   printf("\nValue is = %.6f ruppees\n",cr.curr);}
                   break;

          case 36: printf("\nEnter the value in Pound : \n");
                   fflush(stdin);
                   scanf("%f",&cr.pound);
                   if(cr.pound<0)
                   printf("Invalid credentials.....\n");
                   else{
                   cr.curr = ((cr.pound) * 1.28);
                   printf("\nValue is = %.6f Dollar\n",cr.curr);}
                   break;

          default: printf("\nInvalid choice......\n");
                    break;


     }

          fwrite(&cr,sizeof(cr),1,fp);
          printf("\n***   HISTORY SAVED   ***\n");
          printf("\n***   PRESS ANY KEY TO CONTINUE   ***\n");

          fclose(fp);

}



void display5()
{
     printf("\n***   TIME HISTORY   ***\n");
     printf("\n Previosly Calculated Values = \n");

     fp = fopen("curr.txt","rb");

     while(fread(&cr,sizeof(cr),1,fp) == 1)
     {
          printf("\n%.2f\n",cr.curr);
     }
     fclose(fp);
}

