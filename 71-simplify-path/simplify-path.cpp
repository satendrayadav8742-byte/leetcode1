class Solution {
public:
    string simplifyPath(string path) {
        vector<string> str;
        string word="";


        for(int i=0;i<=path.size();i++)
        {
            if(path[i] =='/'|| i == path.size())
            {
                if (word == "" || word == ".")
                {

                }
                else if(word== "..")
                {
                    if(!str.empty())
                    {
                        str.pop_back();
                    }
                }
                else
                {
                    str.push_back(word);
                }
                word="";
            }
            else
            {
                word+= path[i];
            }
            
        }
        string ans;
        for(int i=0;i<str.size();i++)
        {
           ans += "/" + str[i];
        }
        if(ans=="")
        return "/";
        return ans;
    }
};