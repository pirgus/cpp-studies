// angry ducks

#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double height;
    double angle, vel;
    int n_att, p1, p2;

    double g = 9.80665;
    double pi = 3.14159;
    double v0x, v0y, t, alcance, a;
    std::cin >> height;
    std::cin >> p1 >> p2;
    std::cin >> n_att;
    std::cin >> angle >> vel;
    while(!std::cin.eof()){
        double rad = angle * (pi/180.0);
        // a partir dessas informacoes, 
        // calcular se o ponto final da trajetoria alcanca o objtv
        v0x = vel * cos(rad);
        v0y = vel * sin(rad);
        a = -g / 2.0;
        // std::cout << "primeira raiz: " << ((-v0y + sqrt(pow(v0y, 2) - (4 * a * height))) / (2 * a)) << std::endl;
        // std::cout << "segunda raiz: " << ((-v0y - sqrt(pow(v0y, 2) - (4 * a * height))) / (2 * a)) << std::endl;
        double delta = pow(v0y, 2) - 4 * a * height;
        if(delta < 0){
            std::cout << "Erro: delta negativo\n";
            return 1;
        }
        double t1 = (-v0y + sqrt(delta)) / (2 * a);
        double t2 = (-v0y - sqrt(delta)) / (2 * a);
        t = (t1 > 0) ? t1 : t2;

        double x = v0x * t;

        if(x >= p1 && x <= p2){
            std::cout << std::setprecision(5) << std::fixed << x << " -> DUCK\n"; 
        }
        else{
            std::cout << std::setprecision(5) << std::fixed << x << " -> NUCK\n"; 
        }
        std::cin >> angle >> vel;

    }
}