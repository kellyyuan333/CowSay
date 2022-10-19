//
// Created by andyc on 10/19/2022.
//

#ifndef LAB7_ICEDRAGON_H
#define LAB7_ICEDRAGON_H


#include "Dragon.h"

class IceDragon : public Dragon
{
string name;
string image;
public:
    IceDragon(const std::string &_name, const std::string &_image);
    bool canBreatheFire();
};


#endif //LAB7_ICEDRAGON_H
