#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
	if (Difficulty == 1)
	{
		std::wcout << "TTTTTTTTTTTTTTTTTTTTTTT                     iiii                     lllllll                          XXXXXXX       XXXXXXX             GGGGGGGGGGGGG															  ";
		std::wcout << "T:::::::::::::::::::::T                    i::::i                    l:::::l                          X:::::X       X:::::X          GGG::::::::::::G                                                              \n";
		std::wcout << "T:::::::::::::::::::::T                     iiii                     l:::::l                          X:::::X       X:::::X        GG:::::::::::::::G                                                              \n";
		std::wcout << "T:::::TT:::::::TT:::::T                                              l:::::l                          X::::::X     X::::::X       G:::::GGGGGGGG::::G                                                              \n";
		std::wcout << "TTTTTT  T:::::T  TTTTTTrrrrr   rrrrrrrrr  iiiiiiippppp   ppppppppp    l::::l     eeeeeeeeeeee         XXX:::::X   X:::::XXX      G:::::G       GGGGGG  aaaaaaaaaaaaa      mmmmmmm    mmmmmmm       eeeeeeeeeeee    \n";
		std::wcout << "        T:::::T        r::::rrr:::::::::r i:::::ip::::ppp:::::::::p   l::::l   ee::::::::::::ee          X:::::X X:::::X        G:::::G                a::::::::::::a   mm:::::::m  m:::::::mm   ee::::::::::::ee  \n";
		std::wcout << "        T:::::T        r:::::::::::::::::r i::::ip:::::::::::::::::p  l::::l  e::::::eeeee:::::ee         X:::::X:::::X         G:::::G                aaaaaaaaa:::::a m::::::::::mm::::::::::m e::::::eeeee:::::ee\n";
		std::wcout << "        T:::::T        rr::::::rrrrr::::::ri::::ipp::::::ppppp::::::p l::::l e::::::e     e:::::e          X:::::::::X          G:::::G    GGGGGGGGGG           a::::a m::::::::::::::::::::::me::::::e     e:::::e\n";
		std::wcout << "        T:::::T         r:::::r     r:::::ri::::i p:::::p     p:::::p l::::l e:::::::eeeee::::::e          X:::::::::X          G:::::G    G::::::::G    aaaaaaa:::::a m:::::mmm::::::mmm:::::me:::::::eeeee::::::e\n";
		std::wcout << "        T:::::T         r:::::r     rrrrrrri::::i p:::::p     p:::::p l::::l e:::::::::::::::::e          X:::::X:::::X         G:::::G    GGGGG::::G  aa::::::::::::a m::::m   m::::m   m::::me:::::::::::::::::e \n";
		std::wcout << "        T:::::T         r:::::r            i::::i p:::::p     p:::::p l::::l e::::::eeeeeeeeeee          X:::::X X:::::X        G:::::G        G::::G a::::aaaa::::::a m::::m   m::::m   m::::me::::::eeeeeeeeeee  \n";
		std::wcout << "        T:::::T         r:::::r            i::::i p:::::p    p::::::p l::::l e:::::::e                XXX:::::X   X:::::XXX      G:::::G       G::::Ga::::a    a:::::a m::::m   m::::m   m::::me:::::::e           \n";
		std::wcout << "      TT:::::::TT       r:::::r           i::::::ip:::::ppppp:::::::pl::::::le::::::::e               X::::::X     X::::::X       G:::::GGGGGGGG::::Ga::::a    a:::::a m::::m   m::::m   m::::me::::::::e          \n";
		std::wcout << "      T:::::::::T       r:::::r           i::::::ip::::::::::::::::p l::::::l e::::::::eeeeeeee       X:::::X       X:::::X        GG:::::::::::::::Ga:::::aaaa::::::a m::::m   m::::m   m::::m e::::::::eeeeeeee  \n";
		std::wcout << "      T:::::::::T       r:::::r           i::::::ip::::::::::::::pp  l::::::l  ee:::::::::::::e       X:::::X       X:::::X          GGG::::::GGG:::G a::::::::::aa:::am::::m   m::::m   m::::m  ee:::::::::::::e  \n";
		std::wcout << "      T:::::::::T       r:::::r           i::::::ip::::::::::::::pp  l::::::l  ee:::::::::::::e       X:::::X       X:::::X          GGG::::::GGG:::G a::::::::::aa:::am::::m   m::::m   m::::m  ee:::::::::::::e  \n";
		std::wcout << "      TTTTTTTTTTT       rrrrrrr           iiiiiiiip::::::pppppppp    llllllll    eeeeeeeeeeeeee       XXXXXXX       XXXXXXX             GGGGGG   GGGG  aaaaaaaaaa  aaaammmmmm   mmmmmm   mmmmmm    eeeeeeeeeeeeee  \n";
		std::wcout << "                                                  p:::::p                                                                                                                                                          \n";
		std::wcout << "                                                  p:::::p                                                                                                                                                          \n";
		std::wcout << "                                                 p:::::::p                                                                                                                                                         \n";
		std::wcout << "                                                 p:::::::p                                                                                                                                                         \n";
		std::wcout << "                                                 p:::::::p                                                                                                                                                         \n";
		std::wcout << "                                                 ppppppppp																																						  \n";

		std::wcout << L"  _                     _ _															\n";
		std::wcout << L" | |                   | (_)														\n";
		std::wcout << L" | |     ___   __ _  __| |_ _ __   __ _    __ _  __ _ _ __ ___						\n";
		std::wcout << L" | |    / _ \\ / _` |/ _` | | '_ \\ / _` |  / _` |/ _` | '_ ` _ \\ / _ \\			\n";
		std::wcout << L" | |___| (_) | (_| | (_| | | | | | (_| | | (_| | (_| | | | | | |  __/_ _ _			\n";
		std::wcout << L" |______\\___/ \\__,_|\\__,_|_|_| |_|\\__, |  \\__, |\\__,_|_| |_| |_|\\___(_|_|_)	\n";
		std::wcout << L"                                   __/ |   __/ |									\n";
		std::wcout << L"                                  |___/   |___/										\n";
	}

	// Print introduction message
	std::cout << "\n\nYou are a hacker breaking into a level " << Difficulty;
	std::cout << " secure server room.\nYou need to enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
	// Print the art intro
	PrintIntroduction(Difficulty);

	// Declare 3 number code
	const int CodeA = rand() % Difficulty + Difficulty;
	const int CodeB = rand() % Difficulty + Difficulty;
	const int CodeC = rand() % Difficulty + Difficulty;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProd = CodeA * CodeB * CodeC;

	// Print sum and product
	std::cout << "\n[+] There are 3 numbers in the code.";
	std::cout << "\n[+] The codes are add-up to: " << CodeSum;
	std::cout << "\n[+] The codes multiply to give: " << CodeProd << std::endl;

	// Store player guess
	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;

	const int GuessSum = GuessA + GuessB + GuessC;
	const int GuessProd = GuessA * GuessB * GuessC;

	// Check if player guess is correct
	if (GuessSum == CodeSum && GuessProd == CodeProd)
	{
		std::cout << "\nYou breached the room!\n";
		return true;
	}
	else
	{
		if (Difficulty == 1)
		{
			std::cout << "\nYou failed! The alarm has been activated and cavalry is going after you. Make haste!\n";
		}
		else
		{
			std::cout << "\nCavalry is arriving. Come on!\n";
		}
		return false;
	}
}

int main()
{
	srand(time(NULL)); // Creates new random sequence based on time of day

	int LevelDifficulty = 1;
	const int MaxDifficulty = 4;

	while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels completed
	{
		bool bLevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear(); // Clears any errors
		std::cin.ignore(); // Discards the buffer

		if (bLevelComplete)
		{
			++LevelDifficulty; // Increase level difficulty
		}
	}
	std::cout << "\nCongratulations! You breached and got the intel you want!\n";
	std::cout << "\nTime to run away, hacker!\n";
	return 0;
}
