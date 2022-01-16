cmake_minimum_required(VERSION 3.16)
project(mkcp_inter)

#quelle compilateur
set(CMAKE_CXX_COMPILER "gcc")
#quel version de c++
set(CMAKE_CXX_STANDARD 14)

#correspond a loptimisation utilisée par le compilateur
set(CMAKE_CXX_FLAGS "-O3")

include_directories(.)

# link_directories()

add_executable(mkcp_inter
        main.cpp
        Dictionnaires.cpp
        Dictionnaires.h
        Documents.cpp
        Documents.h
        Livres.cpp
        Livres.h
        Manuels.cpp
        Manuels.h
        Romans.cpp
        Romans.h
        StockDocuments.cpp
        StockDocuments.h
)