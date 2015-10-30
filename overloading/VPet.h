//
// Created by root on 10/30/15.
//

#ifndef LABS_VPET_H
#define LABS_VPET_H


#include <iostream>

class  VPet{
public:

    friend std::ostream&operator<<(std::ostream& os, const VPet& vp);

    //Constructors
    VPet(double,bool);
    VPet();

    //Member functions
    void feedPet(int amount);
    bool getHungry()const ;
    double  getWeight()const ;

private:
    //Data Members

};

#endif //LABS_VPET_H
