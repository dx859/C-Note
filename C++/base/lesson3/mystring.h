// 一个单例能动态分配内存的字符串
class mystring
{
private:
    static mystring *self;
    char *s;

protected:
    mystring();
    mystring(const char *s);
    mystring(const mystring &it); // 拷贝构造
    ~mystring();

public:
    static mystring *makestring(const char *s = NULL);
    static void deletestring();

    const char *get_s() const;
    void set_s(const char *s);
};