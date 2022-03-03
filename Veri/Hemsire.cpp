//
// Created by yunus on 3/1/2022.
//

#include "Hemsire.h"

Hemsire::Hemsire()
{
    _tSicilNo      = 0;
    _tHemsireID    = 0;
}

TamSayi Hemsire::getSicilNo() const {
    return _tSicilNo;
}

void Hemsire::setSicilNo(TamSayi SicilNo) {
    _tSicilNo = SicilNo;
}

TamSayi Hemsire::getHemsireId() const {
    return _tHemsireID;
}

void Hemsire::setHemsireId(TamSayi HemsireId) {
    _tHemsireID = HemsireId;
}
