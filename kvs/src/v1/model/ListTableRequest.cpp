

#include "huaweicloud/kvs/v1/model/ListTableRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ListTableRequest::ListTableRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

ListTableRequest::~ListTableRequest() = default;

void ListTableRequest::validate()
{
}

bool ListTableRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool ListTableRequest::fromBson(const Viewer &viewer)
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

std::string ListTableRequest::getStoreName() const
{
    return storeName_;
}

void ListTableRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool ListTableRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void ListTableRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

ListTableRequestBody ListTableRequest::getBody() const
{
    return body_;
}

void ListTableRequest::setBody(const ListTableRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


