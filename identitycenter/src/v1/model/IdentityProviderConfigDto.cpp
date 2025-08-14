

#include "huaweicloud/identitycenter/v1/model/IdentityProviderConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




IdentityProviderConfigDto::IdentityProviderConfigDto()
{
    issuerUrl_ = "";
    issuerUrlIsSet_ = false;
    metadataUrl_ = "";
    metadataUrlIsSet_ = false;
    remoteLoginUrl_ = "";
    remoteLoginUrlIsSet_ = false;
    remoteLogoutUrl_ = "";
    remoteLogoutUrlIsSet_ = false;
}

IdentityProviderConfigDto::~IdentityProviderConfigDto() = default;

void IdentityProviderConfigDto::validate()
{
}

web::json::value IdentityProviderConfigDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issuerUrlIsSet_) {
        val[utility::conversions::to_string_t("issuer_url")] = ModelBase::toJson(issuerUrl_);
    }
    if(metadataUrlIsSet_) {
        val[utility::conversions::to_string_t("metadata_url")] = ModelBase::toJson(metadataUrl_);
    }
    if(remoteLoginUrlIsSet_) {
        val[utility::conversions::to_string_t("remote_login_url")] = ModelBase::toJson(remoteLoginUrl_);
    }
    if(remoteLogoutUrlIsSet_) {
        val[utility::conversions::to_string_t("remote_logout_url")] = ModelBase::toJson(remoteLogoutUrl_);
    }

    return val;
}
bool IdentityProviderConfigDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issuer_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadataUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_login_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_login_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteLoginUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_logout_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_logout_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteLogoutUrl(refVal);
        }
    }
    return ok;
}


std::string IdentityProviderConfigDto::getIssuerUrl() const
{
    return issuerUrl_;
}

void IdentityProviderConfigDto::setIssuerUrl(const std::string& value)
{
    issuerUrl_ = value;
    issuerUrlIsSet_ = true;
}

bool IdentityProviderConfigDto::issuerUrlIsSet() const
{
    return issuerUrlIsSet_;
}

void IdentityProviderConfigDto::unsetissuerUrl()
{
    issuerUrlIsSet_ = false;
}

std::string IdentityProviderConfigDto::getMetadataUrl() const
{
    return metadataUrl_;
}

void IdentityProviderConfigDto::setMetadataUrl(const std::string& value)
{
    metadataUrl_ = value;
    metadataUrlIsSet_ = true;
}

bool IdentityProviderConfigDto::metadataUrlIsSet() const
{
    return metadataUrlIsSet_;
}

void IdentityProviderConfigDto::unsetmetadataUrl()
{
    metadataUrlIsSet_ = false;
}

std::string IdentityProviderConfigDto::getRemoteLoginUrl() const
{
    return remoteLoginUrl_;
}

void IdentityProviderConfigDto::setRemoteLoginUrl(const std::string& value)
{
    remoteLoginUrl_ = value;
    remoteLoginUrlIsSet_ = true;
}

bool IdentityProviderConfigDto::remoteLoginUrlIsSet() const
{
    return remoteLoginUrlIsSet_;
}

void IdentityProviderConfigDto::unsetremoteLoginUrl()
{
    remoteLoginUrlIsSet_ = false;
}

std::string IdentityProviderConfigDto::getRemoteLogoutUrl() const
{
    return remoteLogoutUrl_;
}

void IdentityProviderConfigDto::setRemoteLogoutUrl(const std::string& value)
{
    remoteLogoutUrl_ = value;
    remoteLogoutUrlIsSet_ = true;
}

bool IdentityProviderConfigDto::remoteLogoutUrlIsSet() const
{
    return remoteLogoutUrlIsSet_;
}

void IdentityProviderConfigDto::unsetremoteLogoutUrl()
{
    remoteLogoutUrlIsSet_ = false;
}

}
}
}
}
}


