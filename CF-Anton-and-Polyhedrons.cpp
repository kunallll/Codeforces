#include <iostream>
#include <string>

using namespace std;

int main() {
    int faces = 0, n;
    cin >> n;

    while (n--) {
        string polyhedron;
        cin >> polyhedron;

        if (polyhedron == "Tetrahedron") faces += 4;
        else if (polyhedron == "Cube") faces += 6;
        else if (polyhedron == "Octahedron") faces += 8;
        else if (polyhedron == "Dodecahedron") faces += 12;
        else if (polyhedron == "Icosahedron") faces += 20;
    }

    cout << faces;
}