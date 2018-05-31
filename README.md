# Battleship
Battleship 게임의 C++ 구현이다. 

## 디렉토리 구조
* Release : release 용 바이너리 파일들이 위치한다.
* doc : 프로젝트 설명 문서가 위치한다. 
* include : 모든 header 파일이 위치한다.
* lib : 정적 라이브러리가 위치한다.
* ref : Battleship game 을 만들기 위해서 받은 기반 자료이다.
* spike : gitignore 되어 있다. 순간 순간 떠오른 아이디어나 휘발성 높은 테스트를 작성한다.
* src : _main.cpp_ 을 제외한 source 파일(`.cpp`)이 위치한다. _main.cpp_ 은 프로젝트 루트 바로 아래에 위치한다.


## 의존성 
* ncurses
  * 우분투
  ```
  $ sudo apt-get install libncurses-dev
  ```

## 빌드
**CMAKE** 를 사용한다.
##### Battleship 프로젝트에서의 참고 규칙
* `SET ( CMAKE_BUILD_TYPE Debug )` 또는 `SET ( CMAKE_BUILD_TYPE Release )` 로 설정해 컴파일 된 바이너리가 위치할 디렉토리를 만든다.  
* `Debug` 디렉토리는 gitignore 되어 있다. 따라서 실험용 소스는 모두 Debug 디렉토리에 빌드해 ignore되게 하는 것을 원칙으로 한다. `Release` 디렉토리의 파일은 snapshot 에 포함한다. 
* `SET ( PROJECT_VERSION 0.0.1 )` 에서 숫자를 바꾸어 버전을 조정해준다.

##### **CMAKE**로 `Makefile` 만들기
```
$ cmake CMakeLists.txt
```
##### `Makefile`로 컴파일하기
```
$ make
```
##### 실행하기 예시
디렉토리는 상황에 알맞게 _Debug_ 또는 _Release_ 를 사용한다. 버전은 매번 달라지니 알맞게 사용한다.  
```
$ ./Debug/battleship-0.0.1.out
```

## git branch 전략 
* `master` : 기본, PR 받는 용도, 최초의 release 태그 이후는 배포 가능한 코드 
* `develop` : 개발 용도
* `feature-${X}` : 기능 'X'를 개발하는 용도 (예: _feature-display_ ). merge 후 delete 한다.
