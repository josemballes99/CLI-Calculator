#include "Multiplication.h"

Multiplication::Multiplication()
{
    //ctor
}

Multiplication::~Multiplication()
{
    //dtor
}

Multiplication::Multiplication(const Multiplication& other)
{
    //copy ctor
}

Multiplication& Multiplication::operator=(const Multiplication& rhs)
{
    if (this == &rhs) return *this;
    return *this;
}

string Multiplication::evaluate()
{
    return left->evaluate() + "*" + right->evaluate();
}

void Multiplication::print()
{
    cout << this->evaluate();
}
