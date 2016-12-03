#include <iostream>
#include <cstdlib>
#include <init.h>
#include <selector.h>
#include <dispenser.h>
#include <verifyer.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    Init();//Change to UI?
    Selector selector;
    int drinkID = 0;
    bool isDrink = false;
    double money = 0.00;
    std::string choice = selector.makeChoice();
    while (choice != "X")
    {
        drinkID = selector.processChoice(choice);
        Dispenser dispenser(choice, drinkID);
        isDrink = dispenser.checkDrink(choice);
        if( isDrink == true){
              if (dispenser.checkAlcohol() == true){
                 Verifyer verifyer;
                 if(verifyer.scanID() == false){
                     std::system("cls");
                     std::cout << "ID SCAN HAS FAILED!!!! AUTHORITIES HAVE BEEN NOTIFIED AND ON THEIR WAY!!";
                     Sleep(10000);
                     selector.resetDisplay(isDrink);
                     dispenser.~Dispenser();
                     choice = selector.makeChoice();
                     verifyer.~Verifyer();
                     continue;}
                 else{
                     verifyer.~Verifyer();}
             }
             money = selector.getMoney();
             if (money == 0.00){
                 if(dispenser.creditCardProcess() == false){
                     std::system("cls");
                     std::cout << "CREDIT CARD PROCESSING HAS FAILED!!! PLEASE TRY AGAIN";
                     Sleep(5000);
                     selector.resetDisplay(isDrink);
                     dispenser.~Dispenser();
                     choice = selector.makeChoice();
                     continue;}
             }
             else{
                 if(dispenser.checkPrice(money) == false){
                     std::system("cls");
                     std::cout << "INSUFFIECIENT FUNDS FOR YOUR SELECTION!!!";
                     Sleep(5000);
                     selector.resetDisplay(isDrink);
                     dispenser.~Dispenser();
                     choice = selector.makeChoice();
                     continue;}
                 else{
                     money = dispenser.getPriceChange(money);
                     selector.setMoney(money);
                 }
             }
             dispenser.dispenseDrink();
        }
        selector.resetDisplay(isDrink);
        dispenser.~Dispenser();
        choice = selector.makeChoice();
    }
    return 0;
}
