//
// Created by andyc on 10/19/2022.
//

#include "Dragon.h"
#include <typeinfo>

//constructor
Dragon::Dragon(const string& _name, const string& _image) : Cow(_name)
{
    name = _name;
    image = _image;
}

//checks object type
bool Dragon::canBreatheFire()
{
    return true;
}