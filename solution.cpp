//
// Created by Kylian Lee on 2021/09/23.
//

#include <iostream>

using namespace std;

int main(){
  int range, cnt = 0;
  cin >> range;
  for (int i = 1; i <= range; ++i) {
    if (i < 100) {
      cnt++;
      continue;
    }
    int temp = i;
    int f_num = temp % 10;
    temp /= 10;
    int s_num = temp % 10;
    int diff = f_num - s_num;
    bool flag = true;
    temp /= 10;
    while(temp){
      int t_num = temp % 10;
      int new_diff = s_num - t_num;
      temp /= 10;
      if(diff != new_diff){
        flag = false;
        break;
      }
    }
    if(flag)
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}