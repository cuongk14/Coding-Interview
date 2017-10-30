//Given a sorted integer array that does not contain any duplicates, 
// Return a summary of the number ranges it contains.

std::vector<std::string> composeRanges(std::vector<int> nums) {

    std::vector<std::string> res;
    if (nums.empty()) return res;
    int i=0, firstIndex, secondIndex;
    while(i< nums.size())
    {
        firstIndex=i;
        secondIndex=firstIndex;
        while( (secondIndex+1) < nums.size())
        {
            if (nums[secondIndex+1]==nums[secondIndex]+1)
            secondIndex++;
            else
                break;
        }
        if (secondIndex==firstIndex)
        res.push_back(numb2String(nums[firstIndex]));
        else
        res.push_back(numb2String(nums[firstIndex])+ "->"+ numb2String(nums[secondIndex]) );
  
      i=secondIndex+1;
    }
    return res;
}
