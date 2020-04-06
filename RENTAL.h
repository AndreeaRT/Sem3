#pragma once
#include <vector>
#include "Kunde.h"
#include "Auto.h"
#include "LKW.h"
#include "PKW.h"



class RENTAL
{
};

using namespace std;

class Rental {
private:
	vector<Auto> autos;
	vector<Kunde> clients;
public:
	Rental();

	int size_auto() { return autos.size(); }
	int size_clients() { return clients.size(); }

	void add_client(Kunde k);

	void delete_client(Kunde k);

	void update_client(Kunde& k, string new_name);

	void add_auto(Auto a);

	void delete_auto(Auto a);

	~Rental();

};