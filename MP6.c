/*Roll no. 14, 15, 16 
Sub - Parking Management System*/


//header files
#include <stdio.h>


//structure declarations
struct floor_entry{
	char vehicle_name[20];
	char vehicle_no[20];
	char name[30];
  long int callingno;
	float duration;
	float total_rent;
};


			
int main()
{

//variable declaration
char date[20];
int u_input,u_input2,u_input3,u_input4,u_input5;
int g=0,f=0;
float ground_amount=0,first_amount=0;
float total_amount=0;
int total_count=0;
struct floor_entry ground[30];
struct floor_entry first[50];
float ground_rent=100;
float first_rent=50;
int floor,slot,sl,i;
int del;


printf("\t   || PARK CAPSULE ||\n\n");
printf("\t\tWELCOME\n");
printf("\t\t  TO\n");
printf("\tTHE PARKING MANAGEMENT\n\n");

printf("Date-");
scanf("%s",date);

while(1)
{
	
main_menu:


printf("***********************************************\n");

printf("Main Menu :\n");
printf(">> Press 1 for 4_Wheeler Parking\n");
printf(">> Press 2 for 2_Wheeler Parking\n");
printf(">> Press 3 to Show the record of any slot\n");
printf(">> Press 4 to Print All Slots Record\n");
printf(">> Press 5 to Show the Complete Day Record\n");
printf(">> Press 6 to Delete the Record\n\n");

printf("***********************************************\n\n");


//scan the selection
scanf("%d", &u_input);



//if selection is 1
if (u_input==1)
{
    if(g<30)
    {
         
        //for filling the entry
         printf("***********************************************\n");
         printf("Ground Floor - Slot No - %d\n",g+1);
         printf("Vehicle Name : ");
        scanf("%s", ground[g].vehicle_name);
         printf("Vehicle Number : ");
         scanf("%s", ground[g].vehicle_no);
         printf("Customer Name : ");
         scanf("%s", ground[g].name);
         printf("Customer calling no. : ");
         scanf("%ld", &ground[g].callingno);
         printf("Parking duration in hours :");
         scanf("%f",&ground[g].duration);
         
         ground[g].total_rent=ground[g].duration*ground_rent;
         
         printf("Total Rent : %.2fRs\n",ground[g].total_rent);
         
       printf("***********************************************\n\n");  
       
   total_amount = total_amount + ground[g].total_rent;
    ground_amount = ground_amount + ground[g].total_rent;
      total_count++;
   
    menu:
   //for printing the receipt
   printf(">>> Press 1 to Print Receipt\n");
   printf(">>> Press 2 for Main Menu\n\n");
   
   scanf("%d",&u_input2);
   
      if(u_input2==1)
      {
      printf("\n***********************************************");	
      
	    printf("\n\t    || PARK CAPSULE ||\n\n");
	    
	    printf("Date : %s\n\n",date);
	    printf("Ground Floor - Slot No - %d\n",g+1);
        printf("Vehicle Name : %s\n", ground[g].vehicle_name);
        printf("Vehicle Number : %s\n", ground[g].vehicle_no);
        printf("Customer Name : %s\n", ground[g].name);
        printf("Customer calling no. : %ld\n",ground[g].callingno);
        printf("Parking duration in hours : %.2f\n",ground[g].duration);
        printf("Total Rent : %.2fRs\n\n",ground[g].total_rent);
        printf("\t\t\t\t***T&C apply\n");
printf("***********************************************\n\n");
      g++;
      }
      
      
      else if(u_input2==2)
      {
      g++;
  	goto main_menu;
      }
      
      
      else
      {
      g++;
      	printf("\n\nInvalid\n\n");
      	goto menu;
      }
      
    }
    
    
      else
      {
       printf("No slot available for Parking");
      }

       
    }
    
    
    //selection 2
    else if (u_input==2)
 {
    if(f<50)
    {
         printf("***********************************************\n");
         printf("1st Floor - Slot No - %d\n",f+1);
         printf("Vehicle Name : ");
        scanf("%s", first[f].vehicle_name);
         printf("Vehicle Number : ");
         scanf("%s", first[f].vehicle_no);
         printf("Customer Name : ");
         scanf("%s", first[f].name);
          printf("Customer calling no. : ");
         scanf("%ld", &first[f].callingno);
         printf("Parking duration in hours :");
         scanf("%f",&first[f].duration);
         
         first[f].total_rent=first[f].duration*first_rent;
         
         printf("Total Rent : %.2fRs\n",first[f].total_rent);
         
         
         printf("***********************************************\n\n");
         
         total_amount = total_amount + first[f].total_rent;
      first_amount = first_amount + first[f].total_rent;
      total_count++;
      
       menu2:
      printf(">>> Press 1 to Print Receipt\n");
      printf(">>> Press 2 for Main Menu\n\n");
   
   scanf("%d",&u_input2);
   
      if(u_input2==1)
      {
      printf("\n***********************************************");	
      
	    printf("\n\t    || PARK CAPSULE ||\n\n");
	    
	    printf("Date : %s\n\n",date);
	    printf("1st Floor - Slot No - %d\n",f+1);
        printf("Vehicle Name : %s\n", first[f].vehicle_name);
        printf("Vehicle Number : %s\n", first[f].vehicle_no);
        printf("Customer Name : %s\n", first[f].name);
         printf("Customer calling no. :%ld\n ",first[f].callingno);
        printf("Parking duration in hours : %.2f\n", first[f].duration);
        printf("Total Rent : %.2fRs\n\n",first[f].total_rent);
        printf("\t\t\t\t***T&C apply\n");
printf("***********************************************\n\n");
        f++;
      }
      
      else if(u_input2==2)
      {
      f++;
      	goto main_menu;
      }
      else
      {
      f++;
      	printf("\n\nInvalid\n\n");
      	goto menu2;
      }
      
      }
      else
      {
       printf("No slot available for Parking");
      }
       
    }
    
    
     //selection 3
   else if (u_input==3)
    {
      	floor:
      	
      	//floor selection
          printf("\n***********************************************\n");	
          printf(">>press 1 for ground floor \n>>press 2 for 1st floor \n>>press 3 for Main Menu\n");
          printf("***********************************************\n");	
          
         scanf("%d",&floor);
         
         
          if(floor==1)
          {
          	ground_floor_slots:
          	//slot selection
             	printf("\nEnter Slot no : ");
          		scanf("%d",&slot);
          		sl=slot-1;
          		if(slot<=g)
          		{
          		  printf("\n***********************************************");	
        printf("\n\t    || PARK CAPSULE ||\n\n");
	    printf("Ground Floor - Slot No - %d\n",slot);
        printf("Vehicle Name : %s\n", ground[sl].vehicle_name);
        printf("Vehicle Number : %s\n", ground[sl].vehicle_no);
        printf("Customer Name : %s\n", ground[sl].name);
         printf("Customer calling no. : %ld\n",ground[sl].callingno);
        printf("Parking duration in hours : %.2f\n",ground[sl].duration);
        printf("Total Rent : %.2fRs\n\n",ground[sl].total_rent);
printf("***********************************************\n\n");
 
          
          menu3:		 
          		 printf("\n>>press 1 to print receipt\n>>press 2 to check another slot of same floor\n>>press 3 to check slot of another floor\n>>press 4 for main menu\n");
        
        scanf("%d",&u_input3);
       
         switch(u_input3)
        {
        	case 1:
        printf("\n***********************************************");	
      
	     printf("\n\t    || PARK CAPSULE ||\n\n");
	    
	    printf("Date : %s\n\n",date);
	    printf("Ground Floor - Slot No - %d\n",slot);
        printf("Vehicle Name : %s\n", ground[sl].vehicle_name);
        printf("Vehicle Number : %s\n", ground[sl].vehicle_no);
        printf("Customer Name : %s\n", ground[sl].name);
         printf("Customer calling no. :%ld\n ",ground[sl].callingno);
        printf("Parking duration in hours : %.2f\n",ground[sl].duration);
        printf("Total Rent : %.2fRs\n\n",ground[sl].total_rent);
        printf("\t\t\t\t***T&C apply\n");
printf("***********************************************\n");
      goto menu3;
        break;
 
          
          case 2:
          goto ground_floor_slots;
          break;
          
          
          case 3:
          goto floor;
          break;
          
          case 4:
          goto main_menu;
          break;
          
          default:
          printf("\n Invalid");
          goto menu3;
          break;
        }
    }
    else
    {
 	printf("\nEmpty\n");
    goto menu3;
    }
        
}    
   
     
         else if(floor==2)
          {
          	first_floor_slots:
          	//slot selection
             	printf("\nEnter Slot no : ");
          		scanf("%d",&slot);
          		sl=slot-1;
          		if(slot<=f)
          		{
          		  printf("\n***********************************************");	
        printf("\n\t    || PARK CAPSULE ||\n\n");
	    printf("First Floor - Slot No - %d\n",slot);
        printf("Vehicle Name : %s\n", first[sl].vehicle_name);
        printf("Vehicle Number : %s\n", first[sl].vehicle_no);
        printf("Customer Name : %s\n", first[sl].name);
         printf("Customer calling no. :%ld\n",first[sl].callingno);
        printf("Parking duration in hours : %.2f\n",first[sl].duration);
        printf("Total Rent : %.2fRs\n\n",first[sl].total_rent);
printf("***********************************************\n\n");
 
          
          menu4:		 
          		 printf("\n>>press 1 to print receipt\n>>press 2 to check another slot of same floor\n>>press 3 to check slot of another floor\n>>press 4 for main menu\n");
        
        scanf("%d",&u_input3);
       
         switch(u_input3)
        {
        	case 1:
        printf("\n***********************************************");	
      
	     printf("\n\t    || PARK CAPSULE ||\n\n");
	    
	    printf("Date : %s\n\n",date);
	    printf("First Floor - Slot No - %d\n",slot);
        printf("Vehicle Name : %s\n", first[sl].vehicle_name);
        printf("Vehicle Number : %s\n", first[sl].vehicle_no);
        printf("Customer Name : %s\n", first[sl].name);
         printf("Customer calling no. :%ld\n ",first[sl].callingno);
        printf("Parking duration in hours : %.2f\n",first[sl].duration);
        printf("Total Rent : %.2fRs\n\n",first[sl].total_rent);
        printf("\t\t\t\t***T&C apply\n");
printf("***********************************************\n");
      goto menu4;
        break;
 
          
          case 2:
          goto first_floor_slots;
          break;
          
          
          case 3:
          goto floor;
          break;
          
          case 4:
          goto main_menu;
          break;
          
          default:
          printf("\n Invalid");
          goto menu4;
          break;
        }
   }   
   else 
   {
        printf("\nEmpty\n");
    goto menu4;
    }
        
}  

     else if(floor==3)
          {
          	goto main_menu;
          }    

else
      {
                printf("\nWrong floor selection");
                goto floor;
                
      }      
    }
    
    

    
    else if (u_input==4)
    {
    		 floor_record:
    		 
    		 printf("\n***********************************************");	
    		 printf("\n>>press 1 to print ground floor record\n>>press 2 to print first floor record\n>>press 3 to print all Floors record\n>>press 4 for main menu\n\n");
    		  printf("***********************************************\n");
    
    	
    		 scanf("%d",&u_input4);	 
    		 
    		 
    		 //selection 1
    		 if (u_input4==1)
    		 {
    		 	printf("\n***********************************************");	
    		 	
    	    printf("\n\t    || PARK CAPSULE ||\n\n");
	    
	        printf("Date : %s\n",date);
	          printf("\nGround Floor Record : \n");
	          printf("Total vehicles parked on ground floor = %d\n",g);
         printf("Total amount collected from ground floor parking = %.2fRs\n",ground_amount);
         printf("***********************************************\n");
    		 	for(i=0;i<g;i++)
    		 	{
         
        printf("Ground Floor - Slot No - %d\n",i+1);
        printf("Vehicle Name : %s\n", ground[i].vehicle_name);
        printf("Vehicle Number : %s\n", ground[i].vehicle_no);
        printf("Customer Name : %s\n", ground[i].name);
        printf("Customer calling no. : %ld\n",ground[i].callingno);
        printf("Parking duration in hours : %.2f\n",ground[i].duration);
        printf("Total Rent : %.2fRs\n\n",ground[i].total_rent);
        
printf("***********************************************\n\n");	
    		 	}
    	
    	  menu5:	 	
     	 printf("\n***********************************************\n");	
          printf(">>press 1 to change the floor \n>>press 2 for Main Menu\n");
          printf("***********************************************\n");	
          
          scanf("%d",&u_input5);
          switch(u_input5)
          {
          	case 1:
          	goto floor_record;
          	break;
          	
          	case 2:
          	goto main_menu;
          	break;
          	
          	default:
          	goto menu5;
          	break;
          }
    		 }
    		 
    		 
    	
    	//selection 2
    		else if (u_input4==2)
    		 {
    		 	printf("\n***********************************************");	
    		 	
    	  printf("\n\t    || PARK CAPSULE ||\n\n");
          printf("Date : %s\n\n",date);
          printf("First Floor Record : \n");
	        printf("Total vehicles parked on first floor = %d\n",f);
         printf("Total amount collected from first floor parking = %.2fRs\n",first_amount);
         
         printf("***********************************************\n");
    		 	for(i=0;i<f;i++)
    		 	{
         
        printf("First Floor - Slot No - %d\n",i+1);
        printf("Vehicle Name : %s\n", first[i].vehicle_name);
        printf("Vehicle Number : %s\n", first[i].vehicle_no);
        printf("Customer Name : %s\n", first[i].name);
         printf("Customer calling no. :%ld\n",first[i].callingno);
        printf("Parking duration in hours : %.2f\n",first[i].duration);
        printf("Total Rent : %.2fRs\n\n",first[i].total_rent);
	  
        
printf("***********************************************\n\n");	
    		 	}
    	
    	  menu6:	 	
     	 printf("\n***********************************************\n");	
          printf(">>press 1 to change the floor \n>>press 2 for Main Menu\n");
          printf("***********************************************\n");	
          
          scanf("%d",&u_input5);
          switch(u_input5)
          {
          	case 1:
          	goto floor_record;
          	break;
          	
          	case 2:
          	goto main_menu;
          	break;
          	
          	default:
          	goto menu6;
          	break;
          }
    		 }
    		 
    		 
    		 //selection 3
    		 else if (u_input4==3)
    		 {
    		 		printf("\n***********************************************");	
    		 	
    	  	  printf("\n\t    || PARK CAPSULE ||\n\n");                printf("Date : %s\n\n",date);    
    	  	  printf("All Floors Record: \n");
    	  	  printf("Total vehicles parked = %d\n",total_count);      
         printf("Total amount collected = %.2fRs\n\n",total_amount);
    	  	 printf("***********************************************\n\n");
    	  	 
    	  	 printf("Ground Floor: \n");
    	  	 printf("***********************************************\n");
    	  	 	for(i=0;i<g;i++)
    		 	{
         
        printf("Slot No - %d\n",i+1);
        printf("Vehicle Name : %s\n", ground[i].vehicle_name);
        printf("Vehicle Number : %s\n", ground[i].vehicle_no);
        printf("Customer Name : %s\n", ground[i].name);
        printf("Customer calling no. : %ld\n",ground[i].callingno);
        printf("Parking duration in hours : %.2f\n",ground[i].duration);
        printf("Total Rent : %.2fRs\n\n",ground[i].total_rent);
        
printf("***********************************************\n\n");	
    		 	}
    	  	   
    	  	  printf("First Floor: \n");
    	  	 printf("***********************************************\n");
    	  	 for(i=0;i<f;i++)
    		 	{
         
        printf("Slot No - %d\n",i+1);
        printf("Vehicle Name : %s\n", first[i].vehicle_name);
        printf("Vehicle Number : %s\n", first[i].vehicle_no);
        printf("Customer Name : %s\n", first[i].name);
         printf("Customer calling no. :%ld\n",first[i].callingno);
        printf("Parking duration in hours : %.2f\n",first[i].duration);
        printf("Total Rent : %.2fRs\n\n",first[i].total_rent);
	  
        
printf("***********************************************\n\n");	
    		 	}
    		 	
    		 	  menu7:	 	
     	 printf("\n***********************************************\n");	
          printf(">>press 1 to change the floor \n>>press 2 for Main Menu\n");
          printf("***********************************************\n");	
          
          scanf("%d",&u_input5);
          switch(u_input5)
          {
          	case 1:
          	goto floor_record;
          	break;
          	
          	case 2:
          	goto main_menu;
          	break;
          	
          	default:
          	goto menu7;
          	break;
          }
 
    		 }
    		 
    		 
    	else
    	{
    		goto main_menu;
  
 		}
    			 
    }

	      else if (u_input==5)
      {
          
          printf("\n***********************************************\n");	
           printf("\n\t    || PARK CAPSULE ||\n\n");
	    
	    printf("Date : %s\n\n",date);
          printf("Total vehicles parked = %d\n",total_count);      
         printf("Total amount collected = %.2fRs\n\n",total_amount);
         printf("Total vehicles parked on ground floor = %d\n",g);
         printf("Total amount collected from ground floor parking = %.2fRs\n\n",ground_amount);
         printf("Total vehicles parked on 1st floor = %d\n",f);
         printf("Total amount collected from 1st floor parking = %.2fRs\n\n",first_amount);
          printf("***********************************************\n\n");	
          
           }
        
         
        
    
    else if (u_input==6)
    {
          printf("\n***********************************************\n");	
         printf("\tATTENTION!!\nAre you sure to delete %s data?\n",date);
         menu8:
         printf("\n>>Press 1 for Yes\n>>Press 2 for No\n");
         
        scanf("%d",&del);
        
         switch(del)
         {
     	case 1:
         total_count=0;
         total_amount=0;
         ground_amount=0;
         first_amount=0;
         g=0;
         f=0;
         printf("\n\nRecord Deleted!!\n");
         return 0;
         break;
         
         case 2:
         goto main_menu;
         break;
         
        default:
        printf("\nSelect Again");
        goto menu8;
        break;
         
         }
         
    }
    
    else 
    {
         printf("wrong selection");
         goto main_menu;
    }
         
         
}


  return 0;
}