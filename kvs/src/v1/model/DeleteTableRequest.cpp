

#include "huaweicloud/kvs/v1/model/DeleteTableRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DeleteTableRequest::DeleteTableRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTableRequest::~DeleteTableRequest() = default;

void DeleteTableRequest::validate()
{
}

bool DeleteTableRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool DeleteTableRequest::fromBson(const Viewer &viewer)
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

std::string DeleteTableRequest::getStoreName() const
{
    return storeName_;
}

void DeleteTableRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool DeleteTableRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void DeleteTableRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

DeleteTableRequestBody DeleteTableRequest::getBody() const
{
    return body_;
}

void DeleteTableRequest::setBody(const DeleteTableRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


