cmake_minimum_required(VERSION 3.29)
project(CCF_CSP)

set(CMAKE_CXX_STANDARD 17)

add_executable(CCF_CSP main.cpp)

add_executable(01-xianzhijisuan 28/01-xianzhijisuan.cpp)

add_executable(01-tiandizhangliang 29/01-tiandizhangliang.cpp)
add_executable(02-kentianjihua 29/02-kentianjihua.cpp)

add_executable(01-chongfujumian 30/01-chongfujumian.cpp)
add_executable(02-juzhenyunsuan 30/02-juzhenyunsuan.cpp)

add_executable(01-zuobiaobianhuan_01 31/01-zuobiaobianhuan_01.cpp)
add_executable(02-zuobiaobianhuan_02 31/02-zuobiaobianhuan_02.cpp)

add_executable(01-cangkuguihua 32/01-cangkuguihua.cpp)
add_executable(02-yinzihuajian 32/02-yinzihuajian.cpp)

add_executable(01-cipintongji 33/01-cipintongji.cpp)
add_executable(02-xiangsidujisuan 33/02-xiangsidujisuan.cpp)

add_executable(01-juzhenchongsu_01 34/01-juzhenchongsu_01.cpp)
add_executable(02-juzhenchongsu_02 34/02-juzhenchongsu_02.cpp)
add_executable(03-wenbenfenci 34/03-wenbenfenci.cpp)
