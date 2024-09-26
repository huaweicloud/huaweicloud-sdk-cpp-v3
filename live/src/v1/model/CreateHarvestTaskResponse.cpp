

#include "huaweicloud/live/v1/model/CreateHarvestTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateHarvestTaskResponse::CreateHarvestTaskResponse()
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

CreateHarvestTaskResponse::~CreateHarvestTaskResponse() = default;

void CreateHarvestTaskResponse::validate()
{
}

web::json::value CreateHarvestTaskResponse::toJson() const
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
bool CreateHarvestTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateHarvestTaskResponse::getJobId() const
{
    return jobId_;
}

void CreateHarvestTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateHarvestTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateHarvestTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateHarvestTaskResponse::getDomain() const
{
    return domain_;
}

void CreateHarvestTaskResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateHarvestTaskResponse::domainIsSet() const
{
    return domainIsSet_;
}

void CreateHarvestTaskResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CreateHarvestTaskResponse::getAppName() const
{
    return appName_;
}

void CreateHarvestTaskResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool CreateHarvestTaskResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void CreateHarvestTaskResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string CreateHarvestTaskResponse::getId() const
{
    return id_;
}

void CreateHarvestTaskResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateHarvestTaskResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateHarvestTaskResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t CreateHarvestTaskResponse::getStartTime() const
{
    return startTime_;
}

void CreateHarvestTaskResponse::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateHarvestTaskResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateHarvestTaskResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t CreateHarvestTaskResponse::getEndTime() const
{
    return endTime_;
}

void CreateHarvestTaskResponse::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateHarvestTaskResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateHarvestTaskResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t CreateHarvestTaskResponse::getCreateTime() const
{
    return createTime_;
}

void CreateHarvestTaskResponse::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateHarvestTaskResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateHarvestTaskResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateHarvestTaskResponse::getEventName() const
{
    return eventName_;
}

void CreateHarvestTaskResponse::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool CreateHarvestTaskResponse::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void CreateHarvestTaskResponse::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string CreateHarvestTaskResponse::getTaskDesc() const
{
    return taskDesc_;
}

void CreateHarvestTaskResponse::setTaskDesc(const std::string& value)
{
    taskDesc_ = value;
    taskDescIsSet_ = true;
}

bool CreateHarvestTaskResponse::taskDescIsSet() const
{
    return taskDescIsSet_;
}

void CreateHarvestTaskResponse::unsettaskDesc()
{
    taskDescIsSet_ = false;
}

std::string CreateHarvestTaskResponse::getStatus() const
{
    return status_;
}

void CreateHarvestTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateHarvestTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateHarvestTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t CreateHarvestTaskResponse::getMaxRetryCnt() const
{
    return maxRetryCnt_;
}

void CreateHarvestTaskResponse::setMaxRetryCnt(int32_t value)
{
    maxRetryCnt_ = value;
    maxRetryCntIsSet_ = true;
}

bool CreateHarvestTaskResponse::maxRetryCntIsSet() const
{
    return maxRetryCntIsSet_;
}

void CreateHarvestTaskResponse::unsetmaxRetryCnt()
{
    maxRetryCntIsSet_ = false;
}

VodPackageInfo CreateHarvestTaskResponse::getPackageInfo() const
{
    return packageInfo_;
}

void CreateHarvestTaskResponse::setPackageInfo(const VodPackageInfo& value)
{
    packageInfo_ = value;
    packageInfoIsSet_ = true;
}

bool CreateHarvestTaskResponse::packageInfoIsSet() const
{
    return packageInfoIsSet_;
}

void CreateHarvestTaskResponse::unsetpackageInfo()
{
    packageInfoIsSet_ = false;
}

}
}
}
}
}


