cmake_minimum_required(VERSION 3.29)
project(primeiroProjeto)

set(CMAKE_CXX_STANDARD 11)

add_executable(primeiroProjeto main.cpp)
add_executable(acelerador exercicios/acelerador.cpp)
add_executable(expressoes exercicios/expressoes.cpp)
add_executable( campominado exercicios/campominado.cpp)
add_executable( areatriangulo exercicios/areatrianguloretangulo.cpp)
add_executable( basqueterobo exercicios/basqueterobos.cpp)
add_executable( testes exercicios/testes.cpp)
