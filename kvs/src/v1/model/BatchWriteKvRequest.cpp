

#include "huaweicloud/kvs/v1/model/BatchWriteKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




BatchWriteKvRequest::BatchWriteKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchWriteKvRequest::~BatchWriteKvRequest() = default;

void BatchWriteKvRequest::validate()
{
}

bool BatchWriteKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool BatchWriteKvRequest::fromBson(const Viewer &viewer)
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

std::string BatchWriteKvRequest::getStoreName() const
{
    return storeName_;
}

void BatchWriteKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool BatchWriteKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void BatchWriteKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

BatchWriteKvRequestBody BatchWriteKvRequest::getBody() const
{
    return body_;
}

void BatchWriteKvRequest::setBody(const BatchWriteKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchWriteKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchWriteKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


