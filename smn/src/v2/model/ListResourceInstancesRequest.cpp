

#include "huaweicloud/smn/v2/model/ListResourceInstancesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListResourceInstancesRequest::ListResourceInstancesRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListResourceInstancesRequest::~ListResourceInstancesRequest() = default;

void ListResourceInstancesRequest::validate()
{
}

web::json::value ListResourceInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListResourceInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListResourceInstancesRequest::getResourceType() const
{
    return resourceType_;
}

void ListResourceInstancesRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListResourceInstancesRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListResourceInstancesRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

ListInstanceRequestBody ListResourceInstancesRequest::getBody() const
{
    return body_;
}

void ListResourceInstancesRequest::setBody(const ListInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListResourceInstancesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListResourceInstancesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


