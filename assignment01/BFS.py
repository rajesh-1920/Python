import collections

def bfs(graph,root):
    visited=set()
    visited.add(root)
    queue=collections.deque([root])

    while queue:
        vertex=queue.popleft()
        visited.add(vertex)
        for child in graph[vertex]:
            if child not in visited:
                queue.append(child)

    print(visited)

if __name__=="__main__":         
    graph={0:[1,2,3],1:[0,2],2:[0,1,4],3:[0],4:[2]}
    bfs(graph,0)