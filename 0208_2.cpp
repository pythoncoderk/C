# include <iostream>

int main(){
  int x = 0;

  std::cout << "整数を入力";

  if (std::cin >> x){
    std::cout << "入力値は" << x << "です。" << std::endl;
  } else {
    std::cout << "不正" << std::endl;
  }
  return 0;
}