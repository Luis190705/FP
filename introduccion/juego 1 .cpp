
	#include <iostream>

	int main()
	{
		srand(time(NULL)); // GENERAR SEMILLA
		
		int castigo = 0;
		int vida = 12;
		int premio = 0;
		
		std::cout << "vida inicial" << vida << std::endl;

		while (vida > 0)
		{
			//deducir uno vida
			vida--;

			std::cout << "costo de ciclo " << vida << std::endl;

			//castigo?
			castigo = rand() % 2;
			if (castigo==1)
			{
				vida = vida - 3;

				std::cout << "castigo " << vida << std::endl;

			}
			premio = rand() % 2;
			if (premio == 1)
			{
				vida = vida + 3;

				std::cout << "premio " << vida << std::endl;

			}

			std::cout << "vida despues de ciclo " << vida << std::endl;

		}

	}
