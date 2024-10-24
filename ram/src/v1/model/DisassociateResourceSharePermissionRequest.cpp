

#include "huaweicloud/ram/v1/model/DisassociateResourceSharePermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




DisassociateResourceSharePermissionRequest::DisassociateResourceSharePermissionRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateResourceSharePermissionRequest::~DisassociateResourceSharePermissionRequest() = default;

void DisassociateResourceSharePermissionRequest::validate()
{
}

web::json::value DisassociateResourceSharePermissionRequest::toJson() const
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
bool DisassociateResourceSharePermissionRequest::fromJson(const web::json::value& val)
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
            DisassociatePermissionReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateResourceSharePermissionRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DisassociateResourceSharePermissionRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DisassociateResourceSharePermissionRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DisassociateResourceSharePermissionRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DisassociateResourceSharePermissionRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void DisassociateResourceSharePermissionRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool DisassociateResourceSharePermissionRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void DisassociateResourceSharePermissionRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

DisassociatePermissionReqBody DisassociateResourceSharePermissionRequest::getBody() const
{
    return body_;
}

void DisassociateResourceSharePermissionRequest::setBody(const DisassociatePermissionReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateResourceSharePermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateResourceSharePermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


