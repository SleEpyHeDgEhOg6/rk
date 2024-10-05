//вариант 4(16 по списку)

#include <iostream>

using namespace std;

int main(){
    int n = 5; //количемство слагаемых
    double summa = 0; // будущая сумма
    double ter;
    std::cout<<"Первые :"<<n<<" слагаемые"<<std::endl;

    for (int i=1;i<=n;++i){
        ter=ter*i;
        std::cout<<ter<<std::endl;
        summa += ter; //Добавляем к сумме
    }
    std::cout<<"Сумма первых :"<<n<<" слагаемых = "<<summa<<std::endl;
    return 0;
}
