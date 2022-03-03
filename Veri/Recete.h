//
// Created by yunus on 3/3/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_RECETE_H
#define SAGLIKOCAGIYONETIMSISTEMI_RECETE_H

#include "../Tanimlar.h"

class Recete
{
private:
    Metin       _mReceteTarihi;
    Metin       _mReceteSaati;
    Metin       _mReceteKodu;
    TarihSaat   _tsGecerlilikSuresi;
    TamSayi     _tReceteID;
public:
    Recete();

    const Metin &getMReceteTarihi() const;

    void setMReceteTarihi(const Metin &mReceteTarihi);

    const Metin &getMReceteSaati() const;

    void setMReceteSaati(const Metin &mReceteSaati);

    const Metin &getMReceteKodu() const;

    void setMReceteKodu(const Metin &mReceteKodu);

    const TarihSaat &getTsGecerlilikSuresi() const;

    void setTsGecerlilikSuresi(const TarihSaat &tsGecerlilikSuresi);

    TamSayi getReceteId() const;

    void setReceteId(TamSayi ReceteId);
};


#endif //SAGLIKOCAGIYONETIMSISTEMI_RECETE_H
