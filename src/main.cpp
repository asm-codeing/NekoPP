#include <iostream>

/* std 네임스페이스 사용 */
using namespace std;

/* 전역 변수 */
string filepath;

/* main : Neko++의 인터프리터의 시작점입니다. */
int main(int argc, char *argv[]) {
  if (argc > 1) {
    filepath = (string)argv[1];
    cout << filepath << endl;
  } else {
    cout << "입력 파일이 설정되지 않았습니다." << endl;
  }

  return 0;
}