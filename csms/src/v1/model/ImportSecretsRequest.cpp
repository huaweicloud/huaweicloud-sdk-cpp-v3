

#include "huaweicloud/csms/v1/model/ImportSecretsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ImportSecretsRequest::ImportSecretsRequest()
{
    secretsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ImportSecretsRequest::~ImportSecretsRequest() = default;

void ImportSecretsRequest::validate()
{
}

web::json::value ImportSecretsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretsIsSet_) {
        val[utility::conversions::to_string_t("secrets")] = ModelBase::toJson(secrets_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ImportSecretsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secrets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secrets"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateSecretRequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecrets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<CreateSecretRequestBody>& ImportSecretsRequest::getSecrets()
{
    return secrets_;
}

void ImportSecretsRequest::setSecrets(const std::vector<CreateSecretRequestBody>& value)
{
    secrets_ = value;
    secretsIsSet_ = true;
}

bool ImportSecretsRequest::secretsIsSet() const
{
    return secretsIsSet_;
}

void ImportSecretsRequest::unsetsecrets()
{
    secretsIsSet_ = false;
}

int32_t ImportSecretsRequest::getTotal() const
{
    return total_;
}

void ImportSecretsRequest::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ImportSecretsRequest::totalIsSet() const
{
    return totalIsSet_;
}

void ImportSecretsRequest::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


