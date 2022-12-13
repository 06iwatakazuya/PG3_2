#include <stdlib.h>
#include <list>
#include <iterator>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	list<const char*>Station = { "Osaki", "Gotanda", "Meguro", "Ebisu", "Shibuya", "Harajuku", "Yoyogi", "Shinjuku",
								"Shin-Okubo", "Takadanobaba", "Mejiro", "Ikebukuro", "Otsuka", "Sugamo", "Komagome",
								"Tabata", "Nippori", "Uguisudani", "Ueno", "Okachimachi", "Akihabara", "Kanda",
								"Tokyo", "Yurakucho", "Shimbashi", "Hamamatsucho", "Tamachi", "Shinagawa" };

	cout << "1970”N\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "Nippori") == 0)
		{
			itr = Station.insert(itr, "Nishinippori");
			itr++;
		}
	}

	cout << "\n2019”N\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}

	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (strcmp(*itr, "Shinagawa") == 0)
		{
			itr = Station.insert(itr, "Takanawa Gateway");
			itr++;
		}
	}

	cout << "\n2022”N\n";
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		printf("%s\n", *itr);
	}
	return 0;
}