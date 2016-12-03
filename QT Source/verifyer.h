#ifndef VERIFYER_H
#define VERIFYER_H


class Verifyer
{
public:
    Verifyer();
    ~Verifyer();
    bool scanID();//idNUM to be a placeholder for the scan from an id

private:
    bool verifyIdentity();
    bool verifyAge(int age);
    bool verifyFace();
    bool verifyBAC(double BAC);
};

#endif // VERIFYER_H
