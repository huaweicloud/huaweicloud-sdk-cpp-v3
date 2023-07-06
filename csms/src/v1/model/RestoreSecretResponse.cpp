

#include "huaweicloud/csms/v1/model/RestoreSecretResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




RestoreSecretResponse::RestoreSecretResponse()
{
    secretIsSet_ = false;
}

RestoreSecretResponse::~RestoreSecretResponse() = default;

void RestoreSecretResponse::validate()
{
}

web::json::value RestoreSecretResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}

bool RestoreSecretResponse::fromJson(const web::json::value& val)
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

Secret RestoreSecretResponse::getSecret() const
{
    return secret_;
}

void RestoreSecretResponse::setSecret(const Secret& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool RestoreSecretResponse::secretIsSet() const
{
    return secretIsSet_;
}

void RestoreSecretResponse::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


