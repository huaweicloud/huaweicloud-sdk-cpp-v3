

#include "huaweicloud/live/v1/model/ModifyHarvestTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyHarvestTaskResponse::ModifyHarvestTaskResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    startTime_ = 0;
    startTimeIsSet_ = false;
    endTime_ = 0;
    endTimeIsSet_ = false;
    createTime_ = 0;
    createTimeIsSet_ = false;
    eventName_ = "";
    eventNameIsSet_ = false;
    taskDesc_ = "";
    taskDescIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    maxRetryCnt_ = 0;
    maxRetryCntIsSet_ = false;
    packageInfoIsSet_ = false;
}

ModifyHarvestTaskResponse::~ModifyHarvestTaskResponse() = default;

void ModifyHarvestTaskResponse::validate()
{
}

web::json::value ModifyHarvestTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(taskDescIsSet_) {
        val[utility::conversions::to_string_t("task_desc")] = ModelBase::toJson(taskDesc_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(maxRetryCntIsSet_) {
        val[utility::conversions::to_string_t("max_retry_cnt")] = ModelBase::toJson(maxRetryCnt_);
    }
    if(packageInfoIsSet_) {
        val[utility::conversions::to_string_t("package_info")] = ModelBase::toJson(packageInfo_);
    }

    return val;
}
bool ModifyHarvestTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskDesc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("max_retry_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_retry_cnt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRetryCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_info"));
        if(!fieldValue.is_null())
        {
            VodPackageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageInfo(refVal);
        }
    }
    return ok;
}


std::string ModifyHarvestTaskResponse::getJobId() const
{
    return jobId_;
}

void ModifyHarvestTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyHarvestTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyHarvestTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ModifyHarvestTaskResponse::getDomain() const
{
    return domain_;
}

void ModifyHarvestTaskResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyHarvestTaskResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyHarvestTaskResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyHarvestTaskResponse::getAppName() const
{
    return appName_;
}

void ModifyHarvestTaskResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyHarvestTaskResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyHarvestTaskResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyHarvestTaskResponse::getId() const
{
    return id_;
}

void ModifyHarvestTaskResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyHarvestTaskResponse::idIsSet() const
{
    return idIsSet_;
}

void ModifyHarvestTaskResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ModifyHarvestTaskResponse::getStartTime() const
{
    return startTime_;
}

void ModifyHarvestTaskResponse::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ModifyHarvestTaskResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ModifyHarvestTaskResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ModifyHarvestTaskResponse::getEndTime() const
{
    return endTime_;
}

void ModifyHarvestTaskResponse::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ModifyHarvestTaskResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ModifyHarvestTaskResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ModifyHarvestTaskResponse::getCreateTime() const
{
    return createTime_;
}

void ModifyHarvestTaskResponse::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ModifyHarvestTaskResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ModifyHarvestTaskResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ModifyHarvestTaskResponse::getEventName() const
{
    return eventName_;
}

void ModifyHarvestTaskResponse::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool ModifyHarvestTaskResponse::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void ModifyHarvestTaskResponse::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string ModifyHarvestTaskResponse::getTaskDesc() const
{
    return taskDesc_;
}

void ModifyHarvestTaskResponse::setTaskDesc(const std::string& value)
{
    taskDesc_ = value;
    taskDescIsSet_ = true;
}

bool ModifyHarvestTaskResponse::taskDescIsSet() const
{
    return taskDescIsSet_;
}

void ModifyHarvestTaskResponse::unsettaskDesc()
{
    taskDescIsSet_ = false;
}

std::string ModifyHarvestTaskResponse::getStatus() const
{
    return status_;
}

void ModifyHarvestTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyHarvestTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyHarvestTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ModifyHarvestTaskResponse::getMaxRetryCnt() const
{
    return maxRetryCnt_;
}

void ModifyHarvestTaskResponse::setMaxRetryCnt(int32_t value)
{
    maxRetryCnt_ = value;
    maxRetryCntIsSet_ = true;
}

bool ModifyHarvestTaskResponse::maxRetryCntIsSet() const
{
    return maxRetryCntIsSet_;
}

void ModifyHarvestTaskResponse::unsetmaxRetryCnt()
{
    maxRetryCntIsSet_ = false;
}

VodPackageInfo ModifyHarvestTaskResponse::getPackageInfo() const
{
    return packageInfo_;
}

void ModifyHarvestTaskResponse::setPackageInfo(const VodPackageInfo& value)
{
    packageInfo_ = value;
    packageInfoIsSet_ = true;
}

bool ModifyHarvestTaskResponse::packageInfoIsSet() const
{
    return packageInfoIsSet_;
}

void ModifyHarvestTaskResponse::unsetpackageInfo()
{
    packageInfoIsSet_ = false;
}

}
}
}
}
}


