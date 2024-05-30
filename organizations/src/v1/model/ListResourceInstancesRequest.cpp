

#include "huaweicloud/organizations/v1/model/ListResourceInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListResourceInstancesRequest::ListResourceInstancesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
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

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
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
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
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
            ResourceInstanceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ListResourceInstancesRequest::getLimit() const
{
    return limit_;
}

void ListResourceInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResourceInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListResourceInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResourceInstancesRequest::getOffset() const
{
    return offset_;
}

void ListResourceInstancesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListResourceInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListResourceInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
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

ResourceInstanceReqBody ListResourceInstancesRequest::getBody() const
{
    return body_;
}

void ListResourceInstancesRequest::setBody(const ResourceInstanceReqBody& value)
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


