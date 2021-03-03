def init(self, val=0, left=None, right=None):
    self.val=val
    self.left = left
    self.right = right
    
def mergeTrees(self, root1, root2):
    return root1.left + root2.left