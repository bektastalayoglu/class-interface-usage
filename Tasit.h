#pragma once
#include "ITasit.h"

class Araba : public ITasit
{
public:
    void GazVer() override;
    void FrenYap() override;
    void SagaSinyal() override;
    void SolaSinyal() override;
};

class Otobus : public ITasit
{
public:
    void GazVer() override;
    void FrenYap() override;
    void SagaSinyal() override;
    void SolaSinyal() override;
};
 
class Motor : public ITasit
{
public:
    void GazVer() override;
    void FrenYap() override;
    void SagaSinyal() override;
    void SolaSinyal() override;
};
