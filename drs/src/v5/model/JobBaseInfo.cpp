

#include "huaweicloud/drs/v5/model/JobBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobBaseInfo::JobBaseInfo()
{
    name_ = "";
    nameIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    multiWrite_ = false;
    multiWriteIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    expiredDays_ = "";
    expiredDaysIsSet_ = false;
    tagsIsSet_ = false;
    isOpenFastClean_ = false;
    isOpenFastCleanIsSet_ = false;
}

JobBaseInfo::~JobBaseInfo() = default;

void JobBaseInfo::validate()
{
}

web::json::value JobBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(multiWriteIsSet_) {
        val[utility::conversions::to_string_t("multi_write")] = ModelBase::toJson(multiWrite_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(expiredDaysIsSet_) {
        val[utility::conversions::to_string_t("expired_days")] = ModelBase::toJson(expiredDays_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(isOpenFastCleanIsSet_) {
        val[utility::conversions::to_string_t("is_open_fast_clean")] = ModelBase::toJson(isOpenFastClean_);
    }

    return val;
}
bool JobBaseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_write"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_write"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiWrite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_open_fast_clean"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_open_fast_clean"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOpenFastClean(refVal);
        }
    }
    return ok;
}


std::string JobBaseInfo::getName() const
{
    return name_;
}

void JobBaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobBaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void JobBaseInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string JobBaseInfo::getJobType() const
{
    return jobType_;
}

void JobBaseInfo::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool JobBaseInfo::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void JobBaseInfo::unsetjobType()
{
    jobTypeIsSet_ = false;
}

bool JobBaseInfo::isMultiWrite() const
{
    return multiWrite_;
}

void JobBaseInfo::setMultiWrite(bool value)
{
    multiWrite_ = value;
    multiWriteIsSet_ = true;
}

bool JobBaseInfo::multiWriteIsSet() const
{
    return multiWriteIsSet_;
}

void JobBaseInfo::unsetmultiWrite()
{
    multiWriteIsSet_ = false;
}

std::string JobBaseInfo::getEngineType() const
{
    return engineType_;
}

void JobBaseInfo::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool JobBaseInfo::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void JobBaseInfo::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string JobBaseInfo::getJobDirection() const
{
    return jobDirection_;
}

void JobBaseInfo::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool JobBaseInfo::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void JobBaseInfo::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string JobBaseInfo::getTaskType() const
{
    return taskType_;
}

void JobBaseInfo::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool JobBaseInfo::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void JobBaseInfo::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string JobBaseInfo::getNetType() const
{
    return netType_;
}

void JobBaseInfo::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool JobBaseInfo::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void JobBaseInfo::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string JobBaseInfo::getChargingMode() const
{
    return chargingMode_;
}

void JobBaseInfo::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool JobBaseInfo::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void JobBaseInfo::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string JobBaseInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void JobBaseInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool JobBaseInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void JobBaseInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string JobBaseInfo::getDescription() const
{
    return description_;
}

void JobBaseInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobBaseInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobBaseInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string JobBaseInfo::getStartTime() const
{
    return startTime_;
}

void JobBaseInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool JobBaseInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void JobBaseInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string JobBaseInfo::getExpiredDays() const
{
    return expiredDays_;
}

void JobBaseInfo::setExpiredDays(const std::string& value)
{
    expiredDays_ = value;
    expiredDaysIsSet_ = true;
}

bool JobBaseInfo::expiredDaysIsSet() const
{
    return expiredDaysIsSet_;
}

void JobBaseInfo::unsetexpiredDays()
{
    expiredDaysIsSet_ = false;
}

std::vector<ResourceTag>& JobBaseInfo::getTags()
{
    return tags_;
}

void JobBaseInfo::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool JobBaseInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void JobBaseInfo::unsettags()
{
    tagsIsSet_ = false;
}

bool JobBaseInfo::isIsOpenFastClean() const
{
    return isOpenFastClean_;
}

void JobBaseInfo::setIsOpenFastClean(bool value)
{
    isOpenFastClean_ = value;
    isOpenFastCleanIsSet_ = true;
}

bool JobBaseInfo::isOpenFastCleanIsSet() const
{
    return isOpenFastCleanIsSet_;
}

void JobBaseInfo::unsetisOpenFastClean()
{
    isOpenFastCleanIsSet_ = false;
}

}
}
}
}
}


