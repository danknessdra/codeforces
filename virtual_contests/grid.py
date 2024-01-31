from collections import deque

def solve():
    line = input().split()
    m, n = int(line[0]), int(line[1])
    grid = [[0 for _ in range(n)] for _ in range(m)]
    for i in range(m):
        grid_line = input()
        for j in range(n):
            grid[i][j] = int(grid_line[j])
    q = deque([(0, 0, grid[0][0])])
    visited = [[False for _ in range(n)] for _ in range(m)]
    reached = False
    moves = 0
    while q:
        size = len(q)
        for _ in range(size):
            i, j, length = q.popleft()
            if (i, j) == (m - 1, n - 1):
                reached = True
                break
            dirs = [[length, 0], [-length, 0], [0, length], [0, -length]]
            for I, J in dirs:
                di, dj = i + I, j + J
                if di in range(m) and dj in range(n) and not visited[di][dj]:
                    q.append((di, dj, grid[di][dj]))
                    visited[di][dj] = True
        if reached:
            break
        moves += 1

    print(-1) if not reached else print(moves)

solve()