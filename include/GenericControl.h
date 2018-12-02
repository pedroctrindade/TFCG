#ifndef GENERICCONTROL_H
#define GENERICCONTROL_H
#include <string>

class GenericControl
{
    public:
        GenericControl();
        virtual ~GenericControl();


        float pos_x;
        float pos_y;
        float pos_z;

        // 1 - North
        // 2 - South
        // 3 - East
        // 4 - West
        int direction;

        std::string obj_name;
        int obj_id;

        float scale_x;
        float scale_y;
        float scale_z;
};

#endif // GENERICCONTROL_H
