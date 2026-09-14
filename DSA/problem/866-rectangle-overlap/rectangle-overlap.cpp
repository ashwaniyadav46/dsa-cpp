class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // Two rectangles overlap if they overlap both horizontally and vertically with positive area
        return rec1[0] < rec2[2] && // rec1 is left of rec2's right edge
               rec1[2] > rec2[0] && // rec1 is right of rec2's left edge
               rec1[1] < rec2[3] && // rec1 is below rec2's top edge
               rec1[3] > rec2[1];   // rec1 is above rec2's bottom edge
    }
};