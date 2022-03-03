//
// Created by yunus on 3/3/2022.
//

#include "Ilac.h"

Ilac::Ilac()
{
    _mIlacAdi         = "";
    _mIlacDozaji      = "";
    _tsUygulamaSuresi = "";
    _tIlacID          = 0;
}

const Metin &Ilac::getIlacAdi() const {
    return _mIlacAdi;
}

void Ilac::setIlacAdi(const Metin &IlacAdi) {
    _mIlacAdi = IlacAdi;
}

const Metin &Ilac::getIlacDozaji() const {
    return _mIlacDozaji;
}

void Ilac::setIlacDozaji(const Metin &IlacDozaji) {
    _mIlacDozaji = IlacDozaji;
}

const TarihSaat &Ilac::getUygulamaSuresi() const {
    return _tsUygulamaSuresi;
}

void Ilac::setUygulamaSuresi(const TarihSaat &UygulamaSuresi) {
    _tsUygulamaSuresi = UygulamaSuresi;
}

TamSayi Ilac::getIlacId() const {
    return _tIlacID;
}

void Ilac::setIlacId(TamSayi IlacId) {
    _tIlacID = IlacId;
}
