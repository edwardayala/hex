class Player{
public:
    int x,y;
    int neighbors[][];  // neighbors of x and y values
                        // 4 neighbors - 1: [x][y+1]
                        //             - 2: [x][y-1]
                        //             - 3: [x+1][y]
                        //             - 4: [x-1][y]
                        // or plus diag- 5: [x-1][y-1]
                        //             - 6: [x-1][y+1]
                        //             - 7: [x+1][y-1]
                        //             - 8: [x+1][y+1]

    void makeMove();
};
