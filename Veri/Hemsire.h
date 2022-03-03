//
// Created by yunus on 3/1/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_HEMSIRE_H
#define SAGLIKOCAGIYONETIMSISTEMI_HEMSIRE_H

#include "Insan.h"
#include "../Tanimlar.h"

class Hemsire : public Insan
{
private:
    TamSayi _tSicilNo;
    TamSayi _tHemsireID;

public:
    Hemsire();

    TamSayi getSicilNo() const;

    void setSicilNo(TamSayi SicilNo);

    TamSayi getHemsireId() const;

    void setHemsireId(TamSayi HemsireId);
};


#endif //SAGLIKOCAGIYONETIMSISTEMI_HEMSIRE_H
