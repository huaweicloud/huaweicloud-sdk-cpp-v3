

#include "huaweicloud/csms/v1/model/Secret.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




Secret::Secret()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    kmsKeyId_ = "";
    kmsKeyIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    scheduledDeleteTime_ = 0L;
    scheduledDeleteTimeIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
    autoRotation_ = false;
    autoRotationIsSet_ = false;
    rotationPeriod_ = "";
    rotationPeriodIsSet_ = false;
    rotationConfig_ = "";
    rotationConfigIsSet_ = false;
    rotationTime_ = 0L;
    rotationTimeIsSet_ = false;
    nextRotationTime_ = 0L;
    nextRotationTimeIsSet_ = false;
    eventSubscriptionsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

Secret::~Secret() = default;

void Secret::validate()
{
}

web::json::value Secret::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(kmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_key_id")] = ModelBase::toJson(kmsKeyId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(scheduledDeleteTimeIsSet_) {
        val[utility::conversions::to_string_t("scheduled_delete_time")] = ModelBase::toJson(scheduledDeleteTime_);
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
    if(rotationTimeIsSet_) {
        val[utility::conversions::to_string_t("rotation_time")] = ModelBase::toJson(rotationTime_);
    }
    if(nextRotationTimeIsSet_) {
        val[utility::conversions::to_string_t("next_rotation_time")] = ModelBase::toJson(nextRotationTime_);
    }
    if(eventSubscriptionsIsSet_) {
        val[utility::conversions::to_string_t("event_subscriptions")] = ModelBase::toJson(eventSubscriptions_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool Secret::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheduled_delete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduled_delete_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduledDeleteTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rotation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_rotation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_rotation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextRotationTime(refVal);
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
    return ok;
}

std::string Secret::getId() const
{
    return id_;
}

void Secret::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Secret::idIsSet() const
{
    return idIsSet_;
}

void Secret::unsetid()
{
    idIsSet_ = false;
}

std::string Secret::getName() const
{
    return name_;
}

void Secret::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Secret::nameIsSet() const
{
    return nameIsSet_;
}

void Secret::unsetname()
{
    nameIsSet_ = false;
}

std::string Secret::getState() const
{
    return state_;
}

void Secret::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool Secret::stateIsSet() const
{
    return stateIsSet_;
}

void Secret::unsetstate()
{
    stateIsSet_ = false;
}

std::string Secret::getKmsKeyId() const
{
    return kmsKeyId_;
}

void Secret::setKmsKeyId(const std::string& value)
{
    kmsKeyId_ = value;
    kmsKeyIdIsSet_ = true;
}

bool Secret::kmsKeyIdIsSet() const
{
    return kmsKeyIdIsSet_;
}

void Secret::unsetkmsKeyId()
{
    kmsKeyIdIsSet_ = false;
}

std::string Secret::getDescription() const
{
    return description_;
}

void Secret::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Secret::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Secret::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t Secret::getCreateTime() const
{
    return createTime_;
}

void Secret::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Secret::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Secret::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t Secret::getUpdateTime() const
{
    return updateTime_;
}

void Secret::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool Secret::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void Secret::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t Secret::getScheduledDeleteTime() const
{
    return scheduledDeleteTime_;
}

void Secret::setScheduledDeleteTime(int64_t value)
{
    scheduledDeleteTime_ = value;
    scheduledDeleteTimeIsSet_ = true;
}

bool Secret::scheduledDeleteTimeIsSet() const
{
    return scheduledDeleteTimeIsSet_;
}

void Secret::unsetscheduledDeleteTime()
{
    scheduledDeleteTimeIsSet_ = false;
}

std::string Secret::getSecretType() const
{
    return secretType_;
}

void Secret::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool Secret::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void Secret::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

bool Secret::isAutoRotation() const
{
    return autoRotation_;
}

void Secret::setAutoRotation(bool value)
{
    autoRotation_ = value;
    autoRotationIsSet_ = true;
}

bool Secret::autoRotationIsSet() const
{
    return autoRotationIsSet_;
}

void Secret::unsetautoRotation()
{
    autoRotationIsSet_ = false;
}

std::string Secret::getRotationPeriod() const
{
    return rotationPeriod_;
}

void Secret::setRotationPeriod(const std::string& value)
{
    rotationPeriod_ = value;
    rotationPeriodIsSet_ = true;
}

bool Secret::rotationPeriodIsSet() const
{
    return rotationPeriodIsSet_;
}

void Secret::unsetrotationPeriod()
{
    rotationPeriodIsSet_ = false;
}

std::string Secret::getRotationConfig() const
{
    return rotationConfig_;
}

void Secret::setRotationConfig(const std::string& value)
{
    rotationConfig_ = value;
    rotationConfigIsSet_ = true;
}

bool Secret::rotationConfigIsSet() const
{
    return rotationConfigIsSet_;
}

void Secret::unsetrotationConfig()
{
    rotationConfigIsSet_ = false;
}

int64_t Secret::getRotationTime() const
{
    return rotationTime_;
}

void Secret::setRotationTime(int64_t value)
{
    rotationTime_ = value;
    rotationTimeIsSet_ = true;
}

bool Secret::rotationTimeIsSet() const
{
    return rotationTimeIsSet_;
}

void Secret::unsetrotationTime()
{
    rotationTimeIsSet_ = false;
}

int64_t Secret::getNextRotationTime() const
{
    return nextRotationTime_;
}

void Secret::setNextRotationTime(int64_t value)
{
    nextRotationTime_ = value;
    nextRotationTimeIsSet_ = true;
}

bool Secret::nextRotationTimeIsSet() const
{
    return nextRotationTimeIsSet_;
}

void Secret::unsetnextRotationTime()
{
    nextRotationTimeIsSet_ = false;
}

std::vector<std::string>& Secret::getEventSubscriptions()
{
    return eventSubscriptions_;
}

void Secret::setEventSubscriptions(const std::vector<std::string>& value)
{
    eventSubscriptions_ = value;
    eventSubscriptionsIsSet_ = true;
}

bool Secret::eventSubscriptionsIsSet() const
{
    return eventSubscriptionsIsSet_;
}

void Secret::unseteventSubscriptions()
{
    eventSubscriptionsIsSet_ = false;
}

std::string Secret::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void Secret::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool Secret::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void Secret::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


