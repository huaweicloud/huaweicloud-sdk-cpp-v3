

#include "huaweicloud/gaussdbforopengauss/v3/model/AlarmHistoryRecordResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AlarmHistoryRecordResult::AlarmHistoryRecordResult()
{
    alarmId_ = "";
    alarmIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    alarmType_ = "";
    alarmTypeIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

AlarmHistoryRecordResult::~AlarmHistoryRecordResult() = default;

void AlarmHistoryRecordResult::validate()
{
}

web::json::value AlarmHistoryRecordResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alarmIdIsSet_) {
        val[utility::conversions::to_string_t("alarm_id")] = ModelBase::toJson(alarmId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(alarmTypeIsSet_) {
        val[utility::conversions::to_string_t("alarm_type")] = ModelBase::toJson(alarmType_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool AlarmHistoryRecordResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    return ok;
}


std::string AlarmHistoryRecordResult::getAlarmId() const
{
    return alarmId_;
}

void AlarmHistoryRecordResult::setAlarmId(const std::string& value)
{
    alarmId_ = value;
    alarmIdIsSet_ = true;
}

bool AlarmHistoryRecordResult::alarmIdIsSet() const
{
    return alarmIdIsSet_;
}

void AlarmHistoryRecordResult::unsetalarmId()
{
    alarmIdIsSet_ = false;
}

std::string AlarmHistoryRecordResult::getName() const
{
    return name_;
}

void AlarmHistoryRecordResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlarmHistoryRecordResult::nameIsSet() const
{
    return nameIsSet_;
}

void AlarmHistoryRecordResult::unsetname()
{
    nameIsSet_ = false;
}

std::string AlarmHistoryRecordResult::getStatus() const
{
    return status_;
}

void AlarmHistoryRecordResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AlarmHistoryRecordResult::statusIsSet() const
{
    return statusIsSet_;
}

void AlarmHistoryRecordResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AlarmHistoryRecordResult::getAlarmType() const
{
    return alarmType_;
}

void AlarmHistoryRecordResult::setAlarmType(const std::string& value)
{
    alarmType_ = value;
    alarmTypeIsSet_ = true;
}

bool AlarmHistoryRecordResult::alarmTypeIsSet() const
{
    return alarmTypeIsSet_;
}

void AlarmHistoryRecordResult::unsetalarmType()
{
    alarmTypeIsSet_ = false;
}

int32_t AlarmHistoryRecordResult::getLevel() const
{
    return level_;
}

void AlarmHistoryRecordResult::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool AlarmHistoryRecordResult::levelIsSet() const
{
    return levelIsSet_;
}

void AlarmHistoryRecordResult::unsetlevel()
{
    levelIsSet_ = false;
}

std::string AlarmHistoryRecordResult::getInstanceId() const
{
    return instanceId_;
}

void AlarmHistoryRecordResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AlarmHistoryRecordResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AlarmHistoryRecordResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AlarmHistoryRecordResult::getInstanceName() const
{
    return instanceName_;
}

void AlarmHistoryRecordResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool AlarmHistoryRecordResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void AlarmHistoryRecordResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int64_t AlarmHistoryRecordResult::getBeginTime() const
{
    return beginTime_;
}

void AlarmHistoryRecordResult::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool AlarmHistoryRecordResult::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void AlarmHistoryRecordResult::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t AlarmHistoryRecordResult::getUpdateTime() const
{
    return updateTime_;
}

void AlarmHistoryRecordResult::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AlarmHistoryRecordResult::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AlarmHistoryRecordResult::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


