

#include "huaweicloud/organizations/v1/model/ShowResourceInstancesCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowResourceInstancesCountRequest::ShowResourceInstancesCountRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ShowResourceInstancesCountRequest::~ShowResourceInstancesCountRequest() = default;

void ShowResourceInstancesCountRequest::validate()
{
}

web::json::value ShowResourceInstancesCountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowResourceInstancesCountRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
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


std::string ShowResourceInstancesCountRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ShowResourceInstancesCountRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ShowResourceInstancesCountRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ShowResourceInstancesCountRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ShowResourceInstancesCountRequest::getResourceType() const
{
    return resourceType_;
}

void ShowResourceInstancesCountRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowResourceInstancesCountRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowResourceInstancesCountRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

ResourceInstanceReqBody ShowResourceInstancesCountRequest::getBody() const
{
    return body_;
}

void ShowResourceInstancesCountRequest::setBody(const ResourceInstanceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowResourceInstancesCountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowResourceInstancesCountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


