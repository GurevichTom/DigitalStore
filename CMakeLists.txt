cmake_minimum_required(VERSION 3.30)
project(DigitalStore C)

set(CMAKE_C_STANDARD 11)

add_executable(DigitalStore
    main.c
        Date.h
        Date.c
        input.c
        input.h
        Product.h
        customer.h)
