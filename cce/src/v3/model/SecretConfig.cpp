

#include "huaweicloud/cce/v3/model/SecretConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SecretConfig::SecretConfig()
{
    disableDefaultAddonCredSecret_ = false;
    disableDefaultAddonCredSecretIsSet_ = false;
    disableNodeAgencyCredSecret_ = false;
    disableNodeAgencyCredSecretIsSet_ = false;
    disableDefaultImagePullSecret_ = false;
    disableDefaultImagePullSecretIsSet_ = false;
}

SecretConfig::~SecretConfig() = default;

void SecretConfig::validate()
{
}

web::json::value SecretConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disableDefaultAddonCredSecretIsSet_) {
        val[utility::conversions::to_string_t("disableDefaultAddonCredSecret")] = ModelBase::toJson(disableDefaultAddonCredSecret_);
    }
    if(disableNodeAgencyCredSecretIsSet_) {
        val[utility::conversions::to_string_t("disableNodeAgencyCredSecret")] = ModelBase::toJson(disableNodeAgencyCredSecret_);
    }
    if(disableDefaultImagePullSecretIsSet_) {
        val[utility::conversions::to_string_t("disableDefaultImagePullSecret")] = ModelBase::toJson(disableDefaultImagePullSecret_);
    }

    return val;
}
bool SecretConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disableDefaultAddonCredSecret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disableDefaultAddonCredSecret"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableDefaultAddonCredSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disableNodeAgencyCredSecret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disableNodeAgencyCredSecret"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableNodeAgencyCredSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disableDefaultImagePullSecret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disableDefaultImagePullSecret"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableDefaultImagePullSecret(refVal);
        }
    }
    return ok;
}


bool SecretConfig::isDisableDefaultAddonCredSecret() const
{
    return disableDefaultAddonCredSecret_;
}

void SecretConfig::setDisableDefaultAddonCredSecret(bool value)
{
    disableDefaultAddonCredSecret_ = value;
    disableDefaultAddonCredSecretIsSet_ = true;
}

bool SecretConfig::disableDefaultAddonCredSecretIsSet() const
{
    return disableDefaultAddonCredSecretIsSet_;
}

void SecretConfig::unsetdisableDefaultAddonCredSecret()
{
    disableDefaultAddonCredSecretIsSet_ = false;
}

bool SecretConfig::isDisableNodeAgencyCredSecret() const
{
    return disableNodeAgencyCredSecret_;
}

void SecretConfig::setDisableNodeAgencyCredSecret(bool value)
{
    disableNodeAgencyCredSecret_ = value;
    disableNodeAgencyCredSecretIsSet_ = true;
}

bool SecretConfig::disableNodeAgencyCredSecretIsSet() const
{
    return disableNodeAgencyCredSecretIsSet_;
}

void SecretConfig::unsetdisableNodeAgencyCredSecret()
{
    disableNodeAgencyCredSecretIsSet_ = false;
}

bool SecretConfig::isDisableDefaultImagePullSecret() const
{
    return disableDefaultImagePullSecret_;
}

void SecretConfig::setDisableDefaultImagePullSecret(bool value)
{
    disableDefaultImagePullSecret_ = value;
    disableDefaultImagePullSecretIsSet_ = true;
}

bool SecretConfig::disableDefaultImagePullSecretIsSet() const
{
    return disableDefaultImagePullSecretIsSet_;
}

void SecretConfig::unsetdisableDefaultImagePullSecret()
{
    disableDefaultImagePullSecretIsSet_ = false;
}

}
}
}
}
}


