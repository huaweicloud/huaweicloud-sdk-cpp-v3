

#include "huaweicloud/kvs/v1/model/TransactGetKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TransactGetKvRequest::TransactGetKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

TransactGetKvRequest::~TransactGetKvRequest() = default;

void TransactGetKvRequest::validate()
{
}

bool TransactGetKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool TransactGetKvRequest::fromBson(const Viewer &viewer)
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

std::string TransactGetKvRequest::getStoreName() const
{
    return storeName_;
}

void TransactGetKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool TransactGetKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void TransactGetKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

TransactGetKvRequestBody TransactGetKvRequest::getBody() const
{
    return body_;
}

void TransactGetKvRequest::setBody(const TransactGetKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TransactGetKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TransactGetKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


