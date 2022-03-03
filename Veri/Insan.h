//
// Created by yunus on 3/1/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_INSAN_H
#define SAGLIKOCAGIYONETIMSISTEMI_INSAN_H

#include "../Tanimlar.h"

class Insan
{
private:
    Metin _mAd;
    Metin _mSoyad;
    Metin _mHESKodu;
    Metin _mTCKimlik;
public:
    Insan();

    const Metin &getAd() const;

    void setAd(const Metin &Ad);

    const Metin &getSoyad() const;

    void setSoyad(const Metin &Soyad);

    const Metin &getHesKodu() const;

    void setHesKodu(const Metin &HesKodu);

    const Metin &getTcKimlik() const;

    void setTcKimlik(const Metin &TcKimlik);
};


#endif //SAGLIKOCAGIYONETIMSISTEMI_INSAN_H
