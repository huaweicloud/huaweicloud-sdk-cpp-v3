

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

}
}
}
}
}


