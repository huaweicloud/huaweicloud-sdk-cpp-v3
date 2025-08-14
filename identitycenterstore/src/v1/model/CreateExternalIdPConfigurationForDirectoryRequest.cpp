

#include "huaweicloud/identitycenterstore/v1/model/CreateExternalIdPConfigurationForDirectoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateExternalIdPConfigurationForDirectoryRequest::CreateExternalIdPConfigurationForDirectoryRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateExternalIdPConfigurationForDirectoryRequest::~CreateExternalIdPConfigurationForDirectoryRequest() = default;

void CreateExternalIdPConfigurationForDirectoryRequest::validate()
{
}

web::json::value CreateExternalIdPConfigurationForDirectoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateExternalIdPConfigurationForDirectoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateIDPReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateExternalIdPConfigurationForDirectoryRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateExternalIdPConfigurationForDirectoryRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateExternalIdPConfigurationForDirectoryRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateExternalIdPConfigurationForDirectoryRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string CreateExternalIdPConfigurationForDirectoryRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateExternalIdPConfigurationForDirectoryRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateExternalIdPConfigurationForDirectoryRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateExternalIdPConfigurationForDirectoryRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreateIDPReqBody CreateExternalIdPConfigurationForDirectoryRequest::getBody() const
{
    return body_;
}

void CreateExternalIdPConfigurationForDirectoryRequest::setBody(const CreateIDPReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateExternalIdPConfigurationForDirectoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateExternalIdPConfigurationForDirectoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


