//
// Created by yunus on 3/3/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_SAGLIKOCAGI_H
#define SAGLIKOCAGIYONETIMSISTEMI_SAGLIKOCAGI_H

#include "../Tanimlar.h"


class SaglikOcagi
{
private:
    Metin   _mBirimAdi;
    TamSayi _tBirimKodu;
    Metin   _mAdresi;
    Metin   _mTelefonNumarasi;
    TamSayi _tSaglikOcagiID;
public:
    SaglikOcagi();

    const Metin &getBirimAdi() const;

    void setBirimAdi(const Metin &BirimAdi);

    TamSayi getBirimKodu() const;

    void setBirimKodu(TamSayi BirimKodu);

    const Metin &getAdresi() const;

    void setAdresi(const Metin &Adresi);

    const Metin &getTelefonNumarasi() const;

    void setTelefonNumarasi(const Metin &TelefonNumarasi);

    TamSayi getSaglikOcagiId() const;

    void setSaglikOcagiId(TamSayi SaglikOcagiId);
};


#endif //SAGLIKOCAGIYONETIMSISTEMI_SAGLIKOCAGI_H
