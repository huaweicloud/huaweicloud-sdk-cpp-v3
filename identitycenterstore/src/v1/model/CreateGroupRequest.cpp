

#include "huaweicloud/identitycenterstore/v1/model/CreateGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateGroupRequest::CreateGroupRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGroupRequest::~CreateGroupRequest() = default;

void CreateGroupRequest::validate()
{
}

web::json::value CreateGroupRequest::toJson() const
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
bool CreateGroupRequest::fromJson(const web::json::value& val)
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
            CreateGroupReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateGroupRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateGroupRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateGroupRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateGroupRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CreateGroupRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateGroupRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateGroupRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateGroupRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

CreateGroupReqBody CreateGroupRequest::getBody() const
{
    return body_;
}

void CreateGroupRequest::setBody(const CreateGroupReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


