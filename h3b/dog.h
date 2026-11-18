#ifndef DOG_H
#define DOG_H
#include "anima1.h"

class Dog : public Animal
{
public:
    Dog();
    ~Dog() override;

    void callOut() override;
};

#endif // DOG_H
