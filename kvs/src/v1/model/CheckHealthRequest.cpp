

#include "huaweicloud/kvs/v1/model/CheckHealthRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




CheckHealthRequest::CheckHealthRequest()
{
    bodyIsSet_ = false;
}

CheckHealthRequest::~CheckHealthRequest() = default;

void CheckHealthRequest::validate()
{
}

bool CheckHealthRequest::toBson(Builder &builder) const
{

    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool CheckHealthRequest::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
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

CheckHealthRequestBody CheckHealthRequest::getBody() const
{
    return body_;
}

void CheckHealthRequest::setBody(const CheckHealthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckHealthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckHealthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


