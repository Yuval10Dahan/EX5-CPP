// #include "MagicalContainer.hpp"
// #include <string>
// #include <vector>
// #include <random>
// #include <chrono>
// #include <iostream>


// using namespace std;



// int main()
// {
//     cout << "#############################################################" << endl;

//     // vector<int> v;
//     // v.push_back(3);
//     // v.push_back(-4);
//     // for(auto &i : v)
//     // {
//     //     cout << i << endl;
//     // }

//     cout << "#############################################################" << endl;

//     // vector<int> v1;
//     // vector<int> v2;

//     // v1.push_back(2);
//     // v1.push_back(6);
//     // v1.push_back(7);
//     // v1.push_back(5);

//     // v2.push_back(2);
//     // v2.push_back(6);
//     // v2.push_back(7);
//     // v2.push_back(5);

//     // if(v1 == v2) cout << "equals" << endl;

//     cout << "#############################################################" << endl;

//     // vector<int> compare{ 5, 1, 4, 2, 3 };
//     // cout << compare.at(0) << endl;
//     // cout << compare.at(1) << endl;

//     cout << "#############################################################" << endl;

//     // MagicalContainer container;
//     // container.addElement(1);
//     // container.addElement(4);
    
//     // MagicalContainer::AscendingIterator it(container);

//     // cout << " * = " << *it << endl; // 1
//     // ++it;
//     // cout << " * = " << *it << endl; // 4

//     cout << "#############################################################" << endl;

//     MagicalContainer A;
//     A.addElement(10);
//     A.addElement(20);
//     A.addElement(31);
//     A.addElement(15);
//     A.addElement(7);

//     cout << "Ascending:" << endl;
//     cout << endl;

//     MagicalContainer::AscendingIterator Ait(A);

//     cout << " * = " << *Ait << endl; // 7
//     ++Ait;
//     cout << " * = " << *Ait << endl; // 10
//     ++Ait;
//     cout << " * = " << *Ait << endl; // 15
//     ++Ait;
//     cout << " * = " << *Ait << endl; // 20
//     ++Ait;
//     cout << " * = " << *Ait << endl; // 31

//     cout << endl;
//     cout << "Side Cross:" << endl;
//     cout << endl;
    
//     MagicalContainer::SideCrossIterator Sit(A);

//     cout << " * = " << *Sit << endl; // 10
//     ++Sit;
//     cout << " * = " << *Sit << endl; // 7
//     ++Sit;
//     cout << " * = " << *Sit << endl; // 20
//     ++Sit;
//     cout << " * = " << *Sit << endl; // 15
//     ++Sit;
//     cout << " * = " << *Sit << endl; // 31

//     cout << endl;
//     cout << "Prime:" << endl;
//     cout << endl;

//     MagicalContainer::PrimeIterator Pit(A);

//     cout << " * = " << *Pit << endl; // 31
//     ++Pit;
//     cout << " * = " << *Pit << endl; // 7






















//     cout << "#############################################################" << endl;

//     return 0;
// }