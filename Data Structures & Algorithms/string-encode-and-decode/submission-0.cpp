class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded_str = "";

        for (const string& s : strs) {
            encoded_str += to_string(s.size()) + '#' + s;
        }

        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> decoded_str;
        int i = 0;

        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') ++j;    

            int num_chars = stoi(s.substr(i, j - i));
            decoded_str.push_back(s.substr(j + 1, num_chars));

            i = j + 1 + num_chars;            
        }

        return decoded_str;
    }
};
