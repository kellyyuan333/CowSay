#ifndef LAB7_COW_H
#define LAB7_COW_H

#include <string>
using std::string;

class Cow
{
public:
    Cow(const string _name);
    string& getName();
    string& getImage();
    virtual void setImage(const string& _image);

private:
    string name;
    string image;
};


#endif //LAB7_COW_H
