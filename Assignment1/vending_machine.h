#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H
#include <iostream>
#include <string>
#include <iomanip>
#include "FoodItem.h"
#include "money_drawer.h"
using namespace std;


class vending_machine
{
private:
    double coins;
   static int fives;
   static int tens;
   static int twentys;
   static int halves;
   static int quarters;
   static int ones;
    int item_number;
    double remaining;
    int in_machine;
public:

    VendingMachine();
    /**setters**/
void sethalves(int half){halves=half;}
void setquarters(int quarter){quarters=quarter;}
void setones(int one){ones=one;}
void settens(int ten){tens=ten;}
void settwentys(int twenty){twentys=twenty;}
void setfives(int five){fives=five;}
void setremaining(double remain){remaining=remain;}
void setcoins(double coinn){coins=coinn;}
int gethalves(){return halves;}
int getquarters(){return quarters;}
int getones(){return ones;}
int getfives(){return fives;}
int gettens(){return tens;}
int gettwentys(){return twentys;
if(twentys==0){cout<<"Sorry, no change"<<endl;}}
int minustwenty(){twentys-=1;}
int minustten(){tens-=1;
if(tens==0){cout<<"Sorry, no change"<<endl;}}
int minusfives(){fives-=1;
if(fives==0){cout<<"Sorry, no change"<<endl;}}
int minusones(){ones-=1;
if(ones==0){cout<<"Sorry, no change"<<endl;}}
int minushalves(){halves-=1;
if(halves==0){cout<<"Sorry, no change"<<endl;}}
int minusquarters(){quarters-=1;
if(quarters==0){cout<<"Sorry, no change"<<endl;}}
double getremaining(){return remaining;}

   double machine_money()
   {
      in_machine+=0;//put the price
   }

    void setitem_number(int item)
    {
        item_number=item;
    }

    /**getters**/
double getcoins()
    {
        return coins;
    }
    int getitem_number()
    {
        return item_number;
    }
    /**function to get the coins and check**/

    double coin()
    {vending_machine ven;
         string co;
        double sum=0.00;
        int flag=0;
        while(flag==0)
        {

            cout<<"Please deposit a coin or a bill in L.E. (1/4, 1/2, 1, 5 or 10, 20, E to end or 0 to cancel)"<<endl<<"****************************"<<endl;
              cin>>co;

            if( co=="0.25")
            {
                sum+=0.25;
                setquarters(quarters+=1);
                 cout<<"Your credit is "<<sum<<" L.E.\n";
            }
            else if( co=="0.5")
            {   sethalves(halves+=1);
                sum+=0.5;
                cout<<"Your credit is "<<sum<<" L.E.\n";
            }
            else if( co=="1")
            {ven.setones(ones+=1);
                sum+=1;
                cout<<"Your credit is "<<sum<<" L.E.\n";
            }
            else if( co=="5")
            {ven.setfives(fives+=1);
                sum+=5;
                cout<<"Your credit is "<<sum<<" L.E.\n";
            }
            else if( co=="10")
            {settens(tens+=1);
                sum+=10;
                cout<<"Your credit is "<<sum<<" L.E.\n";
            }
            else if( co=="20")
            {settwentys(twentys+=1);
                sum+=20;
                cout<<"Your credit is "<<sum<<" L.E.\n";
            }
            else if( co=="E")
            {

                coins=sum;
flag++;
            }
            else if( co=="0")
            {
                cout<<"Change = "<<sum<<endl;
                coins=sum;
                return 0;

flag ++;
            }
            else
            {
                cout<<"Enter a Valid Number \n";
                continue ;
            }
        }

}
};
void products(){
int flag=0;
char c;
int x;
    static int n=10;

        cout<<"Enter a Number from 0-9 or Press E to Exit"<<endl<<endl;

        food.showobject(inventory);
        cin>>c;
        if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='10')
        {x=c-48;
            if(0>x || 9<x)
            {
                cout<<"Please, Enter a Valid Number"<<endl<<endl;
            }
            else{
            {
            double remaining;
            double getprice;
            double getcoins;
            int getamount;
            getcoins=ven.getcoins();
            getprice=inventory[x].getprice();

                if(inventory[x].getprice()>ven.getcoins()){cout<<"Insufficient funds"<<endl<<"Please, insert more money"<<endl;}
else{remaining=getcoins-getprice;
getcoins=getcoins-getprice;
cout<<"Here is one "<<inventory[x].getname()<<" and "<<remaining<<" L.E in change"<<endl<<"**********************************"<<endl;
while(remaining!=0){
    if(remaining>=20)
    {
        remaining-=20;
        ven.minustwenty();
    }
    else if(remaining>=10)
    {
        remaining-=10;
        ven.minustten();
    }
    else if(remaining>=5)
    {
        remaining-=5;
        ven.minusfives();
    }
    else if(remaining>=1)
    {
        remaining-=1;
        ven.minusones();
    }
    else if(remaining>=0.5)
    {
        remaining-=0.5;
        ven.minushalves();
    }
    else if(remaining>=0.25)
    {
        remaining-=0.25;
        ven.minusquarters();
    }
}
getamount=inventory[x].getamount();
inventory[x].amountminus();
remaining=0;
ven.setcoins(0);

            }}
        }}
        else
        {
            if(c=='E')
            {
                cout<<"Thanks for using our Machine!"<<endl<<endl;
            }
            else
            {
                cout<<"Please enter a Valid Letter/Number"<<endl;
            }
        }
}
#endif // VENDING_MACHINE_H
