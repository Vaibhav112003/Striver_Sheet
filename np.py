class TreeNode:
    def __init__(self, label, children=None):
        self.label = label
        self.children = children if children is not None else []

    def add_child(self, child):
        self.children.append(child)

    def __str__(self):
        return self.label

def construct_parse_tree():
    # Create the nodes for the parse tree
    S = TreeNode('S')
    NP = TreeNode('NP')
    VP1 = TreeNode('VP')
    Conj = TreeNode('Conj')
    VP2 = TreeNode('VP')
    N1 = TreeNode('N')
    V = TreeNode('V')
    Prep1 = TreeNode('Prep')
    NP_store = TreeNode('NP')
    Det_store = TreeNode('Det')
    N_store = TreeNode('N')
    Prep2 = TreeNode('Prep')
    N2 = TreeNode('N')

    # Construct the parse tree by adding children to each node
    S.add_child(NP)
    S.add_child(VP1)
    NP.add_child(N1)
    NP.add_child(Conj)
    NP.add_child(N1)
    VP1.add_child(V)
    VP1.add_child(Prep1)
    VP1.add_child(NP_store)
    NP_store.add_child(Det_store)
    NP_store.add_child(N_store)
    VP2.add_child(Prep2)
    VP2.add_child(N2)
    VP1.add_child(VP2)

    # Set the labels for each node
    N1.label = 'John'
    Conj.label = 'and'
    N_store.label = 'store'
    Det_store.label = 'the'
    V.label = 'went'
    Prep1.label = 'to'
    Prep2.label = 'to'
    N2.label = 'buy'
    
    return S

def print_parse_tree(node, indent=0):
    print(' ' * indent + node.label)
    for child in node.children:
        print_parse_tree(child, indent + 4)

# Construct the parse tree
parse_tree_root = construct_parse_tree()

# Print the parse tree
print_parse_tree(parse_tree_root)
