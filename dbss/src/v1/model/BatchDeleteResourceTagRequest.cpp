

#include "huaweicloud/dbss/v1/model/BatchDeleteResourceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchDeleteResourceTagRequest::BatchDeleteResourceTagRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteResourceTagRequest::~BatchDeleteResourceTagRequest() = default;

void BatchDeleteResourceTagRequest::validate()
{
}

web::json::value BatchDeleteResourceTagRequest::toJson() const
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
bool BatchDeleteResourceTagRequest::fromJson(const web::json::value& val)
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
            ResourceTagRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteResourceTagRequest::getResourceType() const
{
    return resourceType_;
}

void BatchDeleteResourceTagRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BatchDeleteResourceTagRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BatchDeleteResourceTagRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string BatchDeleteResourceTagRequest::getResourceId() const
{
    return resourceId_;
}

void BatchDeleteResourceTagRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchDeleteResourceTagRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchDeleteResourceTagRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

ResourceTagRequest BatchDeleteResourceTagRequest::getBody() const
{
    return body_;
}

void BatchDeleteResourceTagRequest::setBody(const ResourceTagRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteResourceTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteResourceTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


