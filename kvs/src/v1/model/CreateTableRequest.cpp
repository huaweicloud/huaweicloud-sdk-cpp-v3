

#include "huaweicloud/kvs/v1/model/CreateTableRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




CreateTableRequest::CreateTableRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTableRequest::~CreateTableRequest() = default;

void CreateTableRequest::validate()
{
}

bool CreateTableRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool CreateTableRequest::fromBson(const Viewer &viewer)
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

std::string CreateTableRequest::getStoreName() const
{
    return storeName_;
}

void CreateTableRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool CreateTableRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void CreateTableRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

CreateTableRequestBody CreateTableRequest::getBody() const
{
    return body_;
}

void CreateTableRequest::setBody(const CreateTableRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


