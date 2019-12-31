using namespace std;

void initialize(int n)
{}

int k[1500];
int hasEdge(int a, int b)
{
    if (a > b)
    {
        return ++k[a] == a;
    }
    else
    {
        return ++k[b] == b;
    }
}