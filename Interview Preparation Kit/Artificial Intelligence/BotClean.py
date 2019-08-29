import math


def update_position(posr, posc, dirties):
    near_dirt = []
    for i in range(len(dirties)):
        res = math.sqrt(((dirties[i][0]-posr)**2)+((dirties[i][1]-posc)**2))
        near_dirt.append(res)
    return [x for (y,x) in  sorted(zip(near_dirt,dirties))]


def next_move(posr, posc, board):
    dirties = []
    for i in range(len(board)):
        for j in range(len(board[i])):
            if board[i][j] == 'd':
                dirties.append([i, j])
    next_dirt = update_position(posr, posc, dirties)
    if next_dirt[0][1] < posc :
        print("LEFT")
    elif next_dirt[0][1] > posc:
        print("RIGHT")
    elif next_dirt[0][0] < posr :
        print("UP")
    elif next_dirt[0][0] > posr:
        print("DOWN")
    else :
        print("CLEAN")


if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(5)]
    next_move(pos[0], pos[1], board)
