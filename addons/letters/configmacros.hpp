#define LETTER_OBJECT(LETTER,CASE,SIZE) \
    class Alphabet_##LETTER##_##CASE##_##SIZE : Alphabet_base \
        {\
            author="a26mike";\
            displayName=##LETTER SIZE;\
            icon="iconObject_1x1";\
            scope = 2;\
            scopeCurator = 2;\
            model=\alphabet\addons\letters\models\##LETTER##_##CASE##_##SIZE##.p3d;\
            editorCategory = "EdCat_letter_props";\
            editorSubcategory = EdSubcat_##CASE##case;
        