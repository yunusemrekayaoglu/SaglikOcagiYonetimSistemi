//
// Created by yunus on 3/3/2022.
//

#include "Recete.h"

Recete::Recete()
{
    _mReceteTarihi      = "";
    _mReceteSaati       = "";
    _mReceteKodu        = "";
    _tsGecerlilikSuresi = "";
    _tReceteID          = 0 ;
}

const Metin &Recete::getMReceteTarihi() const {
    return _mReceteTarihi;
}

void Recete::setMReceteTarihi(const Metin &mReceteTarihi) {
    _mReceteTarihi = mReceteTarihi;
}

const Metin &Recete::getMReceteSaati() const {
    return _mReceteSaati;
}

void Recete::setMReceteSaati(const Metin &mReceteSaati) {
    _mReceteSaati = mReceteSaati;
}

const Metin &Recete::getMReceteKodu() const {
    return _mReceteKodu;
}

void Recete::setMReceteKodu(const Metin &mReceteKodu) {
    _mReceteKodu = mReceteKodu;
}

const TarihSaat &Recete::getTsGecerlilikSuresi() const {
    return _tsGecerlilikSuresi;
}

void Recete::setTsGecerlilikSuresi(const TarihSaat &tsGecerlilikSuresi) {
    _tsGecerlilikSuresi = tsGecerlilikSuresi;
}

TamSayi Recete::getReceteId() const {
    return _tReceteID;
}

void Recete::setReceteId(TamSayi ReceteId) {
    _tReceteID = ReceteId;
}


