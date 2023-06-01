#pragma once

#include "ITasit.h"

class Vasita
{
public:
    Vasita(ITasit& tasit);
    void Kullan() {}

private:
    ITasit& tasit_;
};
