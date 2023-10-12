

#include "huaweicloud/kvs/v1/model/PutKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




PutKvRequest::PutKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

PutKvRequest::~PutKvRequest() = default;

void PutKvRequest::validate()
{
}

bool PutKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool PutKvRequest::fromBson(const Viewer &viewer)
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

std::string PutKvRequest::getStoreName() const
{
    return storeName_;
}

void PutKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool PutKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void PutKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

PutKvRequestBody PutKvRequest::getBody() const
{
    return body_;
}

void PutKvRequest::setBody(const PutKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PutKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PutKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


