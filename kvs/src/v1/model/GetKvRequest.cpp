

#include "huaweicloud/kvs/v1/model/GetKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




GetKvRequest::GetKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

GetKvRequest::~GetKvRequest() = default;

void GetKvRequest::validate()
{
}

bool GetKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool GetKvRequest::fromBson(const Viewer &viewer)
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

std::string GetKvRequest::getStoreName() const
{
    return storeName_;
}

void GetKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool GetKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void GetKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

GetKvRequestBody GetKvRequest::getBody() const
{
    return body_;
}

void GetKvRequest::setBody(const GetKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GetKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GetKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


