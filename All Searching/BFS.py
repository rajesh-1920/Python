import collections

def bfs(graph,root):
    visited=[root]
    queue=collections.deque([root])
    print(root,end=' ')
    while queue:
        vertex=queue.popleft()
        for child in graph[vertex]:
            if child not in visited:
                print(child,end=' ')
                visited.append(child)
                queue.append(child)
    print(F'\n{visited}')


if __name__=="__main__":         
    graph={'A':['B','C'],'B':['D','E'],'C':['F'],'D':[],'E':['F'],'F':[]}
    #graph={0:[1,2,3],1:[0,2],2:[0,1,4],3:[0],4:[2]}
    bfs(graph,'A')







