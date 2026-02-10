# cmake 버전 설정
cmake_minimum_required(VERSION 3.10)

# project( [프로젝트 이름] [진행 단계] [사용 언어 현재는 C와 CPP] )
project(LAB_9.1 VERSION 0.1.0 LANGUAGES C CXX)

# add_executable( [실행 파일의 이름] [소스 코드들] )
add_executable(LAB_9.1 file1.cpp file2.cpp)

# 윈도우 환경에서 실행 파일의 인코딩을 CP949(한글 터미널 규격)로 설정
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    add_compile_options(-fexec-charset=UTF-8)
    add_compile_options(-finput-charset=UTF-8)
endif()