

#include "huaweicloud/kvs/v1/model/GetKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




GetKvResponse::GetKvResponse()
{
    kvBlobDataIsSet_ = false;
    kvDocIsSet_ = false;
}

GetKvResponse::~GetKvResponse() = default;

void GetKvResponse::validate()
{
}

bool GetKvResponse::toBson(Builder &builder) const
{

    if (kvBlobDataIsSet_ && !bson_append(builder, "kv_blob_data", kvBlobData_)) {
        return false;
    }
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

Kv_blob_data GetKvResponse::getKvBlobData() const
{
    return kvBlobData_;
}

void GetKvResponse::setKvBlobData(const Kv_blob_data& value)
{
    kvBlobData_ = value;
    kvBlobDataIsSet_ = true;
}

bool GetKvResponse::kvBlobDataIsSet() const
{
    return kvBlobDataIsSet_;
}

void GetKvResponse::unsetkvBlobData()
{
    kvBlobDataIsSet_ = false;
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


