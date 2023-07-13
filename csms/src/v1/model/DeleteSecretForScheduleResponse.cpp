

#include "huaweicloud/csms/v1/model/DeleteSecretForScheduleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DeleteSecretForScheduleResponse::DeleteSecretForScheduleResponse()
{
    secretIsSet_ = false;
}

DeleteSecretForScheduleResponse::~DeleteSecretForScheduleResponse() = default;

void DeleteSecretForScheduleResponse::validate()
{
}

web::json::value DeleteSecretForScheduleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}

bool DeleteSecretForScheduleResponse::fromJson(const web::json::value& val)
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

Secret DeleteSecretForScheduleResponse::getSecret() const
{
    return secret_;
}

void DeleteSecretForScheduleResponse::setSecret(const Secret& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool DeleteSecretForScheduleResponse::secretIsSet() const
{
    return secretIsSet_;
}

void DeleteSecretForScheduleResponse::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


