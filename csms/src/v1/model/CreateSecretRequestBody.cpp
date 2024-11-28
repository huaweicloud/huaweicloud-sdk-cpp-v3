

#include "huaweicloud/csms/v1/model/CreateSecretRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretRequestBody::CreateSecretRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    kmsKeyId_ = "";
    kmsKeyIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    secretBinary_ = "";
    secretBinaryIsSet_ = false;
    secretString_ = "";
    secretStringIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
    autoRotation_ = false;
    autoRotationIsSet_ = false;
    rotationPeriod_ = "";
    rotationPeriodIsSet_ = false;
    rotationConfig_ = "";
    rotationConfigIsSet_ = false;
    eventSubscriptionsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    rotationFuncUrn_ = "";
    rotationFuncUrnIsSet_ = false;
}

CreateSecretRequestBody::~CreateSecretRequestBody() = default;

void CreateSecretRequestBody::validate()
{
}

web::json::value CreateSecretRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(kmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_key_id")] = ModelBase::toJson(kmsKeyId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(secretBinaryIsSet_) {
        val[utility::conversions::to_string_t("secret_binary")] = ModelBase::toJson(secretBinary_);
    }
    if(secretStringIsSet_) {
        val[utility::conversions::to_string_t("secret_string")] = ModelBase::toJson(secretString_);
    }
    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }
    if(autoRotationIsSet_) {
        val[utility::conversions::to_string_t("auto_rotation")] = ModelBase::toJson(autoRotation_);
    }
    if(rotationPeriodIsSet_) {
        val[utility::conversions::to_string_t("rotation_period")] = ModelBase::toJson(rotationPeriod_);
    }
    if(rotationConfigIsSet_) {
        val[utility::conversions::to_string_t("rotation_config")] = ModelBase::toJson(rotationConfig_);
    }
    if(eventSubscriptionsIsSet_) {
        val[utility::conversions::to_string_t("event_subscriptions")] = ModelBase::toJson(eventSubscriptions_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(rotationFuncUrnIsSet_) {
        val[utility::conversions::to_string_t("rotation_func_urn")] = ModelBase::toJson(rotationFuncUrn_);
    }

    return val;
}
bool CreateSecretRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("secret_binary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_binary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretBinary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_rotation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_rotation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoRotation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotation_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation_period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotationPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotation_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotationConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventSubscriptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotation_func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation_func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotationFuncUrn(refVal);
        }
    }
    return ok;
}


std::string CreateSecretRequestBody::getName() const
{
    return name_;
}

void CreateSecretRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSecretRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSecretRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateSecretRequestBody::getKmsKeyId() const
{
    return kmsKeyId_;
}

void CreateSecretRequestBody::setKmsKeyId(const std::string& value)
{
    kmsKeyId_ = value;
    kmsKeyIdIsSet_ = true;
}

bool CreateSecretRequestBody::kmsKeyIdIsSet() const
{
    return kmsKeyIdIsSet_;
}

void CreateSecretRequestBody::unsetkmsKeyId()
{
    kmsKeyIdIsSet_ = false;
}

std::string CreateSecretRequestBody::getDescription() const
{
    return description_;
}

void CreateSecretRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateSecretRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateSecretRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateSecretRequestBody::getSecretBinary() const
{
    return secretBinary_;
}

void CreateSecretRequestBody::setSecretBinary(const std::string& value)
{
    secretBinary_ = value;
    secretBinaryIsSet_ = true;
}

bool CreateSecretRequestBody::secretBinaryIsSet() const
{
    return secretBinaryIsSet_;
}

void CreateSecretRequestBody::unsetsecretBinary()
{
    secretBinaryIsSet_ = false;
}

std::string CreateSecretRequestBody::getSecretString() const
{
    return secretString_;
}

void CreateSecretRequestBody::setSecretString(const std::string& value)
{
    secretString_ = value;
    secretStringIsSet_ = true;
}

bool CreateSecretRequestBody::secretStringIsSet() const
{
    return secretStringIsSet_;
}

void CreateSecretRequestBody::unsetsecretString()
{
    secretStringIsSet_ = false;
}

std::string CreateSecretRequestBody::getSecretType() const
{
    return secretType_;
}

void CreateSecretRequestBody::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool CreateSecretRequestBody::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void CreateSecretRequestBody::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

bool CreateSecretRequestBody::isAutoRotation() const
{
    return autoRotation_;
}

void CreateSecretRequestBody::setAutoRotation(bool value)
{
    autoRotation_ = value;
    autoRotationIsSet_ = true;
}

bool CreateSecretRequestBody::autoRotationIsSet() const
{
    return autoRotationIsSet_;
}

void CreateSecretRequestBody::unsetautoRotation()
{
    autoRotationIsSet_ = false;
}

std::string CreateSecretRequestBody::getRotationPeriod() const
{
    return rotationPeriod_;
}

void CreateSecretRequestBody::setRotationPeriod(const std::string& value)
{
    rotationPeriod_ = value;
    rotationPeriodIsSet_ = true;
}

bool CreateSecretRequestBody::rotationPeriodIsSet() const
{
    return rotationPeriodIsSet_;
}

void CreateSecretRequestBody::unsetrotationPeriod()
{
    rotationPeriodIsSet_ = false;
}

std::string CreateSecretRequestBody::getRotationConfig() const
{
    return rotationConfig_;
}

void CreateSecretRequestBody::setRotationConfig(const std::string& value)
{
    rotationConfig_ = value;
    rotationConfigIsSet_ = true;
}

bool CreateSecretRequestBody::rotationConfigIsSet() const
{
    return rotationConfigIsSet_;
}

void CreateSecretRequestBody::unsetrotationConfig()
{
    rotationConfigIsSet_ = false;
}

std::vector<std::string>& CreateSecretRequestBody::getEventSubscriptions()
{
    return eventSubscriptions_;
}

void CreateSecretRequestBody::setEventSubscriptions(const std::vector<std::string>& value)
{
    eventSubscriptions_ = value;
    eventSubscriptionsIsSet_ = true;
}

bool CreateSecretRequestBody::eventSubscriptionsIsSet() const
{
    return eventSubscriptionsIsSet_;
}

void CreateSecretRequestBody::unseteventSubscriptions()
{
    eventSubscriptionsIsSet_ = false;
}

std::string CreateSecretRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateSecretRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateSecretRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateSecretRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateSecretRequestBody::getRotationFuncUrn() const
{
    return rotationFuncUrn_;
}

void CreateSecretRequestBody::setRotationFuncUrn(const std::string& value)
{
    rotationFuncUrn_ = value;
    rotationFuncUrnIsSet_ = true;
}

bool CreateSecretRequestBody::rotationFuncUrnIsSet() const
{
    return rotationFuncUrnIsSet_;
}

void CreateSecretRequestBody::unsetrotationFuncUrn()
{
    rotationFuncUrnIsSet_ = false;
}

}
}
}
}
}


