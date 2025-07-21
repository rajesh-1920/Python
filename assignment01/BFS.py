import collections

def bfs(graph,root):
    visited=set()
    queue=collections.deque([root])
    print(root,end=' ')
    while queue:
        vertex=queue.popleft()
        visited.add(vertex)
        for child in graph[vertex]:
            if child not in visited:
                print(child,end=" ")
                queue.append(child)


if __name__=="__main__":         
    #graph={0:[1,2,3],1:[0,2],2:[0,1,4],3:[0],4:[2]}
    graph={'A':['B','C'],'B':['D','E'],'C':['F'],'D':[],'E':['F'],'F':[]}
    bfs(graph,'A')