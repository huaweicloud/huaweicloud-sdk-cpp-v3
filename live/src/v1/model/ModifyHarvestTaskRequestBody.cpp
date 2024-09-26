

#include "huaweicloud/live/v1/model/ModifyHarvestTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyHarvestTaskRequestBody::ModifyHarvestTaskRequestBody()
{
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
    eventName_ = "";
    eventNameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    taskDesc_ = "";
    taskDescIsSet_ = false;
    packageInfoIsSet_ = false;
}

ModifyHarvestTaskRequestBody::~ModifyHarvestTaskRequestBody() = default;

void ModifyHarvestTaskRequestBody::validate()
{
}

web::json::value ModifyHarvestTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(taskDescIsSet_) {
        val[utility::conversions::to_string_t("task_desc")] = ModelBase::toJson(taskDesc_);
    }
    if(packageInfoIsSet_) {
        val[utility::conversions::to_string_t("package_info")] = ModelBase::toJson(packageInfo_);
    }

    return val;
}
bool ModifyHarvestTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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


std::string ModifyHarvestTaskRequestBody::getDomain() const
{
    return domain_;
}

void ModifyHarvestTaskRequestBody::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyHarvestTaskRequestBody::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyHarvestTaskRequestBody::getAppName() const
{
    return appName_;
}

void ModifyHarvestTaskRequestBody::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyHarvestTaskRequestBody::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyHarvestTaskRequestBody::getId() const
{
    return id_;
}

void ModifyHarvestTaskRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::idIsSet() const
{
    return idIsSet_;
}

void ModifyHarvestTaskRequestBody::unsetid()
{
    idIsSet_ = false;
}

int32_t ModifyHarvestTaskRequestBody::getStartTime() const
{
    return startTime_;
}

void ModifyHarvestTaskRequestBody::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ModifyHarvestTaskRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ModifyHarvestTaskRequestBody::getEndTime() const
{
    return endTime_;
}

void ModifyHarvestTaskRequestBody::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ModifyHarvestTaskRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ModifyHarvestTaskRequestBody::getEventName() const
{
    return eventName_;
}

void ModifyHarvestTaskRequestBody::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void ModifyHarvestTaskRequestBody::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string ModifyHarvestTaskRequestBody::getJobId() const
{
    return jobId_;
}

void ModifyHarvestTaskRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyHarvestTaskRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ModifyHarvestTaskRequestBody::getTaskDesc() const
{
    return taskDesc_;
}

void ModifyHarvestTaskRequestBody::setTaskDesc(const std::string& value)
{
    taskDesc_ = value;
    taskDescIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::taskDescIsSet() const
{
    return taskDescIsSet_;
}

void ModifyHarvestTaskRequestBody::unsettaskDesc()
{
    taskDescIsSet_ = false;
}

VodPackageInfo ModifyHarvestTaskRequestBody::getPackageInfo() const
{
    return packageInfo_;
}

void ModifyHarvestTaskRequestBody::setPackageInfo(const VodPackageInfo& value)
{
    packageInfo_ = value;
    packageInfoIsSet_ = true;
}

bool ModifyHarvestTaskRequestBody::packageInfoIsSet() const
{
    return packageInfoIsSet_;
}

void ModifyHarvestTaskRequestBody::unsetpackageInfo()
{
    packageInfoIsSet_ = false;
}

}
}
}
}
}


