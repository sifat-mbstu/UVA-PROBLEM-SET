#include <bits/stdc++.h>
using namespace std;

inline void tab(int t) { while(t--) putchar('\t'); }
const string path = "H:/UVa/indices/v"; // local storage

int main()
{
  // Caution: v17 & v131 are not completed
  for(int vol=1, t=0; vol<=17; vol++) {
    string s = path + to_string(vol) + string(".html");
    freopen(s.c_str(), "w", stdout);

    tab(t);   printf("<html>\n");
    tab(++t); printf("<head>\n");
    tab(++t); printf("<title> Volume %d </title>\n", vol);
    tab(t);   printf("<link rel=\"icon\" type=\"image/icon\" href=\"../utilities/icon.ico\"/>\n");
    tab(t);   printf("<style type=\"text/css\">\n");
    tab(++t); printf("a { color: black; text-decoration: none; font-weight: bold; line-height: 1.125em; }\n");
    tab(t);   printf("body { background: url(\"../utilities/back.jpeg\") fixed; }\n");
    tab(t);   printf("td { text-align: center; }\n");
    tab(t);   printf("a:hover { color: red; text-shadow: 1px 1px 1px lime; font-size: large; font-family: Ubuntu; }\n");
    tab(t);   printf("a:active { color: blue; }\n");
    tab(--t); printf("</style>\n");
    tab(--t); printf("<head>\n\n");

    tab(t);   printf("<body style=\"font-family:Ubuntu Mono; text-align:center\">\n");
    tab(++t); printf("<h1> <a style=\"text-shadow: 4px 4px 8px blue; color: rgb(41, 49, 52); font-size: 100; font-family: Ubuntu;\" href=\"../index.html\"> UVa </a> </h1>\n");
    tab(t);   printf("<h1 style=\"text-shadow: 1px 1px 4px blue;\"> Volume %d </h1><br/>\n", vol);

    tab(t);   printf("<table align=\"center\" width=\"350px\">\n");
    tab(++t); printf("<tr>\n");
    ++t;
    for(int i=1, j=100*vol; i<=4; i++) {
      tab(t); printf("<td>\n");
      for(t++; j<100*vol+i*25; j++) {
        tab(t); printf("<a title=\"%d\" href=\"../data/v%d/%d.pdf\" target=\"_blank\">%d</a> <br/>\n", j, vol, j, j);
      }
      tab(--t); printf("</td>\n");
      if(i < 4) { tab(t); printf("<td width=\"25px\"></td>\n"); }
    }
    tab(--t); printf("</tr>\n");
    tab(--t); printf("</table>\n");

    tab(--t); printf("</body>\n");
    tab(--t); printf("</html>\n");
  }

  return 0;
}
