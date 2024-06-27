

#include "huaweicloud/kvs/v1/model/GetKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




GetKvResponse::GetKvResponse()
{
    kvDocIsSet_ = false;
}

GetKvResponse::~GetKvResponse() = default;

void GetKvResponse::validate()
{
}

bool GetKvResponse::toBson(Builder &builder) const
{

    if (kvDocIsSet_ && !bson_append(builder, "kv_doc", kvDoc_)) {
        return false;
    }

    return true;
}

bool GetKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "kv_doc") {
            if (!bson_get(it, kvDoc_)) {
                return false;
            }
            kvDocIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Document GetKvResponse::getKvDoc() const
{
    return kvDoc_;
}

void GetKvResponse::setKvDoc(const Document& value)
{
    kvDoc_ = value;
    kvDocIsSet_ = true;
}

bool GetKvResponse::kvDocIsSet() const
{
    return kvDocIsSet_;
}

void GetKvResponse::unsetkvDoc()
{
    kvDocIsSet_ = false;
}

}
}
}
}
}


