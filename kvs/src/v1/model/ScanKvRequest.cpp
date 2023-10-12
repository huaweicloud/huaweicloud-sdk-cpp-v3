

#include "huaweicloud/kvs/v1/model/ScanKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ScanKvRequest::ScanKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

ScanKvRequest::~ScanKvRequest() = default;

void ScanKvRequest::validate()
{
}

bool ScanKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool ScanKvRequest::fromBson(const Viewer &viewer)
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

std::string ScanKvRequest::getStoreName() const
{
    return storeName_;
}

void ScanKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool ScanKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void ScanKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

ScanKvRequestBody ScanKvRequest::getBody() const
{
    return body_;
}

void ScanKvRequest::setBody(const ScanKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ScanKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ScanKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


