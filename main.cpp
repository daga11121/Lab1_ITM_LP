#include <iostream>
#include <math.h>

using namespace std;

#define ALPHA 1.24
#define pi 3.14159265358979323846
unsigned int var;
float x,y, vx = 10, vy = 15;
float g = 0;
void calcParabolico(void);
void print_results(void);
void otros_calculos(void);



void calcParabolico(void)
{
    float y0 = 5,v0 = 6,t = 5,vx0, vy0;

    vx0 = v0 * cos(ALPHA);
    vy0 = v0 * sin(ALPHA);

    vx = vx0;
    vy = vy0-g*t;

    x = vx*t;
    y = (vy0*t)+y0-(g*pow(t,2)/2);
}

void print_results(void)
{
    std::cout<<"Los resultados del calculo parabolico son: "<<std::endl;
    std::cout<<"Velocidad en x: "<<vx<<", ";
    std::cout<<"Velocidad en y: "<<vy<<", ";
    std::cout<<"Posicion en x: "<<x<<", ";
    std::cout<<"Posicion en y: "<<y<<std::endl;
}

void otros_calculos(void)
{
    /* Serie simple (1/[(x^2) + (x+1)]) para x entre 1 y 199*/
    for(int x=1; x<200; x++){
       double z= 1/(pow(x,2)+(x+1));
    cout<<"su numero "<<z<<endl;
        //Agregue aqui la formula
   }
    /* Volumen de la esfera */
      //Agregue aqui la formula
    double VE=(4/3)*pi*pow(3,3);
    cout<<"volumen de una esfera de radio 3"<<VE<<endl;
    
    
    /* Raices de la ecuacion (3*x^2) + (5*x) + 8  = 0 */
      //Agregue aqui la formula
      int a = 3;
      int b = 5;
      int c = 8;
      
    float race= sqrt(pow(b,2)-(4*a*c));
    float x1=(-b+race)/(2*a);
    float x2=(-b-race)/(2*a);
    
    cout<<"raiz 1 es igual a "<<x1<<endl;
    cout<<"raiz 2 es igual a "<<x2<<endl;
    /* Impedancia tipica de una linea de transmision
     * Z0 = [(R+wL)/(G+wC)]^(1/2)
     * w = frecuencia angular = 2*pi*f, f = 10kHz */
        //Agregue aqui la formula
        float w = 2*pi*10*pow(10,3);
        int R = 500;
        float L = 0.0001;
        float Ca = 0.001;
        int G = 5;
    float Z0 = ((R+w*L)/sqrt(G+w*Ca));
    
    cout<<"impedancia "<<Z0<<endl;
    /* Constante de fase de una fibra optica
     * B = {[((a^2)-(b^2))*c+(b^2)]^(1/2)}*betacero
     * betacero = w*(mu*epsi)^(1/2)
     * w = frecuencia angular = 2*pi*f, f = 5GHz
     * mu = 0.00000125664
     * epsi = 0.00000000000088542  */
    int A = 20;
    int B = 10;
    int C = 30;
    float wa = 2*pi*5*pow(10,9);
    float mu = 0.00000125664;
    float epsi = 0.00000000000088542;
    float betacero = wa*sqrt(mu*epsi);
    float fibra= (sqrt((pow(A,2)-pow(B,2))*C+pow(B,2)))*betacero;
    
       cout<<"fase de una fibra optica "<<fibra<<endl;
}
int main()
{
    unsigned short int des3 = -5;

    var = 100;

    var += des3;

    //Calculando los parametros en la Tierra con g = 9.8 m/s*s
    g=9.8;
    calcParabolico();
    print_results();

    //Calculando los parametros en la Luna con g = 1.62 m/s*s
    g=1.62;
    calcParabolico();
    print_results();
    
    otros_calculos();

    return 0;
}
