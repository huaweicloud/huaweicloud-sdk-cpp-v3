

#include "huaweicloud/identitycenter/v1/model/IdentityStoreDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




IdentityStoreDto::IdentityStoreDto()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    identityStoreType_ = "";
    identityStoreTypeIsSet_ = false;
    authenticationType_ = "";
    authenticationTypeIsSet_ = false;
    provisioningTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

IdentityStoreDto::~IdentityStoreDto() = default;

void IdentityStoreDto::validate()
{
}

web::json::value IdentityStoreDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(identityStoreTypeIsSet_) {
        val[utility::conversions::to_string_t("identity_store_type")] = ModelBase::toJson(identityStoreType_);
    }
    if(authenticationTypeIsSet_) {
        val[utility::conversions::to_string_t("authentication_type")] = ModelBase::toJson(authenticationType_);
    }
    if(provisioningTypeIsSet_) {
        val[utility::conversions::to_string_t("provisioning_type")] = ModelBase::toJson(provisioningType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool IdentityStoreDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("identity_store_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authentication_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authentication_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthenticationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provisioning_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provisioning_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvisioningType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string IdentityStoreDto::getIdentityStoreId() const
{
    return identityStoreId_;
}

void IdentityStoreDto::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool IdentityStoreDto::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void IdentityStoreDto::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string IdentityStoreDto::getIdentityStoreType() const
{
    return identityStoreType_;
}

void IdentityStoreDto::setIdentityStoreType(const std::string& value)
{
    identityStoreType_ = value;
    identityStoreTypeIsSet_ = true;
}

bool IdentityStoreDto::identityStoreTypeIsSet() const
{
    return identityStoreTypeIsSet_;
}

void IdentityStoreDto::unsetidentityStoreType()
{
    identityStoreTypeIsSet_ = false;
}

std::string IdentityStoreDto::getAuthenticationType() const
{
    return authenticationType_;
}

void IdentityStoreDto::setAuthenticationType(const std::string& value)
{
    authenticationType_ = value;
    authenticationTypeIsSet_ = true;
}

bool IdentityStoreDto::authenticationTypeIsSet() const
{
    return authenticationTypeIsSet_;
}

void IdentityStoreDto::unsetauthenticationType()
{
    authenticationTypeIsSet_ = false;
}

std::vector<std::string>& IdentityStoreDto::getProvisioningType()
{
    return provisioningType_;
}

void IdentityStoreDto::setProvisioningType(const std::vector<std::string>& value)
{
    provisioningType_ = value;
    provisioningTypeIsSet_ = true;
}

bool IdentityStoreDto::provisioningTypeIsSet() const
{
    return provisioningTypeIsSet_;
}

void IdentityStoreDto::unsetprovisioningType()
{
    provisioningTypeIsSet_ = false;
}

std::string IdentityStoreDto::getStatus() const
{
    return status_;
}

void IdentityStoreDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IdentityStoreDto::statusIsSet() const
{
    return statusIsSet_;
}

void IdentityStoreDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


