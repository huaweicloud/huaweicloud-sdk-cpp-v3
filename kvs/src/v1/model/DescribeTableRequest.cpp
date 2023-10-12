

#include "huaweicloud/kvs/v1/model/DescribeTableRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DescribeTableRequest::DescribeTableRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

DescribeTableRequest::~DescribeTableRequest() = default;

void DescribeTableRequest::validate()
{
}

bool DescribeTableRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool DescribeTableRequest::fromBson(const Viewer &viewer)
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

std::string DescribeTableRequest::getStoreName() const
{
    return storeName_;
}

void DescribeTableRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool DescribeTableRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void DescribeTableRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

DescribeTableRequestBody DescribeTableRequest::getBody() const
{
    return body_;
}

void DescribeTableRequest::setBody(const DescribeTableRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DescribeTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DescribeTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


