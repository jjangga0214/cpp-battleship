# Battleship
Battleship 게임의 C++ 구현이다. 

## 빌드
**CMAKE** 를 사용한다.
##### Battleship 프로젝트에서의 참고 규칙
* `SET ( CMAKE_BUILD_TYPE Debug )` 또는 `SET ( CMAKE_BUILD_TYPE Release )` 로 설정해 컴파일 된 바이너리가 위치할 디렉토리를 만든다.  
* `${project-root}/Debug` 는 gitignore 되어 있고, `${project-root}/Release`는 snapshot 에 포함한다. 실험용 소스는 모두 Debug 디렉토리에 빌드해 ignore되게 하는 것을 원칙으로 한다.
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
```
$ ./Debug/battleship-0.0.1.out
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
