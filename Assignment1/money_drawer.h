#ifndef MONEY_DRAWER_H
#define MONEY_DRAWER_H
#include<FoodItem.h>
#include<vending_machine.h>
class money_drawer
{
private:
double in_machine;
int x=10;
public :
void setin_machine(double inmac){in_machine=inmac;}
double getin_machine(){return in_machine;}

};
#endif // MONEY_DRAWER_H
