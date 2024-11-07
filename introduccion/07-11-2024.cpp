#include <iostream>

int main()
{
	int numMes = 0;
	std::cout << "num mes: ";
	std::cin >> numMes ;
	switch (numMes)
	{
	case 1:

		std::cout << "enero" << std::endl;
		break;

	case 2:
		std::cout << "febrero" << std::endl;
		break;

	case 3:
		std::cout << "marzo" << std::endl;
		break;
		
	case 4:
		std::cout << "abril" << std::endl;
		break;

	case 5:
		std::cout << "mayo" << std::endl;
		break;

	case 6:
		std::cout << "junio" << std::endl;
		break;

	case 7:
		std::cout << "julio" << std::endl;
		break;

	case 8:
		std::cout << "agosto" << std::endl;
		break;

	case 9:
		std::cout << "septiembre" << std::endl;
		break;

	case 10:
		std::cout << "octubre" << std::endl;
		break;

	case 11:
		std::cout << "noviembre" << std::endl;
		break;

	case 12:
		std::cout << "diciembre" << std::endl;
		break;
	default:
		std::cout << "Mes Invalido" << std::endl;

		break;
	}
}
