

#include "huaweicloud/kvs/v1/model/TransactWriteSkeyKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TransactWriteSkeyKvResponse::TransactWriteSkeyKvResponse()
{
}

TransactWriteSkeyKvResponse::~TransactWriteSkeyKvResponse() = default;

void TransactWriteSkeyKvResponse::validate()
{
}

bool TransactWriteSkeyKvResponse::toBson(Builder &builder) const
{


    return true;
}

bool TransactWriteSkeyKvResponse::fromBson(const Viewer &viewer)
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


