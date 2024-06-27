

#include "huaweicloud/kvs/v1/model/Returned_kv_item.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Returned_kv_item::Returned_kv_item()
{
    kvDocIsSet_ = false;
}

Returned_kv_item::~Returned_kv_item() = default;

void Returned_kv_item::validate()
{
}

bool Returned_kv_item::toBson(Builder &builder) const
{

    if (kvDocIsSet_ && !bson_append(builder, "kv_doc", kvDoc_)) {
        return false;
    }

    return true;
}

bool Returned_kv_item::fromBson(const Viewer &viewer)
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

Document Returned_kv_item::getKvDoc() const
{
    return kvDoc_;
}

void Returned_kv_item::setKvDoc(const Document& value)
{
    kvDoc_ = value;
    kvDocIsSet_ = true;
}

bool Returned_kv_item::kvDocIsSet() const
{
    return kvDocIsSet_;
}

void Returned_kv_item::unsetkvDoc()
{
    kvDocIsSet_ = false;
}

}
}
}
}
}


