#include "rqs/rqs.h"
#include "rqs/sfml_front.h"

using namespace RQS::structures;

int main(int argc, char *argv[]) {
    RQS::RasterQuery& rq = RQS::RasterQuery::get();
    rq.init(llPoint{41.9, -89.9 - 0.1});
    RQS::front::DBVis vis;
    std::vector<llPoint> v{
        llPoint{-89.7594,41.7540}.invert(),
        llPoint{-89.5418,41.9330}.invert()
    };
    vis.loadPoints(v);
    vis.render();
    return 0;
}
