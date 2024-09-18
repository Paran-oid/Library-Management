//
// Created by aziz on 9/18/24.
//

#ifndef OUTPUT_H
#define OUTPUT_H



class output {
public:
    template<typename T>
    static void print(T param);
};

template <typename T>
void output::print(T param)
{
    std::cout << param << std::endl;
}

#endif //OUTPUT_H
