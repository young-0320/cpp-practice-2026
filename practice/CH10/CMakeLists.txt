# cmake 버전 설정
cmake_minimum_required(VERSION 3.10)

# project( [프로젝트 이름] [진행 단계] [사용 언어 현재는 C와 CPP] )
project(CH10 VERSION 0.1.0 LANGUAGES C CXX)

# add_executable( [실행 파일의 이름] [소스 코드들] )
add_executable(LAB10 student_test.cpp student.cpp)

