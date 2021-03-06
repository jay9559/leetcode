/* utl_tree.h --- 
 * Filename: utl_tree.h
 * Created: Wed Aug  1 22:18:26 2018 (+0800)
 */

/* Copyright Hamlet zheng.
 * 
 * 允许免费使用，拷贝，修改，发布，但在所有的拷贝上必须保留上述
 * copyright部分和本使用声明部分，除非显示声明，copyright的持有者
 * 不得作为再发布软件的广告。copyright的持有者对使用本软件的适用范围不做任何声明，
 * 
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
 * OF THIS SOFTWARE.
 */

#ifndef UTL_TREE_H_
#define UTL_TREE_H_

#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct TreeNode* utl_init_tree(string& s, int &pos);

// leetcode 108
TreeNode* sorted_array_to_bst(vector<int>& nums);

// traversal
void utl_preorder_r(struct TreeNode* t);
void utl_midorder_r(struct TreeNode* t);
void utl_postorder_r(struct TreeNode* t);

// non Recursive traversal
// leetcode 144
vector<int> pre_order_traversal(TreeNode* root);
vector<int> inorder_traversal(TreeNode* root);
// leetcode 145
vector<int> post_order_traversal(TreeNode* root);

// level order
// leetcode 107
vector<vector<int> > level_order2(TreeNode* root);
// leetcode 103
vector<vector<int> > zigzag_level_order(TreeNode *root);
// leetcode 199
vector<int> right_side_view_of_tree(TreeNode* root);
// leetcode 513
int find_bottom_left_value(TreeNode *root);

//depth
int max_depth_of_tree(TreeNode* root);
int min_depth_of_tree(TreeNode* root);

// leetcode 100
bool is_same_tree(struct TreeNode* p, struct TreeNode* q);
// leetcode 101
bool is_symmetric(TreeNode *root);
// leetcode 96
int num_trees(int n);
// leetcode 563
int tilt_of_tree(TreeNode* root);
// leetcode 226
TreeNode* invert_tree(TreeNode* root);
// leetcode 110
bool is_balanced(TreeNode *root);
// leetcode 129
int sum_nembers(TreeNode *root);
// leetcode 404
int sum_of_left_leaf(TreeNode *root);
// leetcode 637
vector<double> average_of_levels(TreeNode *root);
// leetcode 114
void flatten_tree_to_list(TreeNode *root);
// leetcode 257
vector<string> binary_tree_paths(TreeNode* root);
// leetcode 112
bool has_path_sum(struct TreeNode* root, int sum);
// leetcode 501
vector<int> find_mode(TreeNode* root);
// leetcode 105
TreeNode *build_tree_from_pre_and_inorder(vector<int> &preorder, vector<int> &inorder);
// leetcode 106
TreeNode *build_tree_from_post_and_inorder(vector<int> &inorder, vector<int> &postorder);
// leetcode 671
int find_second_minimum_value(TreeNode* root);

#endif
