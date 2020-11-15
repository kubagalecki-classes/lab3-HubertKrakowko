#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int calosc=0;
    int przekaz;
    int zagli=0;
    if(towar!=0)
    {
      while(calosc<towar)
      {
        Stocznia stocznia{};
        Statek* statek = stocznia();

        
        if(Zaglowiec* d = dynamic_cast<Zaglowiec*>(statek))
    {
        zagli++;
    }
    else {
    }

        przekaz=statek.transportuj;
        calosc=calosc+przekaz;
        delete statek;

    }
    }
    else{

    }
    return zagli;
}