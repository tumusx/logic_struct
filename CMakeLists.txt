cmake_minimum_required(VERSION 3.20)
project(structdate C)

set(CMAKE_C_STANDARD 99)

add_executable(structdate logicprog/trocas.c logicprog/circulo.c logicprog/pagamento.c logicprog/consumoCombustivel.c logicprog/medidas.c)
