cmake_minimum_required(VERSION 3.21)
project(SaglikOcagiYonetimSistemi)

set(CMAKE_CXX_STANDARD 14)

add_executable(SaglikOcagiYonetimSistemi main.cpp Tanimlar.h Veri/Insan.cpp Veri/Insan.h Veri/Hasta.cpp Veri/Hasta.h Veri/Hemsire.cpp Veri/Hemsire.h Veri/Doktor.cpp Veri/Doktor.h Veri/SaglikOcagi.cpp Veri/SaglikOcagi.h Veri/Ziyaret.cpp Veri/Ziyaret.h Veri/Recete.cpp Veri/Recete.h Veri/Ilac.cpp Veri/Ilac.h Veri/Tetkik.cpp Veri/Tetkik.h)
