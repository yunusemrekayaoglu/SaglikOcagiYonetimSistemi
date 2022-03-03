//
// Created by yunus on 3/3/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_ZIYARET_H
#define SAGLIKOCAGIYONETIMSISTEMI_ZIYARET_H

#include "../Tanimlar.h"

class Ziyaret
{
private:
    Metin       _mSikayet;
    TarihSaat   _tsZiyaretTarihi;
    TarihSaat   _tsZiyaretSaati;
    Metin       _mZiyaretSuresi;
    TamSayi     _tZiyaretID;
public:
    Ziyaret();

    const Metin &getSikayet() const;

    void setSikayet(const Metin &Sikayet);

    const TarihSaat &getTarih() const;

    void setTarih(const TarihSaat &Tarih);

    const TarihSaat &getSaat() const;

    void setSaat(const TarihSaat &Saat);

    const Metin &getZiyaretSuresi() const;

    void setZiyaretSuresi(const Metin &ZiyaretSuresi);

    TamSayi getZiyaretId() const;

    void setZiyaretId(TamSayi ZiyaretId);

};


#endif //SAGLIKOCAGIYONETIMSISTEMI_ZIYARET_H
