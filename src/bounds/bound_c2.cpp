#include <iostream>
#include <assert.h>

// 最初の要素
int primes[] = {2, 3, 5, 7, 11, 13, 17};

int main(){
    int index =10;
    assert(index < static_cast<int>((sizeof(primes)/sizeof(primes[0]))));
    assert(index >= 0);
    std::cout << "The tneth prime is " << primes[index] << '\n';
}