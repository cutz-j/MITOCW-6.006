class Heap(object):
    def __init__(self, a, b):
        self.min_heap = []
        self.max_heap = [1983]
        self.a = a
        self.b = b
        self.min_length = 0
        self.max_length = 1
        self.past = 1983
    
    def insert(self, value):
        self.past = value
        if value < self.max_heap[0]:
            self.max_insert(value)
        else:
            self.min_insert(value)
        
        # maxheap length는 항상 min heap보다 같거나 +1
        if self.max_length < self.min_length:
            del_value = self.min_delete()
            self.max_insert(del_value)
        # maxheap length가 min heap의 +1보다 크다면, min heap으로
        elif self.max_length > self.min_length+1:
            del_value = self.max_delete()
            self.min_insert(del_value)
    
    def min_insert(self, value):
            self.min_heap.append(value)
            self.min_length += 1
            i = self.min_length - 1 # last index
            while i > 0: # last index 까지
                parent = self.parent(i) # index i의 parent node
                if self.min_heap[i] < self.min_heap[parent]: # index i가 부모 노드보다 작다면 change
                    self.min_heap[i], self.min_heap[parent] = self.min_heap[parent], self.min_heap[i]
                    i = parent
                else: # 크다면 break
                    break
            
        
    def max_insert(self, value):
        self.max_length += 1
        self.max_heap.append(value)
        i = self.max_length - 1
        while i > 0:
            parent = self.parent(i)
            if self.max_heap[i] > self.max_heap[parent]:
                self.max_heap[i], self.max_heap[parent] = self.max_heap[parent], self.max_heap[i]
                i = parent
            else:
                break
            
    
    def min_delete(self):
        i = self.min_length - 1 # last index
        r = 0 # root index
        self.min_heap[r], self.min_heap[i] = self.min_heap[i], self.min_heap[r] # value change
        pop = self.min_heap.pop(i) # root value
        self.min_length -= 1
        self.min_heapify(0, self.min_length)
        return pop
            
    
    def max_delete(self):
        i = self.max_length - 1
        r = 0
        self.max_heap[r], self.max_heap[i] = self.max_heap[i], self.max_heap[r]
        pop = self.max_heap.pop(i)
        self.max_length -= 1
        self.max_heapify(0, self.max_length)
        return pop
    
        
    def parent(self, index):
        return int((index-1)/2)
    
    def left_child(self, index):
        return (2*index)+1
    
    def right_child(self, index):
        return (2*index)+2
    
    def next_(self):
        return ((self.past*self.a)+self.b) % 20090711
    
    def median(self):
        return self.max_heap[0]
    
    def max_heapify(self, index, size):
        parent = index
        left = self.left_child(index)
        right = self.right_child(index)
        if left < size and self.max_heap[parent] < self.max_heap[left]:
            parent = left
        if right < size and self.max_heap[parent] < self.max_heap[right]:
            parent = right
        if parent != index:
            self.max_heap[parent], self.max_heap[index] = self.max_heap[index], self.max_heap[parent]
            self.max_heapify(parent, size)
    
    def min_heapify(self, index, size):
        parent = index
        left = self.left_child(index)
        right = self.right_child(index)
        if left < size and self.min_heap[parent] > self.min_heap[left]:
            parent = left
        if right < size and self.min_heap[parent] > self.min_heap[right]:
            parent = right
        if parent != index:
            self.min_heap[parent], self.min_heap[index] = self.min_heap[index], self.min_heap[parent]
            self.min_heapify(parent, size)

if __name__ == "__main__":		
    for _ in range(int(input())):
        N, a, b = map(int, input().split())
        heap = Heap(a, b)
        m = heap.median()
        for i in range(N-1):
            n = heap.next_()
            heap.insert(n)
            m += heap.median()
        print(m % 20090711)