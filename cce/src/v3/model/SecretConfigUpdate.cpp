

#include "huaweicloud/cce/v3/model/SecretConfigUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SecretConfigUpdate::SecretConfigUpdate()
{
    disableDefaultAddonCredSecret_ = false;
    disableDefaultAddonCredSecretIsSet_ = false;
    disableNodeAgencyCredSecret_ = false;
    disableNodeAgencyCredSecretIsSet_ = false;
    disableDefaultImagePullSecret_ = false;
    disableDefaultImagePullSecretIsSet_ = false;
}

SecretConfigUpdate::~SecretConfigUpdate() = default;

void SecretConfigUpdate::validate()
{
}

web::json::value SecretConfigUpdate::toJson() const
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
bool SecretConfigUpdate::fromJson(const web::json::value& val)
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


bool SecretConfigUpdate::isDisableDefaultAddonCredSecret() const
{
    return disableDefaultAddonCredSecret_;
}

void SecretConfigUpdate::setDisableDefaultAddonCredSecret(bool value)
{
    disableDefaultAddonCredSecret_ = value;
    disableDefaultAddonCredSecretIsSet_ = true;
}

bool SecretConfigUpdate::disableDefaultAddonCredSecretIsSet() const
{
    return disableDefaultAddonCredSecretIsSet_;
}

void SecretConfigUpdate::unsetdisableDefaultAddonCredSecret()
{
    disableDefaultAddonCredSecretIsSet_ = false;
}

bool SecretConfigUpdate::isDisableNodeAgencyCredSecret() const
{
    return disableNodeAgencyCredSecret_;
}

void SecretConfigUpdate::setDisableNodeAgencyCredSecret(bool value)
{
    disableNodeAgencyCredSecret_ = value;
    disableNodeAgencyCredSecretIsSet_ = true;
}

bool SecretConfigUpdate::disableNodeAgencyCredSecretIsSet() const
{
    return disableNodeAgencyCredSecretIsSet_;
}

void SecretConfigUpdate::unsetdisableNodeAgencyCredSecret()
{
    disableNodeAgencyCredSecretIsSet_ = false;
}

bool SecretConfigUpdate::isDisableDefaultImagePullSecret() const
{
    return disableDefaultImagePullSecret_;
}

void SecretConfigUpdate::setDisableDefaultImagePullSecret(bool value)
{
    disableDefaultImagePullSecret_ = value;
    disableDefaultImagePullSecretIsSet_ = true;
}

bool SecretConfigUpdate::disableDefaultImagePullSecretIsSet() const
{
    return disableDefaultImagePullSecretIsSet_;
}

void SecretConfigUpdate::unsetdisableDefaultImagePullSecret()
{
    disableDefaultImagePullSecretIsSet_ = false;
}

}
}
}
}
}


