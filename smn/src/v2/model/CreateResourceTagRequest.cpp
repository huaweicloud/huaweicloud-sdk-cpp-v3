

#include "huaweicloud/smn/v2/model/CreateResourceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateResourceTagRequest::CreateResourceTagRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateResourceTagRequest::~CreateResourceTagRequest() = default;

void CreateResourceTagRequest::validate()
{
}

web::json::value CreateResourceTagRequest::toJson() const
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
bool CreateResourceTagRequest::fromJson(const web::json::value& val)
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
            CreateResourceTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateResourceTagRequest::getResourceType() const
{
    return resourceType_;
}

void CreateResourceTagRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CreateResourceTagRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CreateResourceTagRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string CreateResourceTagRequest::getResourceId() const
{
    return resourceId_;
}

void CreateResourceTagRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateResourceTagRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateResourceTagRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

CreateResourceTagRequestBody CreateResourceTagRequest::getBody() const
{
    return body_;
}

void CreateResourceTagRequest::setBody(const CreateResourceTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateResourceTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateResourceTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


