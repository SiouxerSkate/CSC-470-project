#include <iostream>
#include <cstdlib>
#include "init.h"

Init::Init()
{
    system("cls");
    std::cout << "WELCOME TO THE ULTIMATE DRINK DISPENSER MACHINE!!!" << std::endl << std::endl;
    std::cout << "Please Make a Selection From the Below Beverage Choices" << std::endl << std::endl;
    displayAll();
}

Init::~Init()
{
}

Init::displayAll()
{
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
    std::cout << "13 - Lipton 16oz Bottle            - $1.50" << std::endl;
    std::cout << "14 - Starbucks 12oz Bottle         - $1.50" << std::endl;
    std::cout << "15 - Red Bull 8oz Can              - $2.00" << std::endl;
    std::cout << "16 - Coors Light 16oz Can          - $2.00" << std::endl;
    std::cout << "17 - Coors 16oz Can                - $2.00" << std::endl;
    std::cout << "18 - Hydra Immortal 12oz Bottle    - $2.00" << std::endl;
    return 0;
}
