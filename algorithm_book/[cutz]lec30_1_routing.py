import heapq
import sys
import math

inf = sys.maxsize

def dijkstra(graph, start):
    # 시작 정점에서 각 정점까지의 거리를 저장할 딕셔너리를 생성하고, 무한대로 초기화합니다.
    distances = {vertex: inf for vertex in graph}
    distances[start] = 0
    
    # 모든 정점이 저장될 큐를 생성합니다.
    queue = []
    for vertex, distance in distances.items():
        # 파이썬의 heapq 모듈을 사용하여 큐를 우선순위 큐로 저장합니다.
        heapq.heappush(queue, [vertex, distance])
    
    # 큐의 저장된 모든 정점에 대해서
    while queue:
        
        # 큐에서 정점을 하나씩 꺼내 인접한 정점들의 가중치를 모두 확인하여 업데이트합니다.
        current_vertex, current_distance = heapq.heappop(queue)
        for adjacent, weight in graph[current_vertex].items():
            distance = distances[current_vertex] + weight
            # 만약 시작 정점에서 인접 정점으로 바로 가는 것보다 현재 정점을 통해 가는 것이 더 가까울 경우에는
            if distance < distances[adjacent]:
                # 거리를 업데이트합니다.
                distances[adjacent] = distance
    
    return distances


#rl = lambda : sys.stdin.readline()
#for _ in range(int(rl())):
#    n, m = map(int, rl().split())
#    graph = [[0]*n]*n
#        
#    for i_ in range(m):
#        a, b, c = map(int, rl().split())
#            
#        if b in graph[a]:
#            graph[a][b] = math.log(min(graph[a][b], c))
#        else:
#            graph[a][b]= math.log(c)
#    
#    dist, prev = dijkstra(graph, n)
#    for d in dist[1:]:
#        print(d if d != inf else "INF")
#        
    
t = input()
for _ in range(int(t)):
    n, m = map(int, input().split())
    graph = [{} for _ in range(n + 1)]
    for i_ in range(m):
        a, b, c = map(float, input().split())
        a, b = int(a), int(b)
        if b in graph[a]:
            graph[a][b] = math.log(min(graph[a][b], c))
        else:
            graph[a][b] = math.log(c)
            
    dist, prev = dijkstra(graph, n)
    





