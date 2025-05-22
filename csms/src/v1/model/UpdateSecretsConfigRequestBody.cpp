

#include "huaweicloud/csms/v1/model/UpdateSecretsConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretsConfigRequestBody::UpdateSecretsConfigRequestBody()
{
    checkingSecretStrength_ = false;
    checkingSecretStrengthIsSet_ = false;
}

UpdateSecretsConfigRequestBody::~UpdateSecretsConfigRequestBody() = default;

void UpdateSecretsConfigRequestBody::validate()
{
}

web::json::value UpdateSecretsConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkingSecretStrengthIsSet_) {
        val[utility::conversions::to_string_t("checking_secret_strength")] = ModelBase::toJson(checkingSecretStrength_);
    }

    return val;
}
bool UpdateSecretsConfigRequestBody::fromJson(const web::json::value& val)
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


bool UpdateSecretsConfigRequestBody::isCheckingSecretStrength() const
{
    return checkingSecretStrength_;
}

void UpdateSecretsConfigRequestBody::setCheckingSecretStrength(bool value)
{
    checkingSecretStrength_ = value;
    checkingSecretStrengthIsSet_ = true;
}

bool UpdateSecretsConfigRequestBody::checkingSecretStrengthIsSet() const
{
    return checkingSecretStrengthIsSet_;
}

void UpdateSecretsConfigRequestBody::unsetcheckingSecretStrength()
{
    checkingSecretStrengthIsSet_ = false;
}

}
}
}
}
}


