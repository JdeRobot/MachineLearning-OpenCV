/*
*
* Copyright 2014-2016 Ignacio San Roman Lana
*
* This file is part of OpenCV_ML_Tool
*
* OpenCV_ML_Tool is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* OpenCV_ML_Tool is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with OpenCV_ML_Tool. If not, see http://www.gnu.org/licenses/.
*
* For those usages not covered by this license please contact with
* isanromanlana@gmail.com
*/

#ifndef RUNNING_H
#define RUNNING_H

#include <opencv2/opencv.hpp>
#include <thread>
#include "../ClasificationSystem.h"
#include "../Clasificadores/miclasificador.h"

using namespace std;
using namespace cv;

namespace MLT {
    class Running
    {
    public:
        Running();
        int load_dataset(QString path, string &ref, bool &negative, std::vector<float> &labels, std::vector<Mat> &images);

        Ui::MainWindow *window;

    private:
        void update();
        Generacion gen;

    };
}

#endif // RUNNING_H
