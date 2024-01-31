package virtual_contests.grid;
import java.util.*;
class grid {
    // USE BUFFERREADER/ BR READLINE
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int n, m;
        n = scnr.nextInt();
        m = scnr.nextInt();
        int[][] graph = new int[n][m];
        for(int i = 0; i < n; ++i) {
            String curRow = scnr.next();
            for (int j = 0; j < m; ++j) {
                graph[i][j] = curRow.charAt(j)-'0';
            }
        }
        Queue<int[]> q = new LinkedList<>();
        Queue<Integer> q1 = new LinkedList<>();
        q.offer(new int[] {0,0});
        q1.offer(graph[0][0]);
        int level = 0;
        ArrayList<int[]> directions = new ArrayList<>();
        directions.add(new int[]{1, 0});
        directions.add(new int[]{0, 1});
        directions.add(new int[]{-1, 0});
        directions.add(new int[]{0, -1});
        while(!q.isEmpty()) {
            int qSize = q.size();
            level++;
            for (int z = 0; z < qSize; ++z) {
                int[] cur = q.poll();
                int i = cur[0];
                int j = cur[1];
                int length = q1.poll();
                if (i == n - 1 && j == m - 1) {
                    System.out.println(level);
                    return;
                }
                for (int p = 0; p < directions.size(); ++p) {
                    int[] curDir = directions.get(p);
                    int inew = i + (curDir[0] * length);
                    int jnew = j + (curDir[1] * length);
                    if (inew >= 0 && inew < n && jnew >= 0 && jnew < m && graph[inew][jnew] != -1) {
                        if (inew == n - 1 && jnew == m - 1) {
                            System.out.println(level);
                            return;
                        }
                        q.offer(new int[] {inew, jnew});
                        q1.offer(graph[inew][jnew]);
                        graph[i][j] = -1;
                    }
                }
            }
        }
        System.out.print(-1);
    }
}
