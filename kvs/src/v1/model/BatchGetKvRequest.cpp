

#include "huaweicloud/kvs/v1/model/BatchGetKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




BatchGetKvRequest::BatchGetKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchGetKvRequest::~BatchGetKvRequest() = default;

void BatchGetKvRequest::validate()
{
}

bool BatchGetKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool BatchGetKvRequest::fromBson(const Viewer &viewer)
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

std::string BatchGetKvRequest::getStoreName() const
{
    return storeName_;
}

void BatchGetKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool BatchGetKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void BatchGetKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

BatchGetKvRequestBody BatchGetKvRequest::getBody() const
{
    return body_;
}

void BatchGetKvRequest::setBody(const BatchGetKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchGetKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchGetKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


