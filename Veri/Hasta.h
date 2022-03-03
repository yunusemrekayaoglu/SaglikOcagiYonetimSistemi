//
// Created by yunus on 3/1/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_HASTA_H
#define SAGLIKOCAGIYONETIMSISTEMI_HASTA_H

#include "Insan.h"
#include "../Tanimlar.h"


class Hasta : public Insan
{
private:
    Metin   _mHastaYasi;
    Metin   _mCinsiyeti;
    Metin   _mOykusu;
    Metin   _mTaniAdi;
    TamSayi _tHastaID;
public:
    Hasta();

    const Metin &getHastaYasi() const;

    void setHastaYasi(const Metin &HastaYasi);

    const Metin &getCinsiyeti() const;

    void setCinsiyeti(const Metin &Cinsiyeti);

    const Metin &getOykusu() const;

    void setOykusu(const Metin &Oykusu);

    const Metin &getTaniAdi() const;

    void setTaniAdi(const Metin &TaniAdi);

    TamSayi getHastaId() const;

    void setHastaId(TamSayi HastaId);
};


#endif //SAGLIKOCAGIYONETIMSISTEMI_HASTA_H
