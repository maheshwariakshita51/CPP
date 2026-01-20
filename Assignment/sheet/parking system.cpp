#include<bits/stdc++.h>
using namespace std;
int vehiclescount(string type[] , int vehicles , string vechilename)
{
    int count=0;
    for(int i=0 ; i<vehicles ; i++)
    {
        if(type[i]==vechilename)
        {
            count++;
        }
    }
    return count;
}
float revenuemodel(string type[],int vehicles)
{
    int carcount=0 , bikecount=0 , truckcount=0;
    
    carcount = vehiclescount(type,vehicles,"car");
    bikecount = vehiclescount(type,vehicles,"bike");
    truckcount = vehiclescount(type,vehicles,"truck");
    int price = bikecount*20+carcount*50+truckcount*100;
    if(price>500)
    {
        return (price - (price*10.0)/100.0);
    }
    else
    {
        return price;
    }
}
int main()
{
    int vehicles;
    cout<<"enter the no. of vehicles: \n";
    cin>>vehicles;
    if(vehicles>10)
    {
        cout<<"OOPS!  full parking";
        return 0;
    }
    string type[vehicles] = {"car","bike","truck","car","bike","truck","car","bike","truck"};
    float cost = revenuemodel(type,vehicles);
    cout<<"the price is : "<<cost;
}

// *****************************************************

#include<bits/stdc++.h>
using namespace std;

int revenueModel(string type[],int hours[],int vehicles)
{
  int price =0;
  for(int i=0;i<vehicles;i++)
  {
      if(type[i]=="car")
      {
          price=price+(50*hours[i]);
      }
      else if(type[i]=="bike")
      {
          price=price+(20*hours[i]);
      }
      else if(type[i] =="truck")
      {
          price=price+(100*hours[i]);
      }
  }
  return price;
}
int main()
{
    int vehicles;
    cout<<"Enter the number of vehicles\n";
    cin>>vehicles;
     if(vehicles>10)
    {
        cout<<"Full Parking-No more space available";
        return 0;
    }
    string type[vehicles]={"car","bike","truck","car","bike","truck","car","bike","truck"};
    int hours[vehicles]={2,3,2,1,3,1,2,2,2};
    float cost = revenueModel(type,hours,vehicles);
    cout<<"The price is :"<<cost;
}