#include "dispenser.h"
#include "selector.h"
#include "item.h"
#include <cstdlib>
#include <iostream>
#include <windows.h>

Dispenser::Dispenser(std::string choice, int drinkID)
{
    if (checkDrink(choice) == true){
        new Item;
        drink.setup(drinkID);
    }
    else{
        //Do Nothing
    }
}

Dispenser::~Dispenser()
{
}

bool Dispenser::checkDrink(std::string choice)
{
    if(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12" || choice == "13" || choice == "14"|| choice == "15" || choice == "16" || choice == "17" || choice == "18"){
        return true;}
    else {
        return false;}
}

bool Dispenser::checkAlcohol()
{
    return drink.getAlcohol();
}

Dispenser::dispenseDrink()
{
    system("cls");
    std::cout << "Please take your " << drink.getProductName();
    Sleep(5000);
    system("cls");
    std::cout << "THANK YOU FOR CHOOSING THE ULTIMATE DRINK DISPENSING MACHINE!!!!";
    Sleep(5000);
    drink.~Item();
    return 0;
}

bool Dispenser::checkPrice(double money)
{
    bool result = true;
    if(money < drink.getPrice()){
        result = false;}
    return result;
}

bool Dispenser::creditCardProcess()
{
    bool result = false;
    char entry;
    std::system("cls");
    std::cout << "Please swipe your credit card(ENTER P for PASS or F for FAIL)" << std::endl;
    std::cin >> entry;
    if(entry == 'P'){//NEED Interface Here TO PROCESS CREDIT CARD
        std::system("cls");
        std::cout << "PROCESSING";
        Sleep(5000);
        result = true;}
    return result;
}

double Dispenser::getPriceChange(double money)
{
    money = money - drink.getPrice();
    return money;
}
