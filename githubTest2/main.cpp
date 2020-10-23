//
//  main.cpp
//  githubTest2
//
//  Created by 조승기 on 2020/10/24.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int cnt_i;
    
    printf("Hello world!\n");
    printf("%s\n",argv[0]);
    for (cnt_i = 0; cnt_i<argc; cnt_i++) {
        printf("%s\n",argv[cnt_i]);
    }
    return 0;
}
