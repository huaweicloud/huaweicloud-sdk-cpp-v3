

#include "huaweicloud/csms/v1/model/UploadSecretBlobResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UploadSecretBlobResponse::UploadSecretBlobResponse()
{
    secretIsSet_ = false;
}

UploadSecretBlobResponse::~UploadSecretBlobResponse() = default;

void UploadSecretBlobResponse::validate()
{
}

web::json::value UploadSecretBlobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}

bool UploadSecretBlobResponse::fromJson(const web::json::value& val)
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


Secret UploadSecretBlobResponse::getSecret() const
{
    return secret_;
}

void UploadSecretBlobResponse::setSecret(const Secret& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool UploadSecretBlobResponse::secretIsSet() const
{
    return secretIsSet_;
}

void UploadSecretBlobResponse::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


