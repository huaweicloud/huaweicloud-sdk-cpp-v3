

#include "huaweicloud/kvs/v1/model/DeleteKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DeleteKvResponse::DeleteKvResponse()
{
}

DeleteKvResponse::~DeleteKvResponse() = default;

void DeleteKvResponse::validate()
{
}

bool DeleteKvResponse::toBson(Builder &builder) const
{


    return true;
}

bool DeleteKvResponse::fromBson(const Viewer &viewer)
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


