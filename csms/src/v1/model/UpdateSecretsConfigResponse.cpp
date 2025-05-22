

#include "huaweicloud/csms/v1/model/UpdateSecretsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretsConfigResponse::UpdateSecretsConfigResponse()
{
    checkingSecretStrength_ = false;
    checkingSecretStrengthIsSet_ = false;
}

UpdateSecretsConfigResponse::~UpdateSecretsConfigResponse() = default;

void UpdateSecretsConfigResponse::validate()
{
}

web::json::value UpdateSecretsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkingSecretStrengthIsSet_) {
        val[utility::conversions::to_string_t("checking_secret_strength")] = ModelBase::toJson(checkingSecretStrength_);
    }

    return val;
}
bool UpdateSecretsConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checking_secret_strength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checking_secret_strength"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckingSecretStrength(refVal);
        }
    }
    return ok;
}


bool UpdateSecretsConfigResponse::isCheckingSecretStrength() const
{
    return checkingSecretStrength_;
}

void UpdateSecretsConfigResponse::setCheckingSecretStrength(bool value)
{
    checkingSecretStrength_ = value;
    checkingSecretStrengthIsSet_ = true;
}

bool UpdateSecretsConfigResponse::checkingSecretStrengthIsSet() const
{
    return checkingSecretStrengthIsSet_;
}

void UpdateSecretsConfigResponse::unsetcheckingSecretStrength()
{
    checkingSecretStrengthIsSet_ = false;
}

}
}
}
}
}


