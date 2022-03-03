//
// Created by yunus on 3/1/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_DOKTOR_H
#define SAGLIKOCAGIYONETIMSISTEMI_DOKTOR_H

#include "Insan.h"
#include "../Tanimlar.h"

class Doktor : public Insan
{
private:
    TamSayi _tDiplomaNo;
    TamSayi _tSicilNo;
    TamSayi _tDoktorID;
public:
    Doktor();

    TamSayi getDiplomaNo() const;

    void setDiplomaNo(TamSayi DiplomaNo);

    TamSayi getSicilNo() const;

    void setSicilNo(TamSayi SicilNo);

    TamSayi getDoktorId() const;

    void setDoktorId(TamSayi DoktorId);

};


#endif //SAGLIKOCAGIYONETIMSISTEMI_DOKTOR_H
