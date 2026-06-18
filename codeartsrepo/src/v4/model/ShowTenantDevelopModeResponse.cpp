

#include "huaweicloud/codeartsrepo/v4/model/ShowTenantDevelopModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowTenantDevelopModeResponse::ShowTenantDevelopModeResponse()
{
    crEnable_ = false;
    crEnableIsSet_ = false;
    repoEncryptionEnabled_ = false;
    repoEncryptionEnabledIsSet_ = false;
}

ShowTenantDevelopModeResponse::~ShowTenantDevelopModeResponse() = default;

void ShowTenantDevelopModeResponse::validate()
{
}

web::json::value ShowTenantDevelopModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(crEnableIsSet_) {
        val[utility::conversions::to_string_t("cr_enable")] = ModelBase::toJson(crEnable_);
    }
    if(repoEncryptionEnabledIsSet_) {
        val[utility::conversions::to_string_t("repo_encryption_enabled")] = ModelBase::toJson(repoEncryptionEnabled_);
    }

    return val;
}
bool ShowTenantDevelopModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cr_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cr_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCrEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_encryption_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_encryption_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoEncryptionEnabled(refVal);
        }
    }
    return ok;
}


bool ShowTenantDevelopModeResponse::isCrEnable() const
{
    return crEnable_;
}

void ShowTenantDevelopModeResponse::setCrEnable(bool value)
{
    crEnable_ = value;
    crEnableIsSet_ = true;
}

bool ShowTenantDevelopModeResponse::crEnableIsSet() const
{
    return crEnableIsSet_;
}

void ShowTenantDevelopModeResponse::unsetcrEnable()
{
    crEnableIsSet_ = false;
}

bool ShowTenantDevelopModeResponse::isRepoEncryptionEnabled() const
{
    return repoEncryptionEnabled_;
}

void ShowTenantDevelopModeResponse::setRepoEncryptionEnabled(bool value)
{
    repoEncryptionEnabled_ = value;
    repoEncryptionEnabledIsSet_ = true;
}

bool ShowTenantDevelopModeResponse::repoEncryptionEnabledIsSet() const
{
    return repoEncryptionEnabledIsSet_;
}

void ShowTenantDevelopModeResponse::unsetrepoEncryptionEnabled()
{
    repoEncryptionEnabledIsSet_ = false;
}

}
}
}
}
}


