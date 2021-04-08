#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int a=0,b=0,suma=0,cnt=1;
    char j=80;
    unsigned long long fact=1;
    float division=0;
    while(true){
        cout<<" 1.Problema 2\n 2.Problema 3\n 3.Problema 5\n 4.Problema 7\n 5.Problema 9\n 6.Problema 10\n 7.Problema 11\n 8.Problema 13\n 9.Problema 14\n 10.Problema16\n";
        cout << "ingrese el numero del problema entre 1-10 o 0 para salir: ";
        cin>> a;
        if(a==0) break;
        else if(a<0 || a>10) cout<<"No me toco ese problema"<<endl;
        else{
            switch(a){

            case 1:
                cout<<"### PROGRAMA QUE ORGANIZA EL DINERO DE MAYOR A MENOR ###"<<endl;
                cout<<"Ingrese el total de dinero: ";
                cin>>a;
                for(int i=0,valor=100000,n,billete;i<=9;i++){
                    n=i-3*(i/3);
                    if(i%3==0) valor/=10;
                    billete=(n*n-4*n+5)*valor;
                    cout<<billete<<" : "<<a/billete<<endl;
                    a=a%billete;


                }
                cout<<"Faltante: "<<a<<endl;
                break;

            case 2:{

                int Dia, Mes;
                cout<<"### PROGRAMA QUE DICE SI EL DIA Y MES SON VALIDOS ###"<<endl;
                cout << "Ingrese el dia: "; cin >> Dia; cout << endl ;
                cout << "Ingrese el numero del mes: "; cin >> Mes; cout << endl ;
                if (Mes > 12){
                    cout << "El mes ingresado no es valido ya que solo contamos con 12 meses (1-12). " << endl ;
                }
                else if(Dia > 31){
                    cout << "El dia ingresado es invalido, ningun mes cuenta con mas de 31 dias. " << endl ;
                }
                else if ((Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11) && (Dia >= 31)){
                    cout << Dia << "/" << Mes << " Es una fecha invalida." << endl ;
                }
                else if (Mes == 2 && Dia == 29){
                    cout << Dia << "/" << Mes << " Posiblemente anio bisiesto" << endl ;
                }
                else if (Mes == 2 && Dia > 29){
                    cout << Dia << "/" << Mes << " Es una fecha invalida. " << endl ;
                }
                else {
                    cout << Dia << "/" << Mes << " Es una fecha valida, " << endl ;
                }
                break;
            }

            case 3:{
                int Numero;
                cout<<"### PROGRAMA QUE DIBUJA UN ROMBO DEL TAMANIO QUE EL USUARIO ELIJA ###"<<endl;
                cout << "Ingrese el tamanio del rombo: "; cin >> Numero; cout << endl ;
                while (Numero%2 == 0) {
                    cout << "Ingrese el tamanio del que desea que sea el rombo. Recuerde que debe ser un numero impar: "; cin >> Numero; cout << endl ;
                }
                Numero = (Numero / 2) + 1;
                for(int i=1; Numero-1>=i; i++){
                    for(int j=Numero; j>=i; j--){
                        cout << " " ;
                    }
                    for(int k=1; 2*i-1>=k;k++){
                        cout << "*" ;
                    }
                    cout << endl ;
                }
                for(int i=1; Numero>=i; i++){
                    for(int j=1; j<=i; j++){
                        cout << " " ;
                    }
                    for(int k=(2*Numero-1); 2*i-1<=k; k--){
                        cout << "*" ;
                    }
                    cout << endl ;
                }
                cout << endl ;
                break;
            }

            case 4:{
                int terminos,primerter=1 , segunter=1 , aux , suma = 0;
                cout << "### ESTE PROGRAMA SUMA TODOS LOS PARES MENORES QUE ESTAN EN LA SERIE FIBONACCI HASTA DONDE SE INDIQUE ###" << endl;
                cout << "Ingrese el limite de la serie fibonacci: " << endl;
                cin >> terminos;
                cout << "La serie Fibonacci: " << endl;
                for (int i = 1 ; i < terminos ; ++i){
                    if ((primerter % 2) == 0){
                        suma += primerter;
                    }
                    cout << primerter << ", ";
                    aux = primerter + segunter;
                    primerter = segunter;
                    segunter = aux;

                }
                cout << "El resultado de la suma es: : " << suma <<endl;

            }
                break;

            case 5:{
                int numero,longi,operacion=1,modu,suma=0;
                cout<<"### ESTE PROGRAMA IMPRIMI LA SUMA DE LOS COMPONENTES DE UN NUMERO AL CUADRADO INGRESADO POR EL USUARIO ###"<<endl;
                cout<<"Por favor ingrese un numero: "<<endl;
                cin>>numero;
                longi=sizeof(numero);
                for(int i=0;i<longi;i++){
                    modu=numero%10;
                    numero=numero/10;
                    for(int j=0;j<modu;j++){
                        operacion*=modu;
                    }
                    suma+=operacion;
                    operacion=1;
                }
                cout<<"El resultado de la suma es: "<<suma<<endl;

            }
                break;
            case 6:{
                cout<<"### PROGRAMA QUE HALLA EL N-ESIMO NUMERO PRIMO DE UN NUMERO INGRESADO ###"<<endl;
                cout<<"Ingrese un numero para hallar el n-esimo primo: ";
                cin>>a;
                cnt=1;
                for(int i=2;;i++){
                    int cnt2=0;
                    for(int j=2;j<=i/2;j++){
                        if(i%j==0){
                            cnt2++;
                            break;
                        }
                    }
                    if(cnt2<1) {
                        cnt++;
                        if(cnt==a+1){
                            suma=i;
                            cout<<suma<<endl;
                            break;

                        }
                    }
                }
            }
                a=0;
                cnt=1;
                suma=0;
                break;

            case 7:{
                int limit,k=1,cnt=0,regre=1,multiplo=0;
                cout<<"### ESTE PROGRAMA CALCULA EL m.cm ENTRE 1 Y EL NUMERO INGRESADO ###"<<endl;
                cout <<"Ingrese un numero: "<<endl;
                cin>>limit;
                bool es=true;
                int array_numeros[limit]={};
                for(int i=0;i<limit;i++){
                    array_numeros[i]=(i+1);
                }
                while(regre!=0){
                    multiplo=array_numeros[limit-1]*k;
                    for(int i=0;i<limit;i++){
                        if(multiplo%array_numeros[i]==0) cnt++;
                    }
                    if(cnt==limit)
                    {cout<<"El m.c.m es: "<<multiplo<<endl;
                        regre=0;
                    }
                    k++;
                    cnt=0;
                }
                cout<<"\n";
            }
                break;


            case 8:{

                int n,suma=0,divisores=0;
                cout<<"## ESTE PROGRAMA SUMA TODOS LOS NUMEROS PRIMOS HASTA EL NUMERO INDICADO POR EL USUARIO ###"<<endl;
                cout<<"escriba un numero: "<<endl;
                cin>>n;
                while(n<2){
                    cout<<"escriba un numero: "<<endl;
                    cin>>n;
                }
                if(n==2){
                    cout<<"El resultado de la suma es: 2"<<endl;
                }
                else{
                    for(int num=2;num<n;num++){
                        for(int divisor=1;divisor<num;divisor++){
                            if(num%divisor==0)divisores++;
                        }
                        if(divisores<2)suma+=num;
                        divisores=0;

                    }
                }


                cout<<"El resultado de la suma es: "<<suma<<endl;
            }
                break;
            case 9:{
                cout<<"### PROGRAMA QUE ENCUENTRA EL PALINDROMO MAS GRANDE DE MULTIPLICAR UN NUMERO DE 3 DIGITOS ###"<<endl;
                int Producto, revproducto, Reversa, Max, actuI, actuJ;
                Max = 0;
                for(int i=100; i<1000; i++){
                    for(int j=100; j<1000; j++){
                        Producto = i * j;
                        revproducto = Producto;
                        Reversa = 0;
                        while (revproducto > 0) {
                            Reversa = (Reversa * 10) + (revproducto % 10);
                            revproducto = revproducto / 10;
                        }
                        if((Reversa == Producto) && (Producto > Max)){
                            Max = Producto;
                            actuI = i;
                            actuJ = j;
                        }
                    }
                }
                cout << actuI << " * " << actuJ << " = " << Max << endl ;
                break;
            }
                break;

            case 10:{
                cout<<"### PROGRAMA QUE ENCUENTRA LA SEMILLA MAS GRANDE DE LA SERIE COLLATZ INGRESADO POR EL USUARIO ###"<<endl;
                int a=0,b=0;
                cout<<"ingrese un numero: ";
                cin>>suma;

                for(int i=1;i<=suma;i++){
                    fact=i;
                    cnt=1;
                    while(fact!=1){
                        cnt++;
                        if(cnt>b){
                            b=cnt;
                            a=i;
                        }
                        if(fact%2==0) fact=fact/2;
                        else fact=3*fact+1;
                    }
                }
                cout<<"la serie mas larga es de la semilla: "<<a<<" con  "<<b<<" terminos"<<endl;
                suma=0;
                fact=1;
                cnt=1;
                a=0;
                b=0;
            }
                break;

            }
        }




    }
    return 0;
}
