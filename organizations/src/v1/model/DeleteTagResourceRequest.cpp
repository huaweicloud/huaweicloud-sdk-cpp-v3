

#include "huaweicloud/organizations/v1/model/DeleteTagResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DeleteTagResourceRequest::DeleteTagResourceRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTagResourceRequest::~DeleteTagResourceRequest() = default;

void DeleteTagResourceRequest::validate()
{
}

web::json::value DeleteTagResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
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
bool DeleteTagResourceRequest::fromJson(const web::json::value& val)
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


std::string DeleteTagResourceRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteTagResourceRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteTagResourceRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteTagResourceRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteTagResourceRequest::getResourceType() const
{
    return resourceType_;
}

void DeleteTagResourceRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool DeleteTagResourceRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void DeleteTagResourceRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string DeleteTagResourceRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteTagResourceRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteTagResourceRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteTagResourceRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

TagResourceReqBody DeleteTagResourceRequest::getBody() const
{
    return body_;
}

void DeleteTagResourceRequest::setBody(const TagResourceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTagResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTagResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


