//
// Created by andyc on 10/19/2022.
//

#ifndef LAB7_DRAGON_H
#define LAB7_DRAGON_H
#include "Cow.h"

class Dragon : public Cow
{
public:
    //attributes
    string name;
    string image;
    //methods
    Dragon(const string& _name, const string& _image);
    bool canBreatheFire();
};


#endif //LAB7_DRAGON_H
