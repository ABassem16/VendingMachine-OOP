#include <iostream>
#include<vending_machine.h>
#include<money_drawer.h>
#include<FoodItem.h>
#include<iomanip>
/* Name:Ahmed Bassem Fouad*/
/* ID:2016008*/
using namespace std;
FoodItem inventory[10]{
        FoodItem("Luxe",10,1.5),
        FoodItem("Doritos",10,3),
        FoodItem("Chipsy",10,2),
        FoodItem("Mentos",10,3.5),
        FoodItem("Mimix",10,2),
        FoodItem("Pepsi",10,5),
        FoodItem("Hohohs",10,1.5),
        FoodItem("Samba",10,2),
        FoodItem("Todo",10,1),
        FoodItem("Snickers",10,8)
    };
vending_machine ven;
money_drawer draw;
FoodItem food;
int main(){while(true){
     ven.coin();
     cout<<"You have: "<<ven.getcoins()<<endl;
    ven.products();}
    return 0;
}
