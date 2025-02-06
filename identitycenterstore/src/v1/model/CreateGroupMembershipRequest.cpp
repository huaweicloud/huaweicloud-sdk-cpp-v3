

#include "huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateGroupMembershipRequest::CreateGroupMembershipRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGroupMembershipRequest::~CreateGroupMembershipRequest() = default;

void CreateGroupMembershipRequest::validate()
{
}

web::json::value CreateGroupMembershipRequest::toJson() const
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
bool CreateGroupMembershipRequest::fromJson(const web::json::value& val)
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
            CreateGroupMembershipReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateGroupMembershipRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateGroupMembershipRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateGroupMembershipRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateGroupMembershipRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CreateGroupMembershipRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateGroupMembershipRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateGroupMembershipRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateGroupMembershipRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

CreateGroupMembershipReqBody CreateGroupMembershipRequest::getBody() const
{
    return body_;
}

void CreateGroupMembershipRequest::setBody(const CreateGroupMembershipReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGroupMembershipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGroupMembershipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


