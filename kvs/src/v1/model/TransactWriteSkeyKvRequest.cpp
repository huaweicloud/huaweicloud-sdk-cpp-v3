

#include "huaweicloud/kvs/v1/model/TransactWriteSkeyKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TransactWriteSkeyKvRequest::TransactWriteSkeyKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

TransactWriteSkeyKvRequest::~TransactWriteSkeyKvRequest() = default;

void TransactWriteSkeyKvRequest::validate()
{
}

bool TransactWriteSkeyKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool TransactWriteSkeyKvRequest::fromBson(const Viewer &viewer)
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

std::string TransactWriteSkeyKvRequest::getStoreName() const
{
    return storeName_;
}

void TransactWriteSkeyKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool TransactWriteSkeyKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void TransactWriteSkeyKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

TransactWriteSkeyKvRequestBody TransactWriteSkeyKvRequest::getBody() const
{
    return body_;
}

void TransactWriteSkeyKvRequest::setBody(const TransactWriteSkeyKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TransactWriteSkeyKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TransactWriteSkeyKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


