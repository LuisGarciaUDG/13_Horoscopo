/* programa_13 horoscopo
estructura selectiva múltiple
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 17 de febrero del 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
int opcion;
    system ("color 1c");
	system ("cls");
	cout <<"\n Horoscopos \n\n";
	cout <<"\n  1.- Aries      ";
	cout <<"\n  2.- Tauro      ";
	cout <<"\n  3.- Geminis    ";
	cout <<"\n  4.- Cancer     ";
	cout <<"\n  5.- Leo        ";
    cout <<"\n  6.- Virgo      ";
	cout <<"\n  7.- Libra      ";
	cout <<"\n  8.- Escorpion  ";
	cout <<"\n  9.- Sagitario  ";
	cout <<"\n 10.- Capricornio";
    cout <<"\n 11.- Acuario    ";
	cout <<"\n 12.- Picis      ";
	cout <<"\n 13.- Salir      ";
	cout <<"\n\n Opcion: ";
	cin>>opcion;

	switch (opcion)
	{
		case 1:{
		    system ("cls");
		    cout<<"\n\t Aries \n\n";
            cout<<"\n\t Color:                 Verde";
            cout<<"\n\t Numero de la suerte:   2";
            cout<<"\n\t Piedra:                Cuarzo";
            cout<<"\n\t Planeta:               Saturno";
            cout<<"\n\t Consejos/predicciones: Precavido en las finanzas \n\n";
            system ("pause");
            return main ();
		}break;

		case 2:{
            system ("cls");
		    cout<<"\n\t Tauro \n\n";
            cout<<"\n\t Color:                 Azul";
            cout<<"\n\t Numero de la suerte:   35";
            cout<<"\n\t Piedra:                Opalina";
            cout<<"\n\t Planeta:               Venus";
            cout<<"\n\t Consejos/predicciones: Nuevos proyectos \n\n";
            system ("pause");
            return main ();
        }break;

	    case 3:{
            system ("cls");
		    cout<<"\n\t Geminis \n\n";
            cout<<"\n\t Color:                 Rojo";
            cout<<"\n\t Numero de la suerte:   89";
            cout<<"\n\t Piedra:                Zafiro";
            cout<<"\n\t Planeta:               Marte";
            cout<<"\n\t Consejos/predicciones: Un nuevo amor en puerta \n\n";
            system ("pause");
            return main ();
	    }break;

	    case 4:{
            system ("cls");
		    cout<<"\n\t Cancer \n\n";
            cout<<"\n\t Color:                 Verde";
            cout<<"\n\t Numero de la suerte:   42";
            cout<<"\n\t Piedra:                Esmeralda";
            cout<<"\n\t Planeta:               Mercurio";
            cout<<"\n\t Consejos/predicciones: Nuevos negocios \n\n";
            system ("pause");
            return main ();
    	}break;

    	case 5:{
            system ("cls");
		    cout<<"\n\t Leo \n\n";
            cout<<"\n\t Color:                 Azul marino";
            cout<<"\n\t Numero de la suerte:   67";
            cout<<"\n\t Piedra:                Perla";
            cout<<"\n\t Planeta:               Pluton";
            cout<<"\n\t Consejos/predicciones: Reencuentros familiares \n\n";
            system ("pause");
            return main ();
		}break;

		case 6:{
            system ("cls");
		    cout<<"\n\t Virgo \n\n";
            cout<<"\n\t Color:                 Morado";
            cout<<"\n\t Numero de la suerte:   52";
            cout<<"\n\t Piedra:                Onix";
            cout<<"\n\t Planeta:               Jupiter";
            cout<<"\n\t Consejos/predicciones: Suerte en el azar \n\n";
            system ("pause");
            return main ();
    	}break;

	    case 7:{
            system ("cls");
		    cout<<"\n\t Libra \n\n";
            cout<<"\n\t Color:                 Magenta";
            cout<<"\n\t Numero de la suerte:   85";
            cout<<"\n\t Piedra:                Rubi";
            cout<<"\n\t Planeta:               Neptuno";
            cout<<"\n\t Consejos/predicciones: Ascenso en el trabajo \n\n";
            system ("pause");
            return main ();
	    }break;

	    case 8:{
            system ("cls");
		    cout<<"\n\t Escorpion \n\n";
            cout<<"\n\t Color:                 Amarillo";
            cout<<"\n\t Numero de la suerte:   79";
            cout<<"\n\t Piedra:                Diamante";
            cout<<"\n\t Planeta:               Jupiter";
            cout<<"\n\t Consejos/predicciones: Cambio de residencia \n\n";
            system ("pause");
            return main ();
    	}break;

    	case 9:{
    	system ("cls");
		    cout<<"\n\t Sagitario \n\n";
            cout<<"\n\t Color:                 Rojo";
            cout<<"\n\t Numero de la suerte:   100";
            cout<<"\n\t Piedra:                Oro";
            cout<<"\n\t Planeta:               Saturno";
            cout<<"\n\t Consejos/predicciones: Reencuentros con amigos \n\n";
            system ("pause");
            return main ();
		}break;

		case 10:{
            system ("cls");
		    cout<<"\n\t Capricornio \n\n";
            cout<<"\n\t Color:                 Azul Cielo ";
            cout<<"\n\t Numero de la suerte:   84";
            cout<<"\n\t Piedra:                Onix";
            cout<<"\n\t Planeta:               Marte";
            cout<<"\n\t Consejos/predicciones: Oportunidades academicas \n\n";
            system ("pause");
            return main ();
    	}break;

	    case 11:{
	    system ("cls");
		    cout<<"\n\t Acuario \n\n";
            cout<<"\n\t Color:                 Verde agua";
            cout<<"\n\t Numero de la suerte:   73";
            cout<<"\n\t Piedra:                esmeralda";
            cout<<"\n\t Planeta:               Urano";
            cout<<"\n\t Consejos/predicciones: Nuevos horizontes en las finanzas \n\n";
            system ("pause");
            return main ();
	    }break;

	    case 12:{
            system ("cls");
		    cout<<"\n\t Picis \n\n";
            cout<<"\n\t Color:                 Amarillo";
            cout<<"\n\t Numero de la suerte:   92";
            cout<<"\n\t Piedra:                Zafiro";
            cout<<"\n\t Planeta:               Venus";
            cout<<"\n\t Consejos/predicciones: Oportunidad de negocios \n\n";
            system ("pause");
            return main ();
    	}break;

    	case 13:{cout<<"\n\t Ha elegido salir, hasta pronto! \n\n";
    	system ("pause");
    	}break;

	    default:{cout<<"\n\t Error, opcion inexistente \n\n";
        system ("pause");
        return main ();
        }
    }
    return 0;
}
