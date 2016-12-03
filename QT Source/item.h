#ifndef ITEM_H
#define ITEM_H
#include <QString>


class Item
{
public:
    Item();
    ~Item();
    setup(int id);
    int drinkId;
    double getPrice();
    bool getAlcohol();
    std::string getProductName();

private:
    double price;
    bool isAlcoholic;
    std::string productName;
};

#endif // ITEM_H
