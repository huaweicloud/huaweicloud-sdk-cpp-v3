

#include "huaweicloud/csms/v1/model/ShowSecretResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretResponse::ShowSecretResponse()
{
    secretIsSet_ = false;
}

ShowSecretResponse::~ShowSecretResponse() = default;

void ShowSecretResponse::validate()
{
}

web::json::value ShowSecretResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}
bool ShowSecretResponse::fromJson(const web::json::value& val)
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


Secret ShowSecretResponse::getSecret() const
{
    return secret_;
}

void ShowSecretResponse::setSecret(const Secret& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool ShowSecretResponse::secretIsSet() const
{
    return secretIsSet_;
}

void ShowSecretResponse::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


