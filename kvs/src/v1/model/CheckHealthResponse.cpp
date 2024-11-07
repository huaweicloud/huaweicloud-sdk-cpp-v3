

#include "huaweicloud/kvs/v1/model/CheckHealthResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




CheckHealthResponse::CheckHealthResponse()
{
}

CheckHealthResponse::~CheckHealthResponse() = default;

void CheckHealthResponse::validate()
{
}

bool CheckHealthResponse::toBson(Builder &builder) const
{


    return true;
}

bool CheckHealthResponse::fromBson(const Viewer &viewer)
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


