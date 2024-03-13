#include "insertion_sort.hpp"

int main(){
	int n;
	std::cin>>n;
    std::vector<int> a(n);
    for (int i =0;i <n; i++){
        std::cin>>a[i];
    }
    InsertionSort(n,a);
    for(int =0;i <0;i++){
        std::cout<<a[i]<<" ";
    }
}
