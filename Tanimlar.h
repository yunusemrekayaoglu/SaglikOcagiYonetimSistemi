//
// Created by yunus on 3/1/2022.
//

#ifndef SAGLIKOCAGIYONETIMSISTEMI_TANIMLAR_H
#define SAGLIKOCAGIYONETIMSISTEMI_TANIMLAR_H

#include <string>
#include <memory>
#include <vector>


typedef unsigned int TamSayi;
typedef std::string  Metin;
typedef bool         Mantiksal;
typedef std::string  TarihSaat;

class Doktor;
class Hemsire;
class SaglikOcagi;
class Hasta;
class Ziyaret;
class Recete;
class Ilac;
class Tetkik;
class Insan;

typedef std::shared_ptr<Doktor>             DoktorPtr;
typedef std::shared_ptr<Hemsire>            HemsirePtr;
typedef std::shared_ptr<SaglikOcagi>        SaglikOcagiPtr;
typedef std::shared_ptr<Hasta>              HastaPtr;
typedef std::shared_ptr<Ziyaret>            ZiyaretPtr;
typedef std::shared_ptr<Recete>             RecetePtr;
typedef std::shared_ptr<Ilac>               IlacPtr;
typedef std::shared_ptr<Tetkik>             TetkikPtr;
typedef std::shared_ptr<Insan>              InsanPtr;

typedef std::vector<DoktorPtr>              DoktorVektoru;
typedef std::vector<HemsirePtr>             HemsireVektoru;
typedef std::vector<SaglikOcagiPtr>         SaglikOcagiVektoru;
typedef std::vector<HastaPtr>               HastaVektoru;
typedef std::vector<ZiyaretPtr>             ZiyaretVektoru;
typedef std::vector<RecetePtr>              ReceteVektoru;
typedef std::vector<IlacPtr>                IlacVektoru;
typedef std::vector<TetkikPtr>              TetkikVektoru;
typedef std::vector<InsanPtr>               InsanVektoru;



#endif //SAGLIKOCAGIYONETIMSISTEMI_TANIMLAR_H
