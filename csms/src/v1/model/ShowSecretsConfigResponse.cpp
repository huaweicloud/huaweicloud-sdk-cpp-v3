

#include "huaweicloud/csms/v1/model/ShowSecretsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretsConfigResponse::ShowSecretsConfigResponse()
{
    checkingSecretStrength_ = false;
    checkingSecretStrengthIsSet_ = false;
}

ShowSecretsConfigResponse::~ShowSecretsConfigResponse() = default;

void ShowSecretsConfigResponse::validate()
{
}

web::json::value ShowSecretsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkingSecretStrengthIsSet_) {
        val[utility::conversions::to_string_t("checking_secret_strength")] = ModelBase::toJson(checkingSecretStrength_);
    }

    return val;
}
bool ShowSecretsConfigResponse::fromJson(const web::json::value& val)
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


bool ShowSecretsConfigResponse::isCheckingSecretStrength() const
{
    return checkingSecretStrength_;
}

void ShowSecretsConfigResponse::setCheckingSecretStrength(bool value)
{
    checkingSecretStrength_ = value;
    checkingSecretStrengthIsSet_ = true;
}

bool ShowSecretsConfigResponse::checkingSecretStrengthIsSet() const
{
    return checkingSecretStrengthIsSet_;
}

void ShowSecretsConfigResponse::unsetcheckingSecretStrength()
{
    checkingSecretStrengthIsSet_ = false;
}

}
}
}
}
}


