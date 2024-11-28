

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
    autoRotation_ = false;
    autoRotationIsSet_ = false;
    rotationPeriod_ = "";
    rotationPeriodIsSet_ = false;
    eventSubscriptionsIsSet_ = false;
    rotationFuncUrn_ = "";
    rotationFuncUrnIsSet_ = false;
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
    if(autoRotationIsSet_) {
        val[utility::conversions::to_string_t("auto_rotation")] = ModelBase::toJson(autoRotation_);
    }
    if(rotationPeriodIsSet_) {
        val[utility::conversions::to_string_t("rotation_period")] = ModelBase::toJson(rotationPeriod_);
    }
    if(eventSubscriptionsIsSet_) {
        val[utility::conversions::to_string_t("event_subscriptions")] = ModelBase::toJson(eventSubscriptions_);
    }
    if(rotationFuncUrnIsSet_) {
        val[utility::conversions::to_string_t("rotation_func_urn")] = ModelBase::toJson(rotationFuncUrn_);
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
    if(val.has_field(utility::conversions::to_string_t("event_subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventSubscriptions(refVal);
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

bool UpdateSecretRequestBody::isAutoRotation() const
{
    return autoRotation_;
}

void UpdateSecretRequestBody::setAutoRotation(bool value)
{
    autoRotation_ = value;
    autoRotationIsSet_ = true;
}

bool UpdateSecretRequestBody::autoRotationIsSet() const
{
    return autoRotationIsSet_;
}

void UpdateSecretRequestBody::unsetautoRotation()
{
    autoRotationIsSet_ = false;
}

std::string UpdateSecretRequestBody::getRotationPeriod() const
{
    return rotationPeriod_;
}

void UpdateSecretRequestBody::setRotationPeriod(const std::string& value)
{
    rotationPeriod_ = value;
    rotationPeriodIsSet_ = true;
}

bool UpdateSecretRequestBody::rotationPeriodIsSet() const
{
    return rotationPeriodIsSet_;
}

void UpdateSecretRequestBody::unsetrotationPeriod()
{
    rotationPeriodIsSet_ = false;
}

std::vector<std::string>& UpdateSecretRequestBody::getEventSubscriptions()
{
    return eventSubscriptions_;
}

void UpdateSecretRequestBody::setEventSubscriptions(const std::vector<std::string>& value)
{
    eventSubscriptions_ = value;
    eventSubscriptionsIsSet_ = true;
}

bool UpdateSecretRequestBody::eventSubscriptionsIsSet() const
{
    return eventSubscriptionsIsSet_;
}

void UpdateSecretRequestBody::unseteventSubscriptions()
{
    eventSubscriptionsIsSet_ = false;
}

std::string UpdateSecretRequestBody::getRotationFuncUrn() const
{
    return rotationFuncUrn_;
}

void UpdateSecretRequestBody::setRotationFuncUrn(const std::string& value)
{
    rotationFuncUrn_ = value;
    rotationFuncUrnIsSet_ = true;
}

bool UpdateSecretRequestBody::rotationFuncUrnIsSet() const
{
    return rotationFuncUrnIsSet_;
}

void UpdateSecretRequestBody::unsetrotationFuncUrn()
{
    rotationFuncUrnIsSet_ = false;
}

}
}
}
}
}


