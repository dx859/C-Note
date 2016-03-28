// 单例模式
class single
{
private:
    static single *p;

protected:
    single();
    ~single();

public:
    static single *makesingle();
    static void release();
};