//
// Created by root on 10/30/15.
//

#include <iostream>
#include "VPet.h"

using namespace std;


int main(){
    VPet bob(150, false);
    bob.feedPet(25);

    cout<<"Bob weighs: "<<bob.getWeight()<<endl;

   cout<<bob<<endl;
    return 0;
}

std::ostream&operator<<(std::ostream& os, const VPet& vp)
{
    std::string hungerStatus = "";

    if(vp.hungry){
        hungerStatus = "hungry";

    }else{
        hungerStatus = "not hungry";
    }
     return os <<"weight: "<<vp.weight<<"hunger status:"
            <<hungerStatus<<std::endl;


}
