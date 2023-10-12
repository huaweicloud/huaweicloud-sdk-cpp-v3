

#include "huaweicloud/kvs/v1/model/PutKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




PutKvResponse::PutKvResponse()
{
}

PutKvResponse::~PutKvResponse() = default;

void PutKvResponse::validate()
{
}

bool PutKvResponse::toBson(Builder &builder) const
{


    return true;
}

bool PutKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        ++it;
    }

    return true;
}

}
}
}
}
}


