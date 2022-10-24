//
// Created by Kelly on 10/23/2022.
//

#ifndef UNTITLED3_ICEDRAGON_H
#define UNTITLED3_ICEDRAGON_H

#include "Dragon.h"

class IceDragon : public Dragon
{
public:
    string name;
    string image;
    IceDragon(const std::string &_name, const std::string &_image);
    bool canBreatheFire();
};

#endif //UNTITLED3_ICEDRAGON_H
