#include <iostream>
#include "Vector.hpp"
using namespace std;

int main()
{
    MiniVector<int> testvc;
    /*//!Day-1
    // *任务一：测试插入
    testvc.push_back(10);
    cout<<"size is "<<testvc.size()<<" ";
    cout<<"capacity is "<<testvc.capacity();
    printf("\n");
    testvc.push_back(20);
    cout<<"size is "<<testvc.size()<<" ";
    cout<<"capacity is "<<testvc.capacity();
    printf("\n");
    testvc.push_back(30);
    cout<<"size is "<<testvc.size()<<" ";
    cout<<"capacity is "<<testvc.capacity();
    printf("\n");
    testvc.push_back(40);
    cout<<"size is "<<testvc.size()<<" ";
    cout<<"capacity is "<<testvc.capacity();
    printf("\n");
    testvc.push_back(50);
    cout<<"size is "<<testvc.size()<<" ";
    cout<<"capacity is "<<testvc.capacity();
    printf("\n");

    // *任务二：测试修改指定下标对应的元素
    testvc[0]=60;
    cout<<testvc[0]<<"\n";

    // *任务三：测试通过常量读取元素
    const MiniVector<int>& tmp=testvc;
    for(size_t i = 0;i<tmp.size();i++){
        cout<<tmp[i]<<" ";
    }
    cout<<"\n";

    // *任务四：当T为string形式的时候，插入至少三个字符
    MiniVector<std::string> Ms;
    Ms.push_back("gxz");
    Ms.push_back("love");
    Ms.push_back("raidenmei");
    Ms.push_back("verymuch");

    for(size_t i = 0; i<Ms.size();i++){
        cout<<Ms[i]<<" ";
    }
    cout<<"\n";*/

    /*//!Day-2
    // *任务一：测试at(0),能够捕获异常
    try{
        testvc.at(0);
    }catch(const std::out_of_range& e){
        std::cout<<"捕获异常: "<<e.what()<<"\n";
    }
    // *任务二：插入三个元素，读取首元素和尾元素
    testvc.push_back(10);
    testvc.push_back(20);
    testvc.push_back(30);

    int tmp=testvc.at(0);
    cout<<tmp<<"\n";
    tmp=testvc.at(2);
    cout<<tmp<<"\n";

    // *任务三：at修改具体的元素值
    testvc.at(0)=40;
    tmp=testvc.at(0);
    cout<<tmp<<"\n";

    // *const容器拥有的读取权限和没有的修改权限
    const MiniVector<int>& temp=testvc;
    tmp=temp.at(0);
    cout<<tmp<<"\n";
    tmp=temp.at(2);
    cout<<tmp<<"\n";

    // *异常判定--2
    try{
        testvc.at(99);
    }catch(const std::out_of_range& e){
       std::cout<<"捕获异常: "<<e.what()<<"\n";
    }

    // *异常判定--3
    try{
        testvc.at(3);
    }catch(const std::out_of_range& e){
       std::cout<<"捕获异常: "<<e.what()<<"\n";
    }*/

    //! Day-3
    /*// *空容器
    testvc.reserve(10);
    cout << testvc.size() << "\n";
    cout << testvc.capacity() << "\n";

    // *三个元素扩容
    testvc.push_back(10);
    testvc.push_back(20);
    testvc.push_back(30);
    testvc.reserve(100);
    cout << testvc[0] << " " << testvc[1] << " " << testvc[2] << "\n";
    cout << testvc.size() << " " << testvc.capacity() << "\n";

    // *<=capacity
    testvc.reserve(5);
    cout << testvc.capacity() << "\n";
    // *扩容后插入
    testvc.reserve(100);
    cout << testvc.capacity() << "\n";
    // *string重复测试2
    MiniVector<string> Sm;
    Sm.reserve(4);
    Sm.push_back("gxz");
    Sm.push_back("love");
    Sm.push_back("raiden");
    Sm.push_back("mei");
    for (size_t i = 0; i < 4; i++)
    {
        cout << Sm[i] << " ";
    }
    cout << Sm.capacity() << " " << Sm.size() << "\n";

    // *测试push_back
    MiniVector<int> tepu;
    tepu.push_back(10);
    tepu.push_back(20);
    tepu.push_back(30);
    tepu.push_back(40);
    tepu.push_back(50);
    tepu.push_back(60);
    for (size_t i = 0; i < tepu.size(); i++)
    {
        cout << tepu[i] << " ";
    }*/

    /*// *测试二：
    MiniVector<int> v;
    const MiniVector<int> &tmp=v;

    // *1:
    cout<<v.empty()<<"\n";
    cout<<tmp.empty()<<"\n";
    // *2.
    v.pop_back();
    cout<<v.size()<<"\n";
    // *3.
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v.size()<<"\n";
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    try{
        v.at(2);
    }catch(const std::out_of_range& e){
       std::cout<<"捕获异常: "<<e.what()<<"\n";
    }
    // *4.
    v.push_back(99);
    cout<<v[2]<<"\n";
    // *5.
    v.clear();

    cout<<v.empty()<<" "<<v.size()<<" "<<v.capacity()<<"\n";
    // *6.
    v.push_back(77);
    cout<<v.empty()<<" "<<v.size()<<" "<<v.capacity()<<"\n";
    cout<<v[0]<<"\n";

    // *补充测试：
    MiniVector<string> tmps;
    tmps.push_back("love");
    tmps.push_back("raidenmei");

    tmps.pop_back();
    tmps.clear();
    cout<<tmps.empty()<<" "<<tmps.size()<<" "<<tmps.capacity()<<"\n";*/

    //! Day-4
    /*// *1.
    MiniVector<int> v1;
    MiniVector<int> v2(v1);

    cout << v2.size() << " " << v1.size() << "\n";
    v1.push_back(10);
    cout << v2.size() << " " << v1.size() << "\n";

    // *2.
    MiniVector<int> v3;
    MiniVector<int> v4 = v3;
    cout << v4.empty() << " " << v4.size() << "\n";
    MiniVector<int> v5(v3);
    cout << v5.empty() << " " << v5.size() << "\n";

    // *3.
    v1.push_back(20);
    v1.push_back(30);
    MiniVector<int> v6(v1);
    for (size_t i = 0; i < v6.size(); i++)
    {
        cout << v6[i] << " ";
    }
    cout << "\n";

    // *4.
    MiniVector<string> s1;
    MiniVector<string> s2;
    s1.push_back("raidenmei");
    MiniVector<string> s3 = s2 = s1;
    cout << s1[0] << " " << s2[0] << " " << s3[0] << "\n";

    // *5.
    v1 = v1;
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << v1.size() << " " << "\n";

    // *6.
    MiniVector<int> v_other;
    v_other.push_back(10);
    v_other.push_back(20);
    v_other.push_back(30);
    v_other.push_back(40);
    v_other.push_back(50);

    v_other=v1;
    cout<<v_other.size()<<" "<<v1.size()<<"\n";
    v1[0]=99;
    cout<<v_other[0]<<"\n";*/

    //! Day-final
    MiniVector<int> ne;

    for (int x : ne)
    {
        cout << x << "\n";
    }

    ne.push_back(10);
    ne.push_back(10);
    ne.push_back(10);
    ne.push_back(10);
    ne.push_back(10);

    for (int &x : ne)
    {
        x *= 2;
    }

    const MiniVector<int> &cv = ne;

    for (const int &x : cv)
    {
        cout << x << " ";
    }
    cout << "\n";

    MiniVector<std::string> st;
    st.push_back("gxz");
    st.push_back("raiden");
    st.push_back("mei");

    for (string x : st)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}