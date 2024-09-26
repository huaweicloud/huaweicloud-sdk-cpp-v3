

#include "huaweicloud/live/v1/model/HarvestTaskCreateSucRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




HarvestTaskCreateSucRsp::HarvestTaskCreateSucRsp()
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

HarvestTaskCreateSucRsp::~HarvestTaskCreateSucRsp() = default;

void HarvestTaskCreateSucRsp::validate()
{
}

web::json::value HarvestTaskCreateSucRsp::toJson() const
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
bool HarvestTaskCreateSucRsp::fromJson(const web::json::value& val)
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


std::string HarvestTaskCreateSucRsp::getJobId() const
{
    return jobId_;
}

void HarvestTaskCreateSucRsp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void HarvestTaskCreateSucRsp::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string HarvestTaskCreateSucRsp::getDomain() const
{
    return domain_;
}

void HarvestTaskCreateSucRsp::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::domainIsSet() const
{
    return domainIsSet_;
}

void HarvestTaskCreateSucRsp::unsetdomain()
{
    domainIsSet_ = false;
}

std::string HarvestTaskCreateSucRsp::getAppName() const
{
    return appName_;
}

void HarvestTaskCreateSucRsp::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::appNameIsSet() const
{
    return appNameIsSet_;
}

void HarvestTaskCreateSucRsp::unsetappName()
{
    appNameIsSet_ = false;
}

std::string HarvestTaskCreateSucRsp::getId() const
{
    return id_;
}

void HarvestTaskCreateSucRsp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::idIsSet() const
{
    return idIsSet_;
}

void HarvestTaskCreateSucRsp::unsetid()
{
    idIsSet_ = false;
}

int32_t HarvestTaskCreateSucRsp::getStartTime() const
{
    return startTime_;
}

void HarvestTaskCreateSucRsp::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void HarvestTaskCreateSucRsp::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t HarvestTaskCreateSucRsp::getEndTime() const
{
    return endTime_;
}

void HarvestTaskCreateSucRsp::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void HarvestTaskCreateSucRsp::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t HarvestTaskCreateSucRsp::getCreateTime() const
{
    return createTime_;
}

void HarvestTaskCreateSucRsp::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void HarvestTaskCreateSucRsp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string HarvestTaskCreateSucRsp::getEventName() const
{
    return eventName_;
}

void HarvestTaskCreateSucRsp::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void HarvestTaskCreateSucRsp::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string HarvestTaskCreateSucRsp::getTaskDesc() const
{
    return taskDesc_;
}

void HarvestTaskCreateSucRsp::setTaskDesc(const std::string& value)
{
    taskDesc_ = value;
    taskDescIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::taskDescIsSet() const
{
    return taskDescIsSet_;
}

void HarvestTaskCreateSucRsp::unsettaskDesc()
{
    taskDescIsSet_ = false;
}

std::string HarvestTaskCreateSucRsp::getStatus() const
{
    return status_;
}

void HarvestTaskCreateSucRsp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::statusIsSet() const
{
    return statusIsSet_;
}

void HarvestTaskCreateSucRsp::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t HarvestTaskCreateSucRsp::getMaxRetryCnt() const
{
    return maxRetryCnt_;
}

void HarvestTaskCreateSucRsp::setMaxRetryCnt(int32_t value)
{
    maxRetryCnt_ = value;
    maxRetryCntIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::maxRetryCntIsSet() const
{
    return maxRetryCntIsSet_;
}

void HarvestTaskCreateSucRsp::unsetmaxRetryCnt()
{
    maxRetryCntIsSet_ = false;
}

VodPackageInfo HarvestTaskCreateSucRsp::getPackageInfo() const
{
    return packageInfo_;
}

void HarvestTaskCreateSucRsp::setPackageInfo(const VodPackageInfo& value)
{
    packageInfo_ = value;
    packageInfoIsSet_ = true;
}

bool HarvestTaskCreateSucRsp::packageInfoIsSet() const
{
    return packageInfoIsSet_;
}

void HarvestTaskCreateSucRsp::unsetpackageInfo()
{
    packageInfoIsSet_ = false;
}

}
}
}
}
}


