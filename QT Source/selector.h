#ifndef SELECTOR_H
#define SELECTOR_H
#include <QString>

class Selector
{
public:
    Selector();
    ~Selector();
    std::string makeChoice();
    int processChoice(std::string choiceToProcess);
    std::string getChoice();
    resetDisplay(int drinkID);
    double getMoney();
    setMoney(double money);

private:
    displayChoices();
    displayFilteredChoices();
    displayExit();
    filterSoda();
    filterDiet();
    filterEnergy();
    filterAlcohol();
    removeFilter();
    addMoney();
    returnMoney();

    std::string choice = "B";
    std::string previousChoice;
    double moneyTotal = 0.00;
};

#endif // SELECTOR_H
