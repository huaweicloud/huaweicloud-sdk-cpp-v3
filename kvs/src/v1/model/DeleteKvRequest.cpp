

#include "huaweicloud/kvs/v1/model/DeleteKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DeleteKvRequest::DeleteKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteKvRequest::~DeleteKvRequest() = default;

void DeleteKvRequest::validate()
{
}

bool DeleteKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool DeleteKvRequest::fromBson(const Viewer &viewer)
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

std::string DeleteKvRequest::getStoreName() const
{
    return storeName_;
}

void DeleteKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool DeleteKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void DeleteKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

DeleteKvRequestBody DeleteKvRequest::getBody() const
{
    return body_;
}

void DeleteKvRequest::setBody(const DeleteKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


