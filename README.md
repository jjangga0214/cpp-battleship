# Battleship
Battleship 게임의 C++ 구현이다. 

## 빌드
**CMAKE** 를 사용한다.
* **CMAKE**로 `Makefile` 만들기
```
$ cmake CMakeLists.txt
```
* `Makefile`로 컴파일하기
```
$ make
```

## 의존성 
* ncurses
  * 우분투
  ```
  $ sudo apt-get install libncurses-dev
  ```
  
## git branch 전략
* `master` : 기본, PR 받는 용도, 최초의 release 태그 이후는 배포 가능한 코드 
* `develop` : 개발 용도
* `feature-${X}` : 기능 'X'를 개발하는 용도 (예: _feature-display_ ). merge 후 delete 한다.
