//
// Created by andyc on 10/19/2022.
//

#include "IceDragon.h"

IceDragon::IceDragon(const std::string &_name, const std::string &_image) : Dragon(_name, _image)
{
    name = _name;
    image = _image;
}

bool IceDragon::canBreatheFire()
{
    return false;
}