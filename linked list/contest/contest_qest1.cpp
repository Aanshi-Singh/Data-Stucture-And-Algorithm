#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
bool defeat(int monster_health, int intial_health, int red_pill, int green_pill){
    if(red_pill+intial_health > monster_health){
        return true;
    }
    else if(green_pill*intial_health > monster_health){
        return true;
    }

    return false;
}

int main() {

	int monster_health, intial_health, red_pill, green_pill;
    cin>>monster_health>>intial_health>>red_pill>>green_pill;
    cout<<defeat(monster_health, intial_health, red_pill, green_pill);
    
	return 0;
}
