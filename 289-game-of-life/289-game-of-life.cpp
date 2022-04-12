class Solution {
public:
    int maxX, maxY;
    int checkNeighbours(vector<vector<int>>& board, int x, int y) {
        int res = -board[y][x];
        for (int cy = max(0, y - 1), lmtY = min(maxY, y + 2); cy < lmtY; cy++) {
            for (int cx = max(0, x - 1), lmtX = min(maxX, x + 2); cx < lmtX; cx++) res += board[cy][cx];
        }
        return res;
    }
    void gameOfLife(vector<vector<int>>& board) {
        maxY = board.size(), maxX = board[0].size();
        int neighbours[maxY][maxX];
        for (int y = 0; y < maxY; y++) {
            for (int x = 0; x < maxX; x++) {
                neighbours[y][x] = checkNeighbours(board, x, y);
            }
        }
        for (int y = 0; y < maxY; y++) {
            for (int x = 0, currCell, currNeighbours; x < maxX; x++) {
                currCell = board[y][x];
                currNeighbours = neighbours[y][x];
                board[y][x] = !currCell && currNeighbours == 3 ||
                    currCell && currNeighbours > 1 && currNeighbours < 4;
            }
        }
    }
};
