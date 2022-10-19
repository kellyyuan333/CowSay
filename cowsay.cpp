#include <iostream>
#include <string>
#include "Cow.h"
#include "Dragon.h"
#include "IceDragon.h"
#include "HeiferGenerator.cpp"

using namespace std;

int main(int argc, const char** argv)
{
    HeiferGenerator gen;

    string message;
    if(argv[1] == "-l")
    {
        //list out cows

        cout << "Cows Available: ";

        for(Cow* currentCow: gen.getCows())
        {
            cout << currentCow->getName() << " ";
        }
    }
    else if(argv[1] == "-n")
    {
        //assign next argument to message
        for (int i = 3; i < argc; i++)
        {
            message = argv[i];
            if (i < argc - 1)
            {
                cout << message;
            }
            else if (i = argc - 1)
            {
                cout << message << endl;
            }
        }
        Cow calledCow = Cow(argv[2]);

        try
        {
            for (Cow *currentCow: gen.getCows())
            {
                if (currentCow->getName() == argv[2])
                {
                    if(argv[2] == "dragon")
                    {
                        Dragon calledDragon = Dragon(argv[2],calledCow.getImage());
                        cout << calledDragon.getImage() << endl;
                        cout << endl;
                        cout << "This dragon can breathe fire." << endl;
                        cout << endl;
                    }
                    else if(argv[2] == "ice-dragon")
                    {
                        IceDragon calledDragon = IceDragon(argv[2], calledCow.getImage());
                        cout << calledDragon.getImage() << endl;
                        cout << endl;
                        cout << "This dragon cannot breathe fire." << endl;
                        cout << endl;
                    }
                    else
                    {
                        calledCow = *currentCow;
                        cout << calledCow.getImage() << endl;
                    }
                }
            }
            cout << endl;
        }
        catch (...)
        {
            cout << "Could not find " << argv[2] << " cow!" << endl;
        }
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            message = argv[i];
            cout << message;
        }
    }
}