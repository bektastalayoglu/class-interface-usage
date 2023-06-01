#include "Vasita.h"

Vasita::Vasita(ITasit& tasit) : tasit_ {tasit}
{
void Vasita::Kullan()
{
        tasit_.GazVer();
        tasit_.SagaSinyal();
        tasit_.FrenYap();
        tasit_.SolaSinyal();
}
}