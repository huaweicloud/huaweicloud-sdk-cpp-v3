

#include "huaweicloud/kvs/v1/model/UpdateKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




UpdateKvResponse::UpdateKvResponse()
{
    kvBlobDataIsSet_ = false;
    kvDocIsSet_ = false;
}

UpdateKvResponse::~UpdateKvResponse() = default;

void UpdateKvResponse::validate()
{
}

bool UpdateKvResponse::toBson(Builder &builder) const
{

    if (kvBlobDataIsSet_ && !bson_append(builder, "kv_blob_data", kvBlobData_)) {
        return false;
    }
    if (kvDocIsSet_ && !bson_append(builder, "kv_doc", kvDoc_)) {
        return false;
    }

    return true;
}

bool UpdateKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "kv_blob_data") {
            if (!bson_get(it, kvBlobData_)) {
                return false;
            }
            kvBlobDataIsSet_ = true;
            ++it;
            continue;
        }
        
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

Kv_blob_data UpdateKvResponse::getKvBlobData() const
{
    return kvBlobData_;
}

void UpdateKvResponse::setKvBlobData(const Kv_blob_data& value)
{
    kvBlobData_ = value;
    kvBlobDataIsSet_ = true;
}

bool UpdateKvResponse::kvBlobDataIsSet() const
{
    return kvBlobDataIsSet_;
}

void UpdateKvResponse::unsetkvBlobData()
{
    kvBlobDataIsSet_ = false;
}

Document UpdateKvResponse::getKvDoc() const
{
    return kvDoc_;
}

void UpdateKvResponse::setKvDoc(const Document& value)
{
    kvDoc_ = value;
    kvDocIsSet_ = true;
}

bool UpdateKvResponse::kvDocIsSet() const
{
    return kvDocIsSet_;
}

void UpdateKvResponse::unsetkvDoc()
{
    kvDocIsSet_ = false;
}

}
}
}
}
}


