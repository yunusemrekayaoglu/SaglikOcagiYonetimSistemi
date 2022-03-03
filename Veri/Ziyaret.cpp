//
// Created by yunus on 3/3/2022.
//

#include "Ziyaret.h"

Ziyaret::Ziyaret()
{
    _mSikayet       = "";
    _tsZiyaretTarihi        = "";
    _tsZiyaretSaati         = "";
    _mZiyaretSuresi = "";
    _tZiyaretID     = 0;
}

const Metin &Ziyaret::getSikayet() const {
    return _mSikayet;
}

void Ziyaret::setSikayet(const Metin &Sikayet) {
    _mSikayet = Sikayet;
}

const TarihSaat &Ziyaret::getTarih() const {
    return _tsZiyaretTarihi;
}

void Ziyaret::setTarih(const TarihSaat &Tarih) {
    _tsZiyaretTarihi = Tarih;
}

const TarihSaat &Ziyaret::getSaat() const {
    return _tsZiyaretSaati;
}

void Ziyaret::setSaat(const TarihSaat &Saat) {
    _tsZiyaretSaati = Saat;
}

const Metin &Ziyaret::getZiyaretSuresi() const {
    return _mZiyaretSuresi;
}

void Ziyaret::setZiyaretSuresi(const Metin &ZiyaretSuresi) {
    _mZiyaretSuresi = ZiyaretSuresi;
}

TamSayi Ziyaret::getZiyaretId() const {
    return _tZiyaretID;
}

void Ziyaret::setZiyaretId(TamSayi ZiyaretId) {
    _tZiyaretID = ZiyaretId;
}

