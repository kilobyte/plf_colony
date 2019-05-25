#include <stdio.h>
#include <plf_colony.h>
#include <string>

int main()
{
    plf::colony<int> k\u00F6ln;
    for (int i=99; i>=0; --i)
        k\u00F6ln.insert(i);

    k\u00F6ln.sort();

    for (auto c = k\u00F6ln.begin(); c!=k\u00F6ln.end(); c=k\u00F6ln.erase(c))
        printf(" %d", *c);
    printf("\n");

    return 0;
}
