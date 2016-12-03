#ifndef DISPENSER_H
#define DISPENSER_H
#include <QString>
#include <item.h>

class Dispenser
{
public:
    Dispenser(std::string choice, int drinkID);
    ~Dispenser();
    bool checkDrink(std::string choice);
    bool checkAlcohol();
    dispenseDrink();
    bool checkPrice(double money);
    bool creditCardProcess();
    double getPriceChange(double money);

private:
    Item drink;
};

#endif // DISPENSER_H
