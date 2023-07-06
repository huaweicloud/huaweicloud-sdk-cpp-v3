

#include "huaweicloud/csms/v1/model/DeleteSecretRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DeleteSecretRequest::DeleteSecretRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
}

DeleteSecretRequest::~DeleteSecretRequest() = default;

void DeleteSecretRequest::validate()
{
}

web::json::value DeleteSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }

    return val;
}

bool DeleteSecretRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    return ok;
}

std::string DeleteSecretRequest::getSecretName() const
{
    return secretName_;
}

void DeleteSecretRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool DeleteSecretRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void DeleteSecretRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

}
}
}
}
}


