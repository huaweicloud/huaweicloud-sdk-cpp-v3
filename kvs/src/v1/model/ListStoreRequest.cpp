

#include "huaweicloud/kvs/v1/model/ListStoreRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ListStoreRequest::ListStoreRequest()
{
    bodyIsSet_ = false;
}

ListStoreRequest::~ListStoreRequest() = default;

void ListStoreRequest::validate()
{
}

bool ListStoreRequest::toBson(Builder &builder) const
{

    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool ListStoreRequest::fromBson(const Viewer &viewer)
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

ListStoreRequestBody ListStoreRequest::getBody() const
{
    return body_;
}

void ListStoreRequest::setBody(const ListStoreRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListStoreRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListStoreRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


