
#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;

int main()
{ char ch,ch1; int w,t;
float total=0.0;
  try
{
cout<<"\n\t\t WELCOME TO ELECTRIC BILL CALCULATOR \n";
cout<<"\n\t\t \t\t\t by  Shivam  &  company \n\n\n";
cout<<"\n\t Current rate of electricity  by  M.P.E.B  is  8 RS/unit";
cout<<"\n\n press enter to calculate your bill.......";
getch();
cout<<"\n Enter the details  of appliances used  \n";
cout<<"\n select ***   NUMBER   *** consecutively  for your  devices \n";


do
    {
cout<<"\t\n 1.FAN\n";
cout<<"\t\n 2.TUBE_LIGHT\n";
cout<<"\t\n 3.LED BULB\n";
cout<<"\t\n 4.COMFORT APPLIANCES (like AC,cooler,geyser,etc)\n";
cout<<"\t\n 5.ENTERTAINMENT APP. (like tv,home theatre,etc )\n";
cout<<"\t\n 6.Supporting  equipments(like washing machine,mixer,etc )\n";
cout<<"\t\n 7.Others\n";
cout<<"\t\n 8.PRESS OTHER TO EXIT SUCCESSFULLY...\n";
cin>>ch;

switch(ch)
{

 case '1':
             cout<<"\n\t fan selected ...\n";
            cout<<"\n\t Enter wattage of fan ...\n";
            cin>>w;
            cout<<"\n\t Enter used time per day ( in hours )\n";
            cin>>t;
        total= total + ((w*t*30*8)/1000.0);

    break;

    case '2':  //int w,t;
    cout<<"\n\t TUBE LIGHT  selected ...\n";
            cout<<"\n\t Enter wattage of tube light ...\n";
            cin>>w;
            cout<<"\n\t Enter used time per day ( in hours )\n";
            cin>>t;
        total= total + ((w*t*30*8)/1000.0);

      break;

case '3' :
    // int w,t;
    cout<<"\n\t LED BULB selected ...";
            cout<<"\n\t Enter wattage of LIGHT ...\n";
            cin>>w;
            cout<<"\n\t Enter used time per day ( in hours )\n";
            cin>>t;
        total= total + ((w*t*30*8)/1000.0);

    break;

    case '4':
    //int w,t;
    cout<<"\n\t COMFORT APPLIANCES  selected ...\n";
            cout<<"\n\t Enter wattage of APPLIANCE ...\n";
            cin>>w;
            cout<<"\n\t Enter used time per day ( in hours )\n";
            cin>>t;
        total= total + ((w*t*30*8)/1000.0);

    break;

  case '5':
     //int w,t;
    cout<<"\n\t entertainment appliance  selected ...\n";
            cout<<"\n\t Enter wattage of appliance ...\n";
            cin>>w;
            cout<<"\n\t Enter used time per day ( in hours )\n";
            cin>>t;
        total= total + ((w*t*30*8)/1000.0);

      break;

case '6':
     //int w,t;
    cout<<"\n\t Supporting equipments selected ...\n";
            cout<<"\n\t Enter wattage of equipments ...\n";
            cin>>w;
            cout<<"\n\t Enter used time per day ( in hours )\n";
            cin>>t;
        total= total + ((w*t*30*8)/1000.0);

    break;
case '7':
         cout<<"\n\t OTHER APPLIANCE SELECTED ...\n";
            cout<<"\n\t Enter wattage of  APPLIANCE...\n";
            cin>>w;
            cout<<"\n\t Enter used time per day ( in hours )\n";
            cin>>t;
        total= total + ((w*t*30*8)/1000.0);
        break;
 default : cout<<"\n\n THANKS ..VISIT AGAIN . EXIT SUCCESSFULY..press n to leave  \n";


}  // end of switch




cout<<"\n Want to enter more (y/n)\n";
cin>>ch1;
if(ch=='y')
    cout<< "again enter the next  choice (1-8)";

}  while (ch1=='y' || ch1=='Y');

cout<<"\n monthly bill is Rs :\n"<<total;
getch();

}
catch (exception e){cout<<"\n cant process your request at current time :\n";}



return 0;

}

