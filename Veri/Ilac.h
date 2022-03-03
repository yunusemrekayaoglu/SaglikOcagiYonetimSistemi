//
// Created by yunus on 3/3/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_ILAC_H
#define SAGLIKOCAGIYONETIMSISTEMI_ILAC_H

#include "../Tanimlar.h"

class Ilac
{
private:
    Metin     _mIlacAdi;
    Metin     _mIlacDozaji;
    TarihSaat _tsUygulamaSuresi;
    TamSayi   _tIlacID;
public:
    Ilac();

    const Metin &getIlacAdi() const;

    void setIlacAdi(const Metin &IlacAdi);

    const Metin &getIlacDozaji() const;

    void setIlacDozaji(const Metin &IlacDozaji);

    const TarihSaat &getUygulamaSuresi() const;

    void setUygulamaSuresi(const TarihSaat &UygulamaSuresi);

    TamSayi getIlacId() const;

    void setIlacId(TamSayi IlacId);
};


#endif //SAGLIKOCAGIYONETIMSISTEMI_ILAC_H
