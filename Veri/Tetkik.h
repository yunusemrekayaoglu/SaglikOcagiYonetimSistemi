//
// Created by yunus on 3/3/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_TETKIK_H
#define SAGLIKOCAGIYONETIMSISTEMI_TETKIK_H

#include "../Tanimlar.h"

class Tetkik
{
private:
    Metin _mTetkikSonucu;
    TarihSaat _tsTetkikTarihi;
    TamSayi   _tTetkikID;
public:
    Tetkik();

    const Metin &getTetkikSonucu() const;

    void setTetkikSonucu(const Metin &TetkikSonucu);

    const TarihSaat &getTetkikTarihi() const;

    void setTetkikTarihi(const TarihSaat &TetkikTarihi);

    TamSayi getTetkikId() const;

    void setTetkikId(TamSayi TetkikId);
};


#endif //SAGLIKOCAGIYONETIMSISTEMI_TETKIK_H
