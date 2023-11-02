

#include "huaweicloud/dbss/v1/model/ListResourceInstanceByTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListResourceInstanceByTagRequest::ListResourceInstanceByTagRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ListResourceInstanceByTagRequest::~ListResourceInstanceByTagRequest() = default;

void ListResourceInstanceByTagRequest::validate()
{
}

web::json::value ListResourceInstanceByTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListResourceInstanceByTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResourceInstanceTagRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListResourceInstanceByTagRequest::getResourceType() const
{
    return resourceType_;
}

void ListResourceInstanceByTagRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListResourceInstanceByTagRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListResourceInstanceByTagRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListResourceInstanceByTagRequest::getLimit() const
{
    return limit_;
}

void ListResourceInstanceByTagRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResourceInstanceByTagRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListResourceInstanceByTagRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResourceInstanceByTagRequest::getOffset() const
{
    return offset_;
}

void ListResourceInstanceByTagRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListResourceInstanceByTagRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListResourceInstanceByTagRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

ResourceInstanceTagRequest ListResourceInstanceByTagRequest::getBody() const
{
    return body_;
}

void ListResourceInstanceByTagRequest::setBody(const ResourceInstanceTagRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListResourceInstanceByTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListResourceInstanceByTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


