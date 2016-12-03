#include "item.h"

Item::Item()
{
    price = 0.00;
    isAlcoholic = false;
    productName = "";
}

Item::~Item()
{
    price = 0.00;
    isAlcoholic = false;
    productName = "";
}

Item::setup(int id)
{
    drinkId = id;
    switch (id)
    {
    case 1 :
        price = 1.00;
        isAlcoholic = false;
        productName = "Mt Dew 12oz";
        break;
    case 2 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Mt Dew 20oz";
        break;
    case 3 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Diet Mt Dew 20oz";
        break;
    case 4 :
        price = 1.00;
        isAlcoholic = false;
        productName = "Pepsi 12oz";
        break;
    case 5 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Pepsi 20oz";
        break;
    case 6 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Diet Pepsi 20oz";
        break;
    case 7 :
        price = 1.00;
        isAlcoholic = false;
        productName = "Sprite 12oz";
        break;
    case 8 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Sprite 20oz";
        break;
    case 9 :
        price = 1.00;
        isAlcoholic = false;
        productName = "Dr. Pepper 12oz";
        break;
    case 10 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Dr. Pepper 20oz";
        break;
    case 11 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Diet Dr. Pepper 20oz";
        break;
    case 12 :
        price = 1.00;
        isAlcoholic = false;
        productName = "DaSani 20oz";
        break;
    case 13 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Lipton 16oz";
        break;
    case 14 :
        price = 1.50;
        isAlcoholic = false;
        productName = "Starbucks 12oz";
        break;
    case 15 :
        price = 2.00;
        isAlcoholic = false;
        productName = "Red Bull 8oz";
        break;
    case 16 :
        price = 2.00;
        isAlcoholic = true;
        productName = "Coors Light 16oz";
        break;
    case 17 :
        price = 2.00;
        isAlcoholic = true;
        productName = "Coors 16oz";
        break;
    case 18 :
        price = 2.00;
        isAlcoholic = true;
        productName = "Hydra Immortal 12oz";
        break;
    }
}

double Item::getPrice()
{
    return price;
}

bool Item::getAlcohol()
{
    return isAlcoholic;
}

std::string Item::getProductName()
{
    return productName;
}
