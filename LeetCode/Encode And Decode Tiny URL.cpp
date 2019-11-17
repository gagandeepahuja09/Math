class Solution {
    string str62 = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string toBase62(int base10) {
        string base62;
        while(base10)
            base62 += str62[base10 % 62], base10 /= 62;
        reverse(base62.begin(), base62.end());
        return base62;
    }
    int id = 0;
    map<string, string> url;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string sid = toBase62(id++);
        url[sid] = longUrl;
        return "http://tinyurl.com/" + sid;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int index = shortUrl.size() - 1;
        while(shortUrl[index] != '/') index -= 1;
        string sid = shortUrl.substr(index + 1);
        return url[sid];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
