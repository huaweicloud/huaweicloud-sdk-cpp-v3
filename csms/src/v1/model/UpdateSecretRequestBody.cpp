

#include "huaweicloud/csms/v1/model/UpdateSecretRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretRequestBody::UpdateSecretRequestBody()
{
    kmsKeyId_ = "";
    kmsKeyIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateSecretRequestBody::~UpdateSecretRequestBody() = default;

void UpdateSecretRequestBody::validate()
{
}

web::json::value UpdateSecretRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_key_id")] = ModelBase::toJson(kmsKeyId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool UpdateSecretRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kms_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}

std::string UpdateSecretRequestBody::getKmsKeyId() const
{
    return kmsKeyId_;
}

void UpdateSecretRequestBody::setKmsKeyId(const std::string& value)
{
    kmsKeyId_ = value;
    kmsKeyIdIsSet_ = true;
}

bool UpdateSecretRequestBody::kmsKeyIdIsSet() const
{
    return kmsKeyIdIsSet_;
}

void UpdateSecretRequestBody::unsetkmsKeyId()
{
    kmsKeyIdIsSet_ = false;
}

std::string UpdateSecretRequestBody::getDescription() const
{
    return description_;
}

void UpdateSecretRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateSecretRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateSecretRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


