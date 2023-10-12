

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
    kvFieldsIsSet_ = false;
}

UpdateKvResponse::~UpdateKvResponse() = default;

void UpdateKvResponse::validate()
{
}

bool UpdateKvResponse::toBson(Builder &builder) const
{

    if (kvBlobDataIsSet_ && !bson_append(builder, "KvBlobData", kvBlobData_)) {
        return false;
    }
    if (kvFieldsIsSet_ && !bson_append(builder, "KvFields", kvFields_)) {
        return false;
    }

    return true;
}

bool UpdateKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "KvBlobData") {
            if (!bson_get(it, kvBlobData_)) {
                return false;
            }
            kvBlobDataIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "KvFields") {
            if (!bson_get(it, kvFields_)) {
                return false;
            }
            kvFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

KvBlobData UpdateKvResponse::getKvBlobData() const
{
    return kvBlobData_;
}

void UpdateKvResponse::setKvBlobData(const KvBlobData& value)
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

Document UpdateKvResponse::getKvFields() const
{
    return kvFields_;
}

void UpdateKvResponse::setKvFields(const Document& value)
{
    kvFields_ = value;
    kvFieldsIsSet_ = true;
}

bool UpdateKvResponse::kvFieldsIsSet() const
{
    return kvFieldsIsSet_;
}

void UpdateKvResponse::unsetkvFields()
{
    kvFieldsIsSet_ = false;
}

}
}
}
}
}


