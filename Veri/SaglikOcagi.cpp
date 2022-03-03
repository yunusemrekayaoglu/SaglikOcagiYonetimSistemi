//
// Created by yunus on 3/3/2022.
//

#include "SaglikOcagi.h"

SaglikOcagi::SaglikOcagi()
{
    _mBirimAdi          = "";
    _tBirimKodu        = 0;
    _mAdresi            = "";
    _mTelefonNumarasi   = "";
    _tSaglikOcagiID    = 0;
}

const Metin &SaglikOcagi::getBirimAdi() const {
    return _mBirimAdi;
}

void SaglikOcagi::setBirimAdi(const Metin &BirimAdi) {
    _mBirimAdi = BirimAdi;
}

TamSayi SaglikOcagi::getBirimKodu() const {
    return _tBirimKodu;
}

void SaglikOcagi::setBirimKodu(TamSayi BirimKodu) {
    _tBirimKodu = BirimKodu;
}

const Metin &SaglikOcagi::getAdresi() const {
    return _mAdresi;
}

void SaglikOcagi::setAdresi(const Metin &Adresi) {
    _mAdresi = Adresi;
}

const Metin &SaglikOcagi::getTelefonNumarasi() const {
    return _mTelefonNumarasi;
}

void SaglikOcagi::setTelefonNumarasi(const Metin &TelefonNumarasi) {
    _mTelefonNumarasi = TelefonNumarasi;
}

TamSayi SaglikOcagi::getSaglikOcagiId() const {
    return _tSaglikOcagiID;
}

void SaglikOcagi::setSaglikOcagiId(TamSayi SaglikOcagiId) {
    _tSaglikOcagiID = SaglikOcagiId;
}

