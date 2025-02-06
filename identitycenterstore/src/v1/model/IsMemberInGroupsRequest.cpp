

#include "huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




IsMemberInGroupsRequest::IsMemberInGroupsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

IsMemberInGroupsRequest::~IsMemberInGroupsRequest() = default;

void IsMemberInGroupsRequest::validate()
{
}

web::json::value IsMemberInGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool IsMemberInGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IsMemberInGroupsReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string IsMemberInGroupsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void IsMemberInGroupsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool IsMemberInGroupsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void IsMemberInGroupsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string IsMemberInGroupsRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void IsMemberInGroupsRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool IsMemberInGroupsRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void IsMemberInGroupsRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

IsMemberInGroupsReqBody IsMemberInGroupsRequest::getBody() const
{
    return body_;
}

void IsMemberInGroupsRequest::setBody(const IsMemberInGroupsReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool IsMemberInGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void IsMemberInGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


