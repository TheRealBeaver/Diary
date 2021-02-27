#include <iostream>
#include <fstream>
#include <string>


//GUI less code for now.
class Diary {
public:
	void start() {
		std::fstream users;
		users.open("users.txt");
		printf("File opened...");
		/*
		What do we do once the app is open?
		In the future it would be nice to have an actual database or a better way to manage logins with actual password protection
		*/
		if ((users.is_open())) {
			printf("file is open");

		}
		else {
			printf("\nElse statement");
			std::string lines;
			while (std::getline(users, lines)) {
				printf("Text: %s:", lines);
			}
			printf("\nLeaving");
		}

	}
};






int main()
{
	Diary diary;
	diary.start();
}

