

#include "huaweicloud/dbss/v1/model/BatchAddResourceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchAddResourceTagRequest::BatchAddResourceTagRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddResourceTagRequest::~BatchAddResourceTagRequest() = default;

void BatchAddResourceTagRequest::validate()
{
}

web::json::value BatchAddResourceTagRequest::toJson() const
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
bool BatchAddResourceTagRequest::fromJson(const web::json::value& val)
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


std::string BatchAddResourceTagRequest::getResourceType() const
{
    return resourceType_;
}

void BatchAddResourceTagRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BatchAddResourceTagRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BatchAddResourceTagRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string BatchAddResourceTagRequest::getResourceId() const
{
    return resourceId_;
}

void BatchAddResourceTagRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchAddResourceTagRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchAddResourceTagRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

ResourceTagRequest BatchAddResourceTagRequest::getBody() const
{
    return body_;
}

void BatchAddResourceTagRequest::setBody(const ResourceTagRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddResourceTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddResourceTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


