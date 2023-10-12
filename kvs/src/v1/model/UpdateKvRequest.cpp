

#include "huaweicloud/kvs/v1/model/UpdateKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




UpdateKvRequest::UpdateKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKvRequest::~UpdateKvRequest() = default;

void UpdateKvRequest::validate()
{
}

bool UpdateKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool UpdateKvRequest::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "store_name") {
            if (!bson_get(it, storeName_)) {
                return false;
            }
            storeNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "body") {
            if (!bson_get(it, body_)) {
                return false;
            }
            bodyIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string UpdateKvRequest::getStoreName() const
{
    return storeName_;
}

void UpdateKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool UpdateKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void UpdateKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

UpdateKvRequestBody UpdateKvRequest::getBody() const
{
    return body_;
}

void UpdateKvRequest::setBody(const UpdateKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


