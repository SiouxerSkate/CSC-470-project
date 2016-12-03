#include "selector.h"
#include <init.h>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <iomanip>

Selector::Selector()
{
    displayChoices();
}

Selector::~Selector()
{
}

std::string Selector::makeChoice()
{
    if(choice != "M" && choice != "R"){
        previousChoice = choice;}
    if(previousChoice != "B" && previousChoice != "A" && previousChoice != "S" && previousChoice != "D" && previousChoice != "E"){
        previousChoice = "B";}
    std::cin >> choice;
    return choice;
}

int Selector::processChoice(std::string choiceToProcess)
{
    int returnNum = 0;
    //Wanted to use switch but cant use switch with strings...didnt want to mess aroudn with it any longer
    if(choiceToProcess == "S"){
        filterSoda();}
    else if(choiceToProcess == "D"){
        filterDiet();}
    else if(choiceToProcess == "E"){
        filterDiet();}
    else if(choiceToProcess == "A"){
        filterDiet();}
    else if(choiceToProcess == "M"){
        addMoney();}
    else if(choiceToProcess == "R"){
        returnMoney();}
    else if(choiceToProcess == "B"){
        removeFilter();}
    else if(choiceToProcess == "1"){
        returnNum = 1;}
    else if(choiceToProcess == "2"){
        returnNum = 2;}
    else if(choiceToProcess == "3"){
        returnNum = 3;}
    else if(choiceToProcess == "4"){
        returnNum = 4;}
    else if(choiceToProcess == "5"){
        returnNum = 5;}
    else if(choiceToProcess == "6"){
        returnNum = 6;}
    else if(choiceToProcess == "7"){
        returnNum = 7;}
    else if(choiceToProcess == "8"){
        returnNum = 8;}
    else if(choiceToProcess == "9"){
        returnNum = 9;}
    else if(choiceToProcess == "10"){
        returnNum = 10;}
    else if(choiceToProcess == "11"){
        returnNum = 11;}
    else if(choiceToProcess == "12"){
        returnNum = 12;}
    else if(choiceToProcess == "13"){
        returnNum = 13;}
    else if(choiceToProcess == "14"){
        returnNum = 14;}
    else if(choiceToProcess == "15"){
        returnNum = 15;}
    else if(choiceToProcess == "16"){
        returnNum = 16;}
    else if(choiceToProcess == "17"){
        returnNum = 17;}
    else if(choiceToProcess == "18"){
        returnNum = 18;}
    else
    {
        returnNum = 0;
    }
    return returnNum;
}

Selector::displayChoices()
{
    std::cout << "You have $" << std::setprecision(3) << moneyTotal << std::endl;
    std::cout << "Please make a selection, either choose a beverage or a selection from the below list" << std::endl;
    std::cout << "S - to filter soda, D - to filter Diet, E - to filter Energy, A - to filter Alcohol" << std::endl;
    displayExit();
    return 0;
}

Selector::displayFilteredChoices()
{
    std::cout << "You have $" << std::setprecision(3) << moneyTotal << std::endl;
    std::cout << "Please make a selection, either choose a beverage or a selection from the below list" << std::endl;
    std::cout << "B - to go back to all selections, ";
    return 0;
}

Selector::displayExit()
{
    std::cout << std::endl << std::endl << "Or M - to add money, R - to return money, X - to exit application. " << std::endl;
    return 0;
}

Selector::filterSoda()
{
    system("cls");
    std::cout << "YOU HAVE SELECTED ONLY SODA BEVERAGES. PLEASE SEE SODA ONLY SELECTIONS BELOW." << std::endl << std::endl;
    std::cout << "1  - Moutain Dew 12oz Can          - $1.00" << std::endl;
    std::cout << "2  - Mountain Dew 20oz Bottle      - $1.50" << std::endl;
    std::cout << "3  - Diet Mountain Dew 20oz Bottle - $1.50" << std::endl;
    std::cout << "4  - Pepsi 12oz Can                - $1.00" << std::endl;
    std::cout << "5  - Pepsi 20oz Bottle             - $1.50" << std::endl;
    std::cout << "6  - Diet Pepsi 20oz Bottle        - $1.50" << std::endl;
    std::cout << "7  - Sprite 12oz Can               - $1.00" << std::endl;
    std::cout << "8  - Sprite 20oz Bottle            - $1.50" << std::endl;
    std::cout << "9  - Dr. Pepper 12oz Can           - $1.00" << std::endl;
    std::cout << "10 - Dr. Pepper 20oz Bottle        - $1.50" << std::endl;
    std::cout << "11 - Diet Dr. Pepper 20oz Bottle   - $1.50" << std::endl;
    std::cout << "12 - DaSani 20oz Bottle            - $1.00" << std::endl;
    displayFilteredChoices();
    std::cout << "D - to see all Diet selections";
    displayExit();
    return 0;
}

Selector::filterDiet()
{
    system("cls");
    std::cout << "YOU HAVE SELECTED ONLY DIET BEVERAGES. PLEASE SEE DIET ONLY SELECTIONS BELOW." << std::endl << std::endl;
    std::cout << "3  - Diet Mountain Dew 20oz Bottle - $1.50" << std::endl;
    std::cout << "6  - Diet Pepsi 20oz Bottle        - $1.50" << std::endl;
    std::cout << "11 - Diet Dr. Pepper 20oz Bottle   - $1.50" << std::endl;
    std::cout << "12 - DaSani 20oz Bottle            - $1.00" << std::endl;
    displayFilteredChoices();
    displayExit();
    return 0;
}

Selector::filterEnergy()
{
    system("cls");
    std::cout << "YOU HAVE SELECTED ONLY ENERGY BEVERAGES. PLEASE SEE ENERGY ONLY SELECTIONS BELOW." << std::endl << std::endl;
    std::cout << "13 - Lipton 16oz Bottle            - $1.50" << std::endl;
    std::cout << "14 - Starbucks 12oz Bottle         - $1.50" << std::endl;
    std::cout << "15 - Red Bull 8oz Can              - $2.00" << std::endl;
    displayFilteredChoices();
    displayExit();
    return 0;
}

Selector::filterAlcohol()
{
    system("cls");
    std::cout << "YOU HAVE SELECTED ONLY ALCOHOL BEVERAGES. PLEASE SEE ALCOHOL ONLY SELECTIONS BELOW." << std::endl << std::endl;
    std::cout << "16 - Coors Light 16oz Can          - $2.00" << std::endl;
    std::cout << "17 - Coors 16oz Can                - $2.00" << std::endl;
    std::cout << "18 - Hydra Immortal 12oz Bottle    - $2.00" << std::endl;
    displayFilteredChoices();
    displayExit();
    return 0;
}

Selector::removeFilter()
{
    Init();
    displayChoices();
    return 0;
}

Selector::addMoney()
{
   double tempMoney = 0.00;
    system("cls");
    std::cout << "Please Enter the amount of money you have in increments of $.05." << std::endl;
    std::cin >> tempMoney;
    tempMoney *= 1.00;
    moneyTotal += tempMoney;
    processChoice(previousChoice);
    return 0;
}

Selector::returnMoney()
{
    if(moneyTotal != 0.00)
    {
        system("cls");
        std::cout << "Please take your $" <<  std::setprecision(3) << moneyTotal << " that is now in the coin return slot." << std::endl;
        std::cout << "HAVE A NICE DAY!!!" << std::endl;
        moneyTotal = 0.00;
        Sleep(5000);
        processChoice(previousChoice);
    }
    return 0;
}

std::string Selector::getChoice()
{
    return choice;
}


Selector::resetDisplay(int drinkID)
{
    if(drinkID > 0){
        removeFilter();}
    return 0;
}

double Selector::getMoney()
{
    return moneyTotal;
}

Selector::setMoney(double money)
{
    moneyTotal = money;
    return 0;
}
