#include <iostream>
#include <string>
#include "Cow.h"
#include "Dragon.h"
#include "IceDragon.h"
#include "HeiferGenerator.h"

using namespace std;

int main(int argc, const char** argv)
{
    HeiferGenerator gen;
    string message;
    message = argv[1];
    if(message == "-l")
    {
        //lists out cows
        cout << "Cows Available: ";
        for(Cow* currentCow : gen.getCows())
        {
            cout << currentCow->getName() << " ";
        }
        cout << endl;
    }
    else if(message == "-n")
    {
        string cowName = argv[2];
        Cow calledCow = Cow(cowName);
        bool found = false;
        for(Cow* currentCow : gen.getCows())
        {
            if (currentCow->getName() == calledCow.getName()) //checks if the called cow is in the list
            {
                found = true;
                cout << endl;
                //prints message
                for (int i = 3; i < argc; i++)
                {
                    message = argv[i];
                    if (i < argc - 1)
                    {
                        cout << message << " ";
                    }
                    else if (i = argc - 1)
                    {
                        cout << message << endl;
                    }
                }
                //prints cow image
                for(Cow* currentCow : gen.getCows())
                {
                    if (currentCow->getName() == calledCow.getName())
                    cout << currentCow->getImage() << endl;
                }
                //prints dragon image and checks if can breathe fire
                Dragon* testDragon = gen.getDragonPointer(currentCow);
                if(testDragon!= nullptr)
                {
                    Dragon dragon = Dragon(testDragon->name, testDragon->image);
                    if(typeid(Dragon) == typeid(*testDragon))
                    {
                        cout << testDragon->image <<endl;
                        cout << "This dragon can breathe fire." << endl;
                    }
                    if(typeid(IceDragon) == typeid(*testDragon))
                    {
                        IceDragon ice = IceDragon(testDragon->name, testDragon->image);
                        cout << testDragon->image << endl;
                        if (!ice.canBreatheFire())
                            cout << "This dragon cannot breathe fire." << endl;
                    }
                }
                break;
            }
        }
        if (!found)
        {
            cout << "Could not find " << calledCow.getName() << " cow!" << endl;
            cout << endl;
        }
    }
    else
    {
        cout << endl;
        Cow calledCow = Cow("heifer");
        //prints message
        for (int i = 1; i < argc; i++)
        {
            message = argv[i];
            if (i < argc - 1)
            {
                cout << message << " ";
            }
            else if (i = argc - 1)
            {
                cout << message << endl;
            }
        }
        //prints default cow image
        for(Cow* currentCow : gen.getCows())
        {
            cout << currentCow->getImage() << endl;
            cout << endl;
            break;
        }
    }
}
