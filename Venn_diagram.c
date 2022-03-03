#include <stdio.h>

int main(){
    for(int i = 0 ; i <= 150 ; i++){
        if(i % 3 == 0){
            if(i % 5 == 0){
                if(i % 7 == 0){
                    //one
                }else{
                    //two
                }
            }else if(i % 7 == 0){
                //three
            }else{
                //four
            }
        }else if(i % 5 == 0){
            if(i % 7 == 0){
                //five
            }else{
                //six
            }
        }else if(i % 7 == 0){
            //seven
        }else{
            //eight
            printf("%d ", i);
        }
    }
}
