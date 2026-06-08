# CPP

C++ 기본 문법부터 객체지향, 연산자 오버로딩, 상속/다형성까지 챕터별로 정리한 개인 학습용 저장소입니다.

## 디렉토리 구조

```text
CPP/
├─ practice/              # 챕터별 실습 코드
│  ├─ CH02/               # C++ 시작, 입출력, 함수 기초
│  ├─ CH03/               # 자료형, 정수/실수, 형 변환
│  ├─ CH04/               # 배열, 문자열, 구조체, vector
│  ├─ CH05/               # 반복문, 중첩 반복, 패턴 출력
│  ├─ CH06/               # 조건문, 문자 처리, 파일 입출력
│  ├─ CH07/               # 함수, 포인터, 동적 배열, 재귀
│  ├─ CH08/               # 참조, 인라인, 기본 인자, 오버로딩, 템플릿
│  ├─ CH09/               # 분할 컴파일, 링키지, 네임스페이스, placement new
│  ├─ CH10/               # 클래스 설계 실습
│  ├─ CH11/               # 연산자 오버로딩
│  ├─ CH12/               # 동적 메모리와 복사 제어
│  ├─ CH13/               # 상속, 가상 함수, 추상 클래스
│  └─ CMakeLists.txt      # CH09 이후 CMake 빌드 구성
├─ build/                 # CMake 빌드 결과물
├─ .vscode/, .vs/         # IDE 설정
├─ .gitignore
├─ LICENSE
└─ README.md
```

## 챕터별 연습 내용

### `practice/CH02` C++ 시작/입출력/함수 기초

- `LAB_2.1.cpp`: `std::cout`으로 기본 문장 출력
- `LAB_2.2.cpp`: 변수 선언, 값 변경, 출력 흐름 연습
- `LAB_2.3.cpp`: 화씨를 섭씨로 변환하는 입출력 프로그램
- `LAB_2.4.cpp`: 두 정수를 입력받아 함수로 합 출력

### `practice/CH03` 자료형/정수/실수/형 변환

- `LAB_3.1.cpp`: `sizeof`로 정수형 자료 크기 확인
- `LAb_3.2.cpp`: `SHRT_MAX`, `INT_MAX`, 정수 오버플로 확인
- `LAB_3.3.cpp`: 십진수 입력값을 16진수/8진수로 출력
- `LAB_3.4.cpp`: ASCII 코드값을 문자와 대문자로 변환
- `LAB_3.5.cpp`: `float`/`double` 정밀도 차이 확인

### `practice/CH04` 배열/문자열/구조체 기초

- `LAB_4.1.cpp`: 배열 입력/출력, 총점/평균 계산
- `LAB_4.2.cpp`: C 문자열에서 숫자 시작 전까지 잘라내기(`char[]`, `strncpy`)
- `LAB_4.3.cpp`: `std::string`으로 이름/학번 입력 처리
- `LAB_4.4.cpp`: `struct student` + `std::array`로 학생 정보 출력
- `LAB_4.5.cpp`: 실습 틀 생성
- `LAB_4.6.cpp`: 동적 배열(`new[]`/`delete[]`)로 학생 정보 관리
- `LAB_4.7.cpp`: 포인터 연산으로 배열 원소 뒤집기
- `LAB_4.8.cpp`: `std::vector` 원소 접근(`at`), 크기/메모리 확인

### `practice/CH05` 반복문/패턴 출력

- `LAB_5.1.cpp`: `for` 반복으로 1^2 ~ 100^2 합 계산
- `LAB_5.2.cpp`: 중첩 반복으로 구구단 출력
- `LAB_5.3.cpp`: 포인터 순회 + `toupper`로 대문자 변환
- `LAB_5.4.cpp`: 실습 틀 생성
- `LAB_5.5.cpp`: 실습 틀 생성
- `LAB_5.6.cpp`: 6개 도시의 10년간 강수량 2차원 배열 출력
- `LAB_star.cpp`: 점(`.`)과 별(`*`)을 조합한 패턴 출력

### `practice/CH06` 조건/문자 처리/파일 입출력

- `LAB_6.1.cpp`: 업다운 숫자 맞추기 게임(`while`, 분기)
- `LAB_6.2.cpp`: 문자열 정규화(첫 글자 대문자, 나머지 소문자/비문자 공백 치환)
- `LAB_6.3.cpp`: 강수 데이터 파일 생성/저장(`ofstream`)
- `LAB_6.4.cpp`: 파일 읽기 출력(`ifstream`, 줄 단위 읽기)

### `practice/CH07` 함수와 포인터, 재귀

- `LAB_7.1.cpp`: 지수함수 급수 근사(테일러 합)와 오차 출력
- `LAB_7.2.cpp`: 배열 최대/최소/평균 함수 분리
- `LAB_7.3.cpp`: 2차원 배열 행 합 계산 후 동적 배열 반환
- `LAB_7.4.cpp`: 동적 문자열 생성 함수 구현(`new[]`)
- `LAB_7.5.cpp`: 직교좌표-극좌표 변환 함수(구조체 기반)
- `LAB_7.6.cpp`: 재귀로 1부터 n까지 합 계산

### `practice/CH08` 함수 심화

- `LAB_8.1.cpp`: `inline` 함수로 세제곱 합 계산
- `LAB_8.2.cpp`: 참조/포인터/값 전달 방식의 swap 동작과 주소 비교
- `LAB_8.3.cpp`: 참조 전달 기반 좌표 변환 함수
- `LAB_8.4.cpp`: 기본 인자 함수(`sum(int n = 100)`) 사용
- `LAB_8.5.cpp`: `int`/`double` 절댓값 함수 오버로딩
- `LAB_8.6.cpp`: 함수 템플릿 + 사용자 정의 타입(복소수 구조체) 특수화

### `practice/CH09` 분할 컴파일/링키지/네임스페이스/메모리 배치

- `LAB_9.1/`: 헤더/구현 분리, 참조 반환 함수(`accumulate`)로 구조체 누적
- `LAB_9.2/`: 외부/내부 링키지(`extern`, `static`)와 심볼 주소 비교
- `LAB_9.4.cpp`: placement new로 지정 버퍼에 객체 생성
- `LAB_9.5/`: `pers`, `debts` 네임스페이스 분리와 사용 범위 제어

### `practice/CH10` 클래스 설계 실습(`Student`)

- `LAB_10.2/`: `Student` 클래스, `enum class Status`, GPA/상태 갱신과 출력 포맷
- `LAB_10.3/`: 학기별 수강 내역 저장, 문자 등급을 GPA로 변환해 평균 갱신
- `LAB_10.4/`: `MAX_LECTURES` 상수, 다수 학생 배열, 최고 GPA 학생 탐색(`topGPA`)

### `practice/CH11` 연산자 오버로딩(`MyComplex`)

- `mycomplex.h`, `mycomplex.cpp`: 복소수 클래스, `+`, `-`, `*`, `<<`, friend 연산자 구현
- `mycomplex_test.cpp`: 사칙 연산, 스칼라 곱, 크기(magnitude) 테스트

### `practice/CH12` 동적 메모리/복사 제어/리팩터링

- `LAB_12.1/`: `char*` 멤버를 가진 `Cow` 클래스(복사 생성자/대입 연산자/소멸자)
- `LAB_12.1_refactor/`: `std::string` 기반으로 리팩터링해 Rule of Three 부담 완화
- `LAB_12.2/`: 커스텀 `String` 클래스 구현(복사/대입/연결/입출력/대소문자 변환)

### `practice/CH13` 상속/가상 함수/추상 클래스

- `LAB_13.2/`: `Animal` 기반 클래스와 `Cow`, `Cat`, `Dog` 파생 클래스의 가상 함수 오버라이딩
- `LAB_13.3/`: 순수 가상 함수 `area()`를 가진 `Diagram` 추상 클래스와 도형별 면적 계산

## 빌드 메모

현재 CMake 구성은 `practice/CMakeLists.txt` 기준으로 `CH09`부터 `CH13`까지 등록되어 있습니다.

```bash
cmake -S practice -B build
cmake --build build
```

`CH02`~`CH08`은 단일 `.cpp` 파일 중심의 기초 실습이라 필요할 때 개별 파일을 직접 컴파일하면 됩니다.

