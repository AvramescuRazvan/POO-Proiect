#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <SFML/Network.hpp>
using namespace std;
void main()
{
	sf::IpAddress ip = sf::IpAddress::getLocalAddress();
	sf::TcpSocket socket;
	char mode;
	char buffer[2000];
	size_t received;
	string text = "Connected to Server ";

	sf::TcpListener listener;
	listener.listen(1234); //se conecteaza la portul 1234
	listener.accept(socket);	//asteapta un "Client" sa se conecteze la socket

	cout << text << std::endl;

	bool done = false;

	while (!done)
	{
		socket.receive(buffer, sizeof(buffer), received);   //Cerere de la client
			if (received > 0)
			{
				vector<string>sir;
				string value;
				for (int i = 0; i <= strlen(buffer); i++)
				{
					if (buffer[i] == '|' || buffer[i] == '\0')
					{
						sir.push_back(value);
						value = "";
						i++;
					}
					value += buffer[i];
				}
				//Prelucrare date
				text = "1";

				socket.send(text.c_str(), text.length() + 1); //Raspuns de la server
			}
	}
	system("pause");
}