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

//     // MagicalContainer A;
//     // A.addElement(10);
//     // for(int elem : A.getElements())
//     // {
//     //     cout << elem << ", "; // 10
//     // }
//     // cout << endl;

//     // A.addElement(20);
//     // for(int elem : A.getElements())
//     // {
//     //     cout << elem << ", "; // 10 20
//     // }
//     // cout << endl;

//     // A.addElement(31);
//     // for(int elem : A.getElements())
//     // {
//     //     cout << elem << ", "; // 10 20 31
//     // }
//     // cout << endl;

//     // A.addElement(15);
//     // for(int elem : A.getElements())
//     // {
//     //     cout << elem << ", "; // 10 15 20 31
//     // }
//     // cout << endl;

//     // A.addElement(7);
//     // for(int elem : A.getElements())
//     // {
//     //     cout << elem << ", "; // 7 10 15 20 31
//     // }
//     // cout << endl;

//     // A.addElement(12);
//     // for(int elem : A.getElements())
//     // {
//     //     cout << elem << ", "; // 7 10 12 15 20 31
//     // }
//     // cout << endl;

//     // A.addElement(59);
//     // for(int elem : A.getElements())
//     // {
//     //     cout << elem << ", "; // 7 10 12 15 20 31 59
//     // }
//     // cout << endl;

//     // A.removeElement(20);
//     // for(int elem : A.getElements())
//     // {
//     //     cout << elem << ", "; // 7 10 12 15 31 59
//     // }
//     // cout << endl;



//     // cout << "Ascending:" << endl;
//     // cout << endl;

//     // MagicalContainer::AscendingIterator Ait(A);

//     // cout << " * = " << *Ait << endl; // 7
//     // ++Ait;
//     // cout << " * = " << *Ait << endl; // 10
//     // ++Ait;
//     // cout << " * = " << *Ait << endl; // 12
//     // ++Ait;
//     // cout << " * = " << *Ait << endl; // 15
//     // ++Ait;
//     // cout << " * = " << *Ait << endl; // 31

//     // cout << endl;
//     // cout << "Side Cross:" << endl;
//     // cout << endl;
    
//     // MagicalContainer::SideCrossIterator Sit(A);

//     // cout << " * = " << *Sit << endl; // 7
//     // ++Sit;
//     // cout << " * = " << *Sit << endl; // 59
//     // ++Sit;
//     // cout << " * = " << *Sit << endl; // 10

//     // ++Sit;
//     // cout << " * = " << *Sit << endl; // 31
//     // ++Sit;
//     // cout << " * = " << *Sit << endl; // 12
//     // ++Sit;
//     // cout << " * = " << *Sit << endl; // 15

//     // cout << " begin = " << *Sit.begin() << endl; // 7

//     // cout << "currIndex = " << Sit.getCurrIndex() << endl;
//     // ++Sit;

//     // cout << "currIndex = " << Sit.getCurrIndex() << endl;
//     // // cout << " * = " << *Sit << endl; // end

//     // cout << endl;
//     // cout << "Prime:" << endl;
//     // cout << endl;

//     // MagicalContainer::PrimeIterator Pit(A);

    

//     // cout << " * = " << *Pit << endl; // 7
//     // ++Pit;
//     // cout << " * = " << *Pit << endl; // 31
//     // ++Pit;
//     // cout << " * = " << *Pit << endl; // 59
    

//     // // A.addElement(6);
//     // // A.addElement(19);
//     // // ++Pit;
//     // // cout << " * = " << *Pit << endl; // 19

    
//     cout << "#############################################################" << endl;

//     // MagicalContainer container;
//     // container.addElement(1);
//     // container.addElement(2);
//     // container.addElement(4); 
//     // container.addElement(5);
//     // container.addElement(14);


//     // MagicalContainer::SideCrossIterator it(container);

//     // // Increment until the end
//     // while (it != it.end()) 
//     // {
//     //     // cout << "index = " << it.getCurrIndex() << endl;
//     //     cout << "elem = " << *it << endl;
//     //     // cout << "size = " << it.getMagicalContainer().size() << endl;
//     //     cout << endl;
//     //     ++it;
//     // }

//     // cout << endl;
//     // cout << "index = " << it.getCurrIndex() << endl;
//     // cout << "size = " << it.getMagicalContainer().size() << endl;
    
//     // ++it; // throw exception


//     cout << "#############################################################" << endl;

//     return 0;
// }