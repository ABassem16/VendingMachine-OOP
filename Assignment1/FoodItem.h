#ifndef FOODITEM_H
#include <iostream>
#define FOODITEM_H
#include <cstring>
#include<money_drawer.h>
using namespace std;

class FoodItem
{
    private:
    string name;
    int amount;
    double price;
    int chosen;
    public:
    FoodItem();
        void setname(string na){name=na;}
        void setamount(int amo){amount=amo;}
        void setprice(double pri){price=pri;}
        string getname(){return name;}
        int getamount(){return amount;}
        double getprice(){return price;}
        FoodItem(string name,int amount,double price){
        setname(name);
        setamount(amount);
        setprice(price);}
        int amountminus(){amount-=1;}
void showobject(FoodItem inventory[10]){
      cout<<"Product"<<"\t"<<"\t"<<"  Amount"<<"\t"<<"\t"<<"Price"<<endl;
        for(int m=0; m<10; m++)
    {if(inventory[m].getamount()<=0){cout<<"Sorry, This item is finished"<<endl<<"Please, Choose another item"<<endl;
        continue;}
        cout<<m<<" - "<<inventory[m].getname()<<"\t"<<"\t"<<inventory[m].getamount()<<"\t"<<"\t"<<inventory[m].getprice()<<endl;
    }}};
#endif // FOODITEM_H
