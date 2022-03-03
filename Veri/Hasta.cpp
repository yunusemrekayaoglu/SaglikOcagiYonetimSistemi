//
// Created by yunus on 3/1/2022.
//

#include "Hasta.h"

Hasta::Hasta()
{
    _mHastaYasi = "";
    _mCinsiyeti = "";
    _mOykusu    = "";
    _mTaniAdi   = "";
    _tHastaID  = 0 ;
}

const Metin &Hasta::getHastaYasi() const {
    return _mHastaYasi;
}

void Hasta::setHastaYasi(const Metin &HastaYasi) {
    _mHastaYasi = HastaYasi;
}

const Metin &Hasta::getCinsiyeti() const {
    return _mCinsiyeti;
}

void Hasta::setCinsiyeti(const Metin &Cinsiyeti) {
    _mCinsiyeti = Cinsiyeti;
}

const Metin &Hasta::getOykusu() const {
    return _mOykusu;
}

void Hasta::setOykusu(const Metin &Oykusu) {
    _mOykusu = Oykusu;
}

const Metin &Hasta::getTaniAdi() const {
    return _mTaniAdi;
}

void Hasta::setTaniAdi(const Metin &TaniAdi) {
    _mTaniAdi = TaniAdi;
}

TamSayi Hasta::getHastaId() const {
    return _tHastaID;
}

void Hasta::setHastaId(TamSayi HastaId) {
    _tHastaID = HastaId;
}

