// 不要在头文件中定义变量，如果头文件被两个文件引用的话会报错
// int i=0;
class people
{
private:
    // char name[100];
    char *name;
    int age;

public:
    people(); // 构造函数
    ~people(); // 析构函数
    people(const char * s);
    void set_name(const char * s);

    void set_age(int i);

    const char * get_name();

    int get_age();
};
