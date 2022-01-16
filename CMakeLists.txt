cmake_minimum_required(VERSION 3.16)

project(Projet-cpp
        VERSION 1.0
        DESCRIPTION "Projet C++ DUT AS 2021/2022"
        LANGUAGES CXX)

add_executable( Projet-cpp
                main.cpp
                Dictionnaires.h
                Dictionnaires.cpp
                Documents.h
                Documents.cpp
                Livres.h
                Livres.cpp
                Manuels.h
                Manuels.cpp
                Romans.h
                Romans.cpp
                StockDocuments.h
                StockDocuments.cpp
                
)
target_compile_features(Projet-cpp PRIVATE cxx_std_14)