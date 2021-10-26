class Solution {
    private static int[] dx = {-1, 1, 0, 0,}, dy = {0, 0, -1, 1};
    public boolean exist(char[][] board, String word) {
        boolean[][] traveled = new boolean[board.length][board[0].length];
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                if(exists(board, i, j, word, 0, traveled)) return true;
            }
        }
        return false;
    }
    public boolean exists(char[][] board, int x, int y, String word, int ind, boolean[][] traveled){
        if(ind>=word.length()) return true;
        if(x<0||y<0||x>=board.length||y>=board[x].length) return false;
        if(traveled[x][y]) return false;
        if(board[x][y]!=word.charAt(ind)) return false;
        traveled[x][y]=true;
        for(int i = 0; i < 4; i++){
            if(exists(board, x+dx[i], y + dy[i], word, ind+1, traveled)) return true;
        }
        traveled[x][y] = false;
        return false;
    }
    
}
