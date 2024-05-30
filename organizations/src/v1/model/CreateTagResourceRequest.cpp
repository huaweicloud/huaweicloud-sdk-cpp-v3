

#include "huaweicloud/organizations/v1/model/CreateTagResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateTagResourceRequest::CreateTagResourceRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTagResourceRequest::~CreateTagResourceRequest() = default;

void CreateTagResourceRequest::validate()
{
}

web::json::value CreateTagResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTagResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TagResourceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTagResourceRequest::getResourceType() const
{
    return resourceType_;
}

void CreateTagResourceRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CreateTagResourceRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CreateTagResourceRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string CreateTagResourceRequest::getResourceId() const
{
    return resourceId_;
}

void CreateTagResourceRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateTagResourceRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateTagResourceRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

TagResourceReqBody CreateTagResourceRequest::getBody() const
{
    return body_;
}

void CreateTagResourceRequest::setBody(const TagResourceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTagResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTagResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


