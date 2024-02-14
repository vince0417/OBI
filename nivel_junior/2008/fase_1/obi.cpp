//OBI
#include <iostream>

using namespace std;

int main() {
    int candidatos, pontos, aprovados = 0;

    cin >> candidatos >> pontos;

    for (int i = 0; i < candidatos; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        if (n1 + n2 >= pontos)
        {
            aprovados++;
        }
        
    }
    
    cout << aprovados << endl;

    return 0;
}
