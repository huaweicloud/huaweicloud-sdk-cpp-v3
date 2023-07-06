

#include "huaweicloud/csms/v1/model/CreateSecretResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretResponse::CreateSecretResponse()
{
    secretIsSet_ = false;
}

CreateSecretResponse::~CreateSecretResponse() = default;

void CreateSecretResponse::validate()
{
}

web::json::value CreateSecretResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}

bool CreateSecretResponse::fromJson(const web::json::value& val)
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

Secret CreateSecretResponse::getSecret() const
{
    return secret_;
}

void CreateSecretResponse::setSecret(const Secret& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool CreateSecretResponse::secretIsSet() const
{
    return secretIsSet_;
}

void CreateSecretResponse::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


