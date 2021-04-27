#include "cfgPatches.hpp"
#include "CfgEditorCategories.hpp" 
#include "configmacros.hpp"
/*
Naming Standards
    model name ==letter_case_size.pd3
    e.g
    a_lower_100m.pd3
    
How to use  
    LETTER_OBJECT(letter,case,size)};

    LETTER_OBJECT(a,lower,100m)};

    parameters
        letter:
            a-z -(lowercase only)
            a
        string case: 
            upper or lower (lowercase only)
            lower
        size:
            size follwed by m 
            100m
        
*/

class CfgVehicles
{
    class Statues_base_F;
    class Alphabet_base : Statues_base_F
    {
        author="Misconduct";
        mapSize = 50.0;
    };
    
    //lowercase letter,)

    //uppercase
    LETTER_OBJECT(m,upper,100m)};
};