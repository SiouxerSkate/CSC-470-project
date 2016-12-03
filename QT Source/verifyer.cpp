#include "verifyer.h"
#include <cstdlib>
#include <iostream>
#include <windows.h>

Verifyer::Verifyer()
{
}

Verifyer::~Verifyer()
{
}

bool Verifyer::scanID()
{
    bool result = false;
    result = verifyIdentity();
    if(result == true){
        char entry;
        double BAC = 0.00;

        //Need in hooks to breathlyzer chamber HERE Below code will do for now
        std::system("cls");
        std::cout << "Please Blow into Breathalyzer chamber(Enter in P for Pass or F for Fail" << std::endl;
        std::cin >> entry;
        if(entry == 'P'){
            BAC = 0.00;}
        else{
            BAC = 100;}
        result = verifyBAC(BAC);
        std::system("cls");
        if(result == true){
            std::cout << "You have passed the breathalyzer exam...GOOD JOB!";
            Sleep(5000);}
        else{
            std::cout << "YOU SIR OR MADAM ARE A WRETCHED DRUNK GET OUT OF HERE!!!!..or buy a water :) or coffee perhaps.";
            Sleep(5000);}
    }
    return result;
}

bool Verifyer::verifyAge(int age)
{
    bool result = false;
    if (age >= 21){
        result = true;}
    return result;
}

bool Verifyer::verifyIdentity()
{
    //Need hooks to id databsae for age verification
    bool result = false;
    int age = 0;
    char entry;
    std::system("cls");
    std::cout << "Please scan your id to verify age and identity(Enter P for PASS or F for FAIL)" << std::endl;
    std::cin >> entry;
    if(entry == 'P'){
        age = 50;}
    result = verifyAge(age);
    if(result == true){
        result = verifyFace();}
    return result;
}

bool Verifyer::verifyFace()
{
    //NEED hooks to facial recognition sofwtare and hardware
    bool result = false;
    char entry;
    std::system("cls");
    std::cout << "Facial recognition scan in progress please do not move(Enter P for PASS or F for FAIL)" << std::endl;
    std::cin >> entry;
    if(entry == 'P'){
        result = true;}
    return result;
}

bool Verifyer::verifyBAC(double BAC)
{
    bool result = false;
    if(BAC <= .08){
        result = true;}
    return result;
}
