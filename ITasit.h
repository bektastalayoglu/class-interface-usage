#pragma once
#include <Tasit.h>

class ITasit
{
public:
    virtual void GazVer() = 0;
    virtual void FrenYap() = 0;
    virtual void SagaSinyal() = 0;
    virtual void SolaSinyal() = 0;
};