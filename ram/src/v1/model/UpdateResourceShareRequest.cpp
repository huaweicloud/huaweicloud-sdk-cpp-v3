

#include "huaweicloud/ram/v1/model/UpdateResourceShareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




UpdateResourceShareRequest::UpdateResourceShareRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateResourceShareRequest::~UpdateResourceShareRequest() = default;

void UpdateResourceShareRequest::validate()
{
}

web::json::value UpdateResourceShareRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateResourceShareRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_share_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateResourceShareReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateResourceShareRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateResourceShareRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateResourceShareRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateResourceShareRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateResourceShareRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void UpdateResourceShareRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool UpdateResourceShareRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void UpdateResourceShareRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

UpdateResourceShareReqBody UpdateResourceShareRequest::getBody() const
{
    return body_;
}

void UpdateResourceShareRequest::setBody(const UpdateResourceShareReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateResourceShareRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateResourceShareRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


