

#include "huaweicloud/ram/v1/model/AssociateResourceShareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




AssociateResourceShareRequest::AssociateResourceShareRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateResourceShareRequest::~AssociateResourceShareRequest() = default;

void AssociateResourceShareRequest::validate()
{
}

web::json::value AssociateResourceShareRequest::toJson() const
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
bool AssociateResourceShareRequest::fromJson(const web::json::value& val)
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
            ResourceShareAssociationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateResourceShareRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void AssociateResourceShareRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool AssociateResourceShareRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void AssociateResourceShareRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string AssociateResourceShareRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void AssociateResourceShareRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool AssociateResourceShareRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void AssociateResourceShareRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

ResourceShareAssociationReqBody AssociateResourceShareRequest::getBody() const
{
    return body_;
}

void AssociateResourceShareRequest::setBody(const ResourceShareAssociationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateResourceShareRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateResourceShareRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


