using namespace std;
bool numeroprimo(int n, int i) {
    int s = 0;
    if (i < 2)
        return true;
        s = (n % i);

    if (s == 0)
        return false;
        else
        s = numeroprimo(n, i - 1);

}
