#include<iostream>
using namespace std;

int main(){
    //Task 1: displaying the tickets options
    cout<<"Ticket Type\t\t\t\t\t\t\tCost for one day\tCost for two days";
    string tickettype[]={"One Adult     ", "one child     ", "one senior   ", "family ticket", "Group/peson"};
    double costoneday[]={200.00,120.00,160.00,600.00,150.00};
    double costtwoday[]={300.00,180.00,240.00,900.00,220.50};
    int ticketnumber = 0;
    string extatt[]={"Lion feeding    \t\t", "Penguin Feeding \t\t", "Evening Barbecue\t\t      "};
    double extcost[]={20.50,20.00,50.00};
        for (int i = 0; i < 5; i++)
        {
            cout<<endl<<tickettype[i]<<"\t\t\t\t\t\t\t\t"<<costoneday[i]<<"\t\t\t\t"<<costtwoday[i];
        }
        cout<<endl<<("\n\nExtra Attraction\t\t\t\tCost per peRs on");
        for (int i = 0; i < 3; i++)
        {
            cout<<endl<<extatt[i]<<"\t\t\t"<<extcost[i];
        }
        
    // }
    // task 1:dontd... displaying the extra attractions available
    cout<<"\n\nSelect the date for booking (1-7):";
    // task 2:contd... choose date
    cout<<endl<<"NOTE: 1 means today ..... 7 means next week day"<<endl;
    int datechoice = 0;
    while(datechoice<1 || datechoice>7){
        cout<<endl<<"Enter the date of booking(1-7): ";
        int dateChoice;
        cin>>dateChoice;
        datechoice=dateChoice;
    }
    int noofdays=0;
    while(noofdays<1 || noofdays>2){
        cout<<endl<<"Enter the number of days: ";
        int noOfDays;
        cin>>noOfDays;
        noofdays=noOfDays;
        if(datechoice==7 && noofdays==2){
            cout<<endl<<"For 7th day,two days booking not allowed";
            noofdays=0;
        }
    }
    //taking input from the user
    double adult,senior,child;
    cout<<endl<<"Enter The total adults member : ";
    cin>>adult;
    cout<<endl<<"Enter the total senior member : ";
    cin>>senior;
    cout<<endl<<"Enter the total number of child: ";
    cin>>child;
    double totaltickets=adult+child+senior;
    int lf=-1;
    int pf=-1;
    int eb=-1;
    cout<<endl<<"Total MembeRs  available for the tour: "<<totaltickets;
    while(lf>totaltickets || lf<0){
        int lf1;
        cout<<endl<<"\n\nEnter number of lion-feeding tickets,0 for none: ";
        cin>>lf1;
        lf = lf1;
    }
    while(pf>totaltickets || pf<0){
        int pf1;
        cout<<endl<<"\n\nEnter number of penguine-feeding tickets,0 for none: ";
        cin>>pf1;
        pf = pf1;
    }
    if(noofdays==2){
        while(eb>totaltickets || eb<0){
            int eb1;
            cout<<endl<<"Enter number of evening barbecue tickets,0 for none: ";
            cin>>eb1;
            eb=eb1;
        }
    }
    if(eb==-1){
        eb=0;
    }
    //Task 2: process of booking

    double family = 0;
    double total = adult+senior;
    //each family can be upto two adults or seniors  and upto 3 children
    int opt1 = total/2;
    int opt2 = child/3;
    if(opt1<opt2){
        family = opt1;
    }else{
        family = opt2;
    }
    if(family>0){
        child=child-(family*3);
        total=total-(family*2);
        if(total==0 && child>0){
            family=family-1;
            child=child+3;
        }
        double adultneeded=0;
        double lessas=family*2;
        double calc=0;
        if(child>=3){
            calc=(adult+senior)-family*2-2;
            if(calc>=0){
                adultneeded=2;
            }else{
                adultneeded=1;
            }
        }else if(child>=1){
            adultneeded=1;
        }
        while(adult>adultneeded && lessas>0){
            adult=adult-1;
            lessas=lessas-1;
        }
        while(lessas>0){
            senior=senior-1;
            lessas=lessas-1;
        }
    }
    double group = 0;
    while(child>6){
        group=group+1;
        child=child-6;
    }
    int adultneed =0 ;
    if(child>=3){
        adultneed=2;
    }else if(child>=1){
        adultneed=1;
    }
    while((adult-adultneed)>=6){
        group=group+1;
        adult=adult-6;
    }
    int seniorneeded = 0;
    if(child>0){
        if(adult<adultneed){
            seniorneeded = 1;
        }
    }
    while((senior-seniorneeded)>=6){
        senior=senior-6;
        group=group+1;
    }
    total=adult+senior-adultneed;
    if(total>=6){
        total=6;
        while((adult-adultneed)>0 && total>=0){
            adult=adult-1;
            total=total-1;
        }
        while(total>0){
            senior=senior-1;
            total=total-1;
        }
        group=group+1;
    }
    if(adult==0 && senior==0 && child>0){
        group=group+1;
        child=0;
    }

    //task 3 calculation of the ticket cost and showing the resulte
    
    if(senior==0 && adult==0 && child>0){
        family=family+1;
        child=0;
    }
    double totalsc=0;
    double totalac=0;
    //case 1 : if adult member is 0;
    if(adult==0){
        totalsc=senior+child;
        if(totalsc>=6){
            family=family+1;
            senior=senior-(6-child);
            child=0;
        }else if(senior==1 && child ==4){
            group=group+1;
            senior=0;
            child=0;
        }else if((senior==1 or senior==2) and (child>0 and child<=3)){
            family=family+1;
            senior=0;
            child=0;
        }
    }
    //case 2: when senior memeber is 0
    else if(senior==0){
        totalac=adult+child;
        if (adult==2 and child==6){
          family=family+2;
          adult=0;
          child=0;

        }else if (adult==2 and child==5){
          child=0;
          adult=1;
          group=group+1;
        }else if( totalac>6){
          cout<<endl<<("\nTotal adult count: ",totalac);
          adult=adult-(6-child);
          child=0;
          family=family+1;
        }else if (adult==1 and child==3){
          family=family+1;
          adult=0;
          child=0;
        }else if (adult==1 and (child==5 or child==4)){
          group=group+1;
          adult=0;
          child=0;
        }
    }
    //case 3:
    else if (senior>0 and adult>0){
        double totalas=senior+adult;
        if (child==0){
          if (totalas>=6){
            senior=senior-(6-adult);
            adult=0;
            group=group+1;
          }
        }
        else if ((totalas+child)==6){
          group=group+1;
          child=0;
          adult=0;
          senior=0;
        }
        else if (totalas==2 and child==6){
          family=family+2;
          child=0;
          adult=0;
          senior=0;
        }
        else if ((adult+child+senior)>6){
          double less=6;
          while(less>0 and child>0){
            child=child-1;
            less=less-1;
          }
          while(less>0 and adult>0){
            adult=adult-1;
            less=less-1;
          }
          while(less>0 and senior>0){
            senior=senior-1;
            less=less-1;
          }
          group=group+1;
          child=0;
          adult=0;
        }
    }
    //printing the tickets
    double totalcost =0;
    ticketnumber=ticketnumber+1;
    cout<<endl<<("\n\n\nSummary of Ticket");
    cout<<endl<<("===============================");
    cout<<endl<<("\nTicket Number: ")<< ticketnumber;
    cout<<endl<<("\n\nDate(s) Reserved ");
    cout<<endl<<"Total days :"<<noofdays;
    cout<<endl<<("\nAttractions: ");
    double lfcost=0;
    double pfcost=0;
    double ebcost=0;
    if(lf>0){
        lfcost=extcost[0]*noofdays*lf;
        totalcost=totalcost+lfcost;
        cout<<endl<<extatt[0]<<lf<<"\tRs "<<lfcost;
    }
    if(pf>0){
        pfcost=extcost[1]*noofdays*pf;
        totalcost=totalcost+pfcost;
        cout<<endl<<extatt[1]<<pf<<"\tRs "<<pfcost;
    }
    if(eb>0){
        ebcost=extcost[2]*noofdays*eb;
        totalcost=totalcost+ebcost;
        cout<<endl<<extatt[2]<<eb<<"   "<<"Rs "<<ebcost;
    }
    double groupcost=0;
    double familycost=0;
    double adultcost=0;
    double seniorcost=0;
    double childcost=0;
    if (noofdays==1){
        if( group>0){
            groupcost=group*costoneday[4]*6;
            cout<<endl<<"\nGroup Tickets: "<<group<<"\t\t\tRs "<<groupcost;
            totalcost=totalcost+groupcost;  
        }
        if (family>0){
            familycost=family*costoneday[3];
            cout<<endl<<"\nFamily Tickets: "<<family<<"\t\t\tRs "<<familycost;
            totalcost=totalcost+familycost;   
        }
        if (adult>0){
            adultcost=adult*costoneday[0];
            cout<<endl<<"\nAdult Tickets:  "<<adult<<"\t\t\tRs "<<adultcost;
            totalcost=totalcost+adultcost ;  
        }
        if (senior>0){
            seniorcost=senior*costoneday[2];
            cout<<endl<<"\nSenior Tickets: "<< senior<<"\t\t\tRs "<<seniorcost;
            totalcost=totalcost+seniorcost;

        }
        if (child>0){
            childcost=child*costoneday[1];
            cout<<endl<<"\nChildren Tickets: "<< child<<"\t\t\tRs "<<childcost;
            totalcost=totalcost+childcost ;
        }
    }else if (noofdays==2){
        if (group>0){
            groupcost=group*costtwoday[4]*6;
            cout<<endl<<"\nGroup Tickets: "<<group<<"\t\t\tRs "<<groupcost;
            totalcost=totalcost+groupcost;    
        }
        if (family>0){
            familycost=family*costtwoday[3];
            cout<<endl<<"\nFamily Tickets: "<<family<<"\t\t\tRs "<<familycost;
            totalcost=totalcost+familycost;  
        }
        if( adult>0){
            adultcost=adult*costtwoday[0];
            cout<<endl<<"\nAdult Tickets: "<<adult<<"\t\t\tRs "<<adultcost;
            totalcost=totalcost+adultcost;  
        }
        if (senior>0){
            seniorcost=senior*costtwoday[2];
            cout<<endl<<"\nSenior Tickets: "<< senior<<"\t\t\tRs "<<seniorcost;
            totalcost=totalcost+seniorcost;

        }
        if( child>0){
            childcost=child*costtwoday[1];
            cout<<endl<<"\nChildren Tickets: "<< child<<"\t\t\tRs "<<childcost;
            totalcost=totalcost+childcost ;
        }
    }
  cout<<endl<<"Total Cost  :\t\t\t\tRs "<<totalcost;
  cout<<endl<<"End of the program here";

return 0;
}