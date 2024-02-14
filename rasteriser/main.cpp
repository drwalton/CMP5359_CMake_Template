#include "model.h"
#include <iostream>

int main(int argc, char* argv[])
{
    Model model("../models/stanfordbunny.obj")
    std::cout << "Loaded model with " 
        << model.nverts() << " vertices and " 
        << model.nfaces() << " faces." << std::endl;

    return 0;
}
