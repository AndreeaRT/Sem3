#include <cassert>
#include "Rental.h"
#include <iostream>

using namespace std;

int main()
{
    Rental Ren;
    Kunde Kunde1(1, "Andreea"), Kunde2(2, "Emanuel"), Kunde3(3, "Iosua");
    Auto Auto1(1, "Smart", "Fortwo"), Auto2(2, "Mitsubishi", "Lancer EVO VII");
    
    assert(Ren.size_clients() == 0);

    Ren.add_client(Kunde1);
    Ren.add_client(Kunde2);
    Ren.add_client(Kunde3);

    assert(Ren.size_clients() == 3);

    Ren.update_client(Kunde1, "brutus");
    assert(Kunde1.get_name() == "brutus");

    Ren.delete_client(Kunde1);
    Ren.delete_client(Kunde2);
   
    assert(Ren.size_clients() == 1);

    Ren.add_auto(Auto1);
    Ren.add_auto(Auto2);

    assert(Ren.size_auto() == 2);

    Ren.delete_auto(Auto1);
    Ren.delete_auto(Auto2);

    assert(Ren.size_auto() == 0);



    cout << "Merge!";
}