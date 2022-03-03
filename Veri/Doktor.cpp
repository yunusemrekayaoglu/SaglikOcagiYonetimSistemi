//
// Created by yunus on 3/1/2022.
//

#include "Doktor.h"

Doktor::Doktor()
{
    _tDiplomaNo = 0;
    _tSicilNo   = 0;
    _tDoktorID  = 0;
}

TamSayi Doktor::getDiplomaNo() const {
    return _tDiplomaNo;
}

void Doktor::setDiplomaNo(TamSayi DiplomaNo) {
    _tDiplomaNo = DiplomaNo;
}

TamSayi Doktor::getSicilNo() const {
    return _tSicilNo;
}

void Doktor::setSicilNo(TamSayi SicilNo) {
    _tSicilNo = SicilNo;
}

TamSayi Doktor::getDoktorId() const {
    return _tDoktorID;
}

void Doktor::setDoktorId(TamSayi DoktorId) {
    _tDoktorID = DoktorId;
}
