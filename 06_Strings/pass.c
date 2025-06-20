#include <stdio.h>
#include <string.h>

struct info
{
    int bus_number;
    char route[100];
    char time[50];
    int ppt;
};

int main()
{
    int i;
    struct info g[100];

    //Bus info

    g[0].bus_number=1201;
    strcpy(g[0].route, "Vadodara to Ahmedabad");
    strcpy(g[0].time, "7:00 am to 9:00 am");
    g[0].ppt=100;
    
    g[1].bus_number=1202;
    strcpy(g[1].route, "Ahmedabad to Vadodara");
    strcpy(g[1].time, "4:00 pm to 6:00 pm");
    g[1].ppt=120;
    
    g[2].bus_number=1203;
    strcpy(g[2].route, "Vadodara to Surat");
    strcpy(g[2].time, "10:00 am to 12:00 noon");
    g[2].ppt=100;
    
    g[3].bus_number=1204;
    strcpy(g[3].route, "Surat to Vadodara");
    strcpy(g[3].time, "7:00 am to 9:00 am");
    g[3].ppt=100;
    
    g[4].bus_number=1205;
    strcpy(g[4].route, "Vadodara to Gandhinagar");
    strcpy(g[4].time, "4:00 pm to 6:00 pm");
    g[4].ppt=120;
    
    g[5].bus_number=1206;
    strcpy(g[5].route, "Gandhinagar to Vadodara");
    strcpy(g[5].time, "10:00 am to 12:00 noon");
    g[5].ppt=100;
    
    g[6].bus_number=1207;
    strcpy(g[6].route, "Vadodara to Mumbai");
    strcpy(g[6].time, "7:00 am to 9:00 am");
    g[6].ppt=100;
    
    g[7].bus_number=1208;
    strcpy(g[7].route, "Mumbai to Vadodara");
    strcpy(g[7].time, "4:00 pm to 6:00 pm");
    g[7].ppt=120;
    
    g[8].bus_number=1209;
    strcpy(g[8].route, "Vadodara to Somnath");
    strcpy(g[8].time, "10:00 am to 12:00 noon");
    g[8].ppt=100;
    
    g[9].bus_number=1210;
    strcpy(g[9].route, "Somnath to Vadodara");
    strcpy(g[9].time, "7:00 am to 9:00 am");
    g[9].ppt=100;
    
    g[10].bus_number=1211;
    strcpy(g[10].route, "Vadodara to Pune");
    strcpy(g[10].time, "4:00 pm to 6:00 pm");
    g[10].ppt=120;
    
    g[11].bus_number=1212;
    strcpy(g[11].route, "Pune to Vadodara");
    strcpy(g[11].time, "10:00 am to 12:00 noon");
    g[11].ppt=100;
    
    
    printf("The List of Buses  \n \n");
    for (i=0;i<12;i++)
    {
        printf("\n Bus number : %d", g[i].bus_number);
        printf("\n Route      : %s", g[i].route);
        printf("\n Time       : %s", g[i].time);
        printf("\n Price      : %d per person", g[i].ppt);
        printf("\n");
    }
    
    int p;
    printf("\n \n Press '1' to edit the existing bus");
    printf("\n Press '2' to add New bus \n");
    printf("\n Enter (1 or 2) : ");
    scanf("%d",&p);
    
    // Edit bus info

    if(p==1)
     {
     int z;
     printf("\n\n Enter the Bus number you want to edit : ");
     scanf("%d", &z);
      
     z=z%1201;
    
      if (z>=0 && z<12)
       {
        printf("\nEnter new route: ");
        scanf(" %[^\n]s",g[z].route);
        
        printf("Enter new time: ");
        scanf(" %[^\n]s",g[z].time);
        
        printf("Enter new price per person: ");
        scanf("%d",&g[z].ppt);

        printf("\n Updated Bus Information: \n");
        printf("Bus number : %d \n", g[z].bus_number);
        printf("Route      : %s \n", g[z].route);
        printf("Time       : %s \n", g[z].time);
        printf("Price      : %d per person \n", g[z].ppt);
       }
      else
       {
        printf("Invalid choice. Please enter a valid bus number");
       }
     }
    
    else if(p==2)
     {int n,j;
      printf("\n \n Enter total number of buses you want to add :");
      scanf("%d",&n);
      
     
       for(i=0;i<n;i++)
       { j=12+i;
        printf("\nEnter Bus number : ");
        scanf("%d",&g[j].bus_number);
      
        printf("Enter route : ");
        scanf(" %[^\n]s", g[j].route);
        
        printf("Enter time : ");
        scanf(" %[^\n]s", g[j].time);
        
        printf("Price : ");
        scanf("%d",&g[j].ppt);
       }
       
      printf("\n\n YOUR ADDED BUSES ARE AS FOLLOWS : \n");
       for(i=0;i<n;i++)
       { j=12+i;
        printf("\n Bus number : %d",g[j].bus_number);
        printf("\n Route      : %s",g[j].route);
        printf("\n Time       : %s",g[j].time);
        printf("\n Price      : %d",g[j].ppt);
        printf("\n");
       }
    
     }
    
    else
     {printf("Enter valid number");}
    
    return 0;
}

/*#include <stdio.h>
#include <string.h>

struct info
{
    int bus_number;
    char route[100];
    char time[50];
    int ppt;
};

int main()
{
    int i;
    struct info g[100];

    //Bus info

    g[0].bus_number=1201;
    strcpy(g[0].route, "Vadodara to Ahmedabad");
    strcpy(g[0].time, "7:00 am to 9:00 am");
    g[0].ppt=100;
    
    g[1].bus_number=1202;
    strcpy(g[1].route, "Ahmedabad to Vadodara");
    strcpy(g[1].time, "4:00 pm to 6:00 pm");
    g[1].ppt=120;
    
    g[2].bus_number=1203;
    strcpy(g[2].route, "Vadodara to Surat");
    strcpy(g[2].time, "10:00 am to 12:00 noon");
    g[2].ppt=100;
    
    g[3].bus_number=1204;
    strcpy(g[3].route, "Surat to Vadodara");
    strcpy(g[3].time, "7:00 am to 9:00 am");
    g[3].ppt=100;
    
    g[4].bus_number=1205;
    strcpy(g[4].route, "Vadodara to Gandhinagar");
    strcpy(g[4].time, "4:00 pm to 6:00 pm");
    g[4].ppt=120;
    
    g[5].bus_number=1206;
    strcpy(g[5].route, "Gandhinagar to Vadodara");
    strcpy(g[5].time, "10:00 am to 12:00 noon");
    g[5].ppt=100;
    
    g[6].bus_number=1207;
    strcpy(g[6].route, "Vadodara to Mumbai");
    strcpy(g[6].time, "7:00 am to 9:00 am");
    g[6].ppt=100;
    
    g[7].bus_number=1208;
    strcpy(g[7].route, "Mumbai to Vadodara");
    strcpy(g[7].time, "4:00 pm to 6:00 pm");
    g[7].ppt=120;
    
    g[8].bus_number=1209;
    strcpy(g[8].route, "Vadodara to Somnath");
    strcpy(g[8].time, "10:00 am to 12:00 noon");
    g[8].ppt=100;
    
    g[9].bus_number=1210;
    strcpy(g[9].route, "Somnath to Vadodara");
    strcpy(g[9].time, "7:00 am to 9:00 am");
    g[9].ppt=100;
    
    g[10].bus_number=1211;
    strcpy(g[10].route, "Vadodara to Pune");
    strcpy(g[10].time, "4:00 pm to 6:00 pm");
    g[10].ppt=120;
    
    g[11].bus_number=1212;
    strcpy(g[11].route, "Pune to Vadodara");
    strcpy(g[11].time, "10:00 am to 12:00 noon");
    g[11].ppt=100;
    
    
    printf("The List of Buses  \n \n");
    for (i=0;i<12;i++)
    {
        printf("\n Bus number : %d", g[i].bus_number);
        printf("\n Route      : %s", g[i].route);
        printf("\n Time       : %s", g[i].time);
        printf("\n Price      : %d per person", g[i].ppt);
        printf("\n");
    }
    
    int p;
    printf("\n \n Press '1' to edit the existing bus");
    printf("\n Press '2' to add New bus \n");
    printf("\n Enter (1 or 2) : ");
    scanf("%d",&p);
    
    // Edit bus info

    if(p==1)
     {
     int choice;
     printf("\n\n Enter the Bus number you want to edit : ");
     scanf("%d", &choice);
      
     choice=choice%1200;
    
      if (choice >= 1 && choice <= 12)
       {
        printf("\nEnter new route: ");
        scanf("%[^\n]s", g[choice - 1].route);
        
        printf("Enter new time: ");
        scanf("%[^\n]s", g[choice - 1].time);
        
        printf("Enter new price per person: ");
        scanf("%d", &g[choice - 1].ppt);

        printf("\n Updated Bus Information: \n");
        printf("Bus number : %d \n", g[choice - 1].bus_number);
        printf("Route      : %s \n", g[choice - 1].route);
        printf("Time       : %s \n", g[choice - 1].time);
        printf("Price      : %d per person \n", g[choice - 1].ppt);
       }
      else
       {
        printf("Invalid choice. Please enter a valid bus number");
       }
     }
    
    else if(p==2)
     {int n,j;
      printf("\n \n Enter total number of buses you want to add :");
      scanf("%d",&n);
      
     
       for(i=0;i<n;i++)
       { j=12+i;
        printf("\nEnter Bus number : ");
        scanf("%d",&g[j].bus_number);
      
        printf("Enter route : ");
        scanf(" %[^\n]s", g[j].route);
        
        printf("Enter time : ");
        scanf(" %[^\n]s", g[j].time);
        
        printf("Price : ");
        scanf("%d",&g[j].ppt);
       }
       
      printf("\n\n YOUR ADDED BUSES ARE AS FOLLOWS : \n");
       for(i=0;i<n;i++)
       { j=12+i;
        printf("\n Bus number : %d",g[j].bus_number);
        printf("\n Route      : %s",g[j].route);
        printf("\n Time       : %s",g[j].time);
        printf("\n Price      : %d",g[j].ppt);
        printf("\n");
       }
    
     }
    
    else
     {printf("Enter valid number");}
    
    return 0;
}*/