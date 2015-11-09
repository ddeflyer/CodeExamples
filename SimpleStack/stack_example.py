
class SimpleStack():
    """
    This is an example of a simple stack implemented with a linked list
    """
    
    def __init__(self):
        """
        We start off with a empty first element
        """
        self.current = None

        
    def isEmpty(self):
        """
        Are there elements on the stack, o(1)
        """
        return(self.current is None)

    
    def push(self, val):
        """
        Add an element onto the stack, o(1)
        """
        self.current = (self.current, val)

        
    def pop(self):
        """
        Return the last element on the stack, o(1), will throw a generic exception if
        the stack is empty
        """
        if self.isEmpty():
            raise Exception("Can't pop an empty stack!")
            
        ret_val = self.current[1]
        self.current = self.current[0]
        return(ret_val)

    
    def getElements(self):
        """
        Return a list of elements on the stack, o(n)
        """
        result = []
        cur = self.current
        while cur != None:
            result.append(cur[1])
            cur = cur[0]

        result.reverse()

        return(result)


stack = SimpleStack()
stack.push(1)
stack.push(2)
stack.push(3)
print(stack.getElements())
stack.pop()
print(stack.getElements())
