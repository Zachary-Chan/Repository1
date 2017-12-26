#include <iostream>
#include <vector>
#include <algorithm>

const size_t number{5};

int main(){
    std::vector<int> a;

    std::cout << "Please Input 10 integers: " << std::endl;
    for(size_t i{}; i < number; i++){
        int temp{};
        std::cin >> temp;
        a.push_back(temp);
    }

    for(auto& i : a){
        i += 2;
    }
    std::sort(a.begin(), a.end());

    for(const auto& i : a){
        std::cout << i << '\t';
    }
    std::cout << std::endl;

    std::vector<int>::iterator it{std::find(a.begin(), a.end(), 3)};
    if(it == a.end()){
        std::cout << "No" << std::endl;
    }else{
        std::cout << *it << std::endl;
    }
}

