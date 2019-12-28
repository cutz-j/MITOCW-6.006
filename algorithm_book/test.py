def cycle(a):

    g = iter(a)
    while 1:

        r = next(g, None)    # iteration이 끝나면 None을 반환
        if r is None:
            g = iter(a)
            continue

        yield r


def f(N, K):

    step = 1
    a = [n for n in range(1, N+1)]
    for n in cycle(a):

        if len(a) == 2:
            break

        if step%K == 0:
            a.remove(n)
            step = 1

        step += 1

    return a[0], a[1]


if __name__ == '__main__':
    N, K = list(map(int, input('initial data:\n').split()))
    print('\nanswer:\n{}'.format(f(N, K)))