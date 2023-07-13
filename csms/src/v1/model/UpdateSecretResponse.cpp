

#include "huaweicloud/csms/v1/model/UpdateSecretResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretResponse::UpdateSecretResponse()
{
    secretIsSet_ = false;
}

UpdateSecretResponse::~UpdateSecretResponse() = default;

void UpdateSecretResponse::validate()
{
}

web::json::value UpdateSecretResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}

bool UpdateSecretResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret"));
        if(!fieldValue.is_null())
        {
            Secret refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecret(refVal);
        }
    }
    return ok;
}

Secret UpdateSecretResponse::getSecret() const
{
    return secret_;
}

void UpdateSecretResponse::setSecret(const Secret& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool UpdateSecretResponse::secretIsSet() const
{
    return secretIsSet_;
}

void UpdateSecretResponse::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


