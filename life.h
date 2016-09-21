const int maxrow = 20, maxcol = 60;    //  grid dimensions

void instructions();

/* This might have been used when creating stubs for Life's methods.
class Life {
public:
   void initialize();
   void print();
   void update();
};
*/

class Life {
public:
   void initialize();
   void print();
   void update();
private:
   int grid[maxrow + 2][maxcol + 2];  //  allows for two extra rows and columns
   int neighbor_count(int row, int col);
};
