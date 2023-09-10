/*
 * 单例模式：分为饿汉式和懒汉式
 *
 * date:2023-9-10
*/

class Singleton {
public:
    static Singleton* getInstance()
    {
        if(null == uniqueInstance)
        {
            /*
             * 如果单例不存在，就创建。如果暂时不需要这个实例，
             * 它就永远不会被创建。这就是“延迟实例化”。
            */
            uniqueInstance = new Singleton();
        }

        return uniqueInstance;
    }

private:
    Singleton();
    static Singleton* uniqueInstance;
};
