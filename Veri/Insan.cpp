//
// Created by yunus on 3/1/2022.
//

#include "Insan.h"

Insan::Insan()
{
    _mAd        = "";
    _mSoyad     = "";
    _mHESKodu   = "";
    _mTCKimlik  = "";
}

const Metin &Insan::getAd() const
{
    return _mAd;
}

void Insan::setAd(const Metin &Ad)
{
    if (Ad.empty())
    {
        return;
    }
    _mAd = Ad;
}

const Metin &Insan::getSoyad() const {
    return _mSoyad;
}

void Insan::setSoyad(const Metin &Soyad)
{
    if (Soyad.empty())
    {
        return;
    }
    _mSoyad = Soyad;
}

const Metin &Insan::getHesKodu() const {
    return _mHESKodu;
}

void Insan::setHesKodu(const Metin &HesKodu)
{
    if (HesKodu.empty())
    {
        return;
    }
    _mHESKodu = HesKodu;
}

const Metin &Insan::getTcKimlik() const {
    return _mTCKimlik;
}

void Insan::setTcKimlik(const Metin &TcKimlik)
{
    if (TcKimlik.empty())
    {
        return;
    }
    _mTCKimlik = TcKimlik;
}


