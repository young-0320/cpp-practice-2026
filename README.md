# 70_CPP

C++ 문법과 객체지향 개념을 챕터별로 연습하는 개인 학습용 저장소입니다.

## 디렉토리 구조

```text
70_CPP/
├─ practice/      # 챕터별 실습 코드 (핵심)
├─ build/         # CMake 빌드 결과물
├─ .vscode/, .vs/ # IDE 설정
├─ LICENSE
└─ README.md
```

## 챕터별 연습 내용 (`practice/`)

- `CH04`: 배열/문자열/`std::array`/`std::vector` 기초, 포인터로 배열 다루기
- `CH05`: 반복문(`for`, 중첩 루프), 누적 계산, 패턴 출력(별 찍기), 문자 변환 기초
- `CH06`: 조건/반복 응용, `cctype` 기반 문자열 처리, 파일 입출력(`fstream`)
- `CH07`: 함수 분리, 배열/2차원 배열 인자 전달, 구조체 활용, 재귀 함수
- `CH08`: `inline`, 기본 인자(default argument), 함수 오버로딩, 참조/값 전달 비교
- `CH09`: 헤더-구현 분리, 다중 소스 파일 빌드, 저장 기간/링키지(`extern`, `static`), 네임스페이스, placement new
- `CH10`: `Student` 클래스 구현, `enum class`, 생성자/멤버 함수, 성적(GPA) 관리 로직
- `CH11`: `MyComplex` 클래스, 연산자 오버로딩(`+`, `-`, `*`, `<<`), friend 함수
- `CH12`: 동적 메모리와 복사 제어(복사 생성자/대입/소멸자), 문자열 클래스 직접 구현, 리팩터링 버전 비교

## 메모: 자주 쓰는 Git 명령

```bash
# 현재 디렉토리 기준 업로드
git add .
git commit -m "commit message"
git push

# 루트 기준 전체 추가
git add -A

# 상태 확인
git status

# 동기화
git pull
```
