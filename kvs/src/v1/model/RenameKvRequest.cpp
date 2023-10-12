

#include "huaweicloud/kvs/v1/model/RenameKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




RenameKvRequest::RenameKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

RenameKvRequest::~RenameKvRequest() = default;

void RenameKvRequest::validate()
{
}

bool RenameKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool RenameKvRequest::fromBson(const Viewer &viewer)
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

std::string RenameKvRequest::getStoreName() const
{
    return storeName_;
}

void RenameKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool RenameKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void RenameKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

RenameKvRequestBody RenameKvRequest::getBody() const
{
    return body_;
}

void RenameKvRequest::setBody(const RenameKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RenameKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RenameKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


