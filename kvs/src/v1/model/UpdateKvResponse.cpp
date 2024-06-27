

#include "huaweicloud/kvs/v1/model/UpdateKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




UpdateKvResponse::UpdateKvResponse()
{
}

UpdateKvResponse::~UpdateKvResponse() = default;

void UpdateKvResponse::validate()
{
}

bool UpdateKvResponse::toBson(Builder &builder) const
{


    return true;
}

bool UpdateKvResponse::fromBson(const Viewer &viewer)
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


