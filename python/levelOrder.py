class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        levels = []
        queue = collections.deque()
        queue.append((root, 0))
        while queue:
            node, level = queue.popleft()
            if node:
                if len(levels)-1 >= level:
                    levels[level].append(node.val)
                else:
                    levels.append([node.val])
                if node.left:queue.append((node.left, level+1))
                if node.right:queue.append((node.right, level+1))
        return levels
