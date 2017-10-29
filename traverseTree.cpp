//https://codefights.com/interview-practice/task/PhNPP45hZGNwpPchi/description
//





// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
std::vector<int> traverseTree(Tree<int> * t) {
std::vector<int> res;
if (t==NULL)  return res;
queue<Tree<int>*> q;
Tree<int> *temp;
q.push(t);
int i;
while (!q.empty())
 {
    for(i=0;i <q.size();i++)
    {
     temp=q.front();
     q.pop();
     res.push_back(temp->value);
     if (temp->left !=NULL)
     q.push(temp->left);
     if (temp->right !=NULL)
      q.push(temp->right);
    }
 }
 
 return res;

}
