

#include "huaweicloud/live/v1/model/CreateHarvestTaskInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateHarvestTaskInfoReq::CreateHarvestTaskInfoReq()
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
    taskDesc_ = "";
    taskDescIsSet_ = false;
    packageInfoIsSet_ = false;
}

CreateHarvestTaskInfoReq::~CreateHarvestTaskInfoReq() = default;

void CreateHarvestTaskInfoReq::validate()
{
}

web::json::value CreateHarvestTaskInfoReq::toJson() const
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
    if(taskDescIsSet_) {
        val[utility::conversions::to_string_t("task_desc")] = ModelBase::toJson(taskDesc_);
    }
    if(packageInfoIsSet_) {
        val[utility::conversions::to_string_t("package_info")] = ModelBase::toJson(packageInfo_);
    }

    return val;
}
bool CreateHarvestTaskInfoReq::fromJson(const web::json::value& val)
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


std::string CreateHarvestTaskInfoReq::getDomain() const
{
    return domain_;
}

void CreateHarvestTaskInfoReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateHarvestTaskInfoReq::domainIsSet() const
{
    return domainIsSet_;
}

void CreateHarvestTaskInfoReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CreateHarvestTaskInfoReq::getAppName() const
{
    return appName_;
}

void CreateHarvestTaskInfoReq::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool CreateHarvestTaskInfoReq::appNameIsSet() const
{
    return appNameIsSet_;
}

void CreateHarvestTaskInfoReq::unsetappName()
{
    appNameIsSet_ = false;
}

std::string CreateHarvestTaskInfoReq::getId() const
{
    return id_;
}

void CreateHarvestTaskInfoReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateHarvestTaskInfoReq::idIsSet() const
{
    return idIsSet_;
}

void CreateHarvestTaskInfoReq::unsetid()
{
    idIsSet_ = false;
}

int32_t CreateHarvestTaskInfoReq::getStartTime() const
{
    return startTime_;
}

void CreateHarvestTaskInfoReq::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateHarvestTaskInfoReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateHarvestTaskInfoReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t CreateHarvestTaskInfoReq::getEndTime() const
{
    return endTime_;
}

void CreateHarvestTaskInfoReq::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateHarvestTaskInfoReq::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateHarvestTaskInfoReq::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CreateHarvestTaskInfoReq::getEventName() const
{
    return eventName_;
}

void CreateHarvestTaskInfoReq::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool CreateHarvestTaskInfoReq::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void CreateHarvestTaskInfoReq::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string CreateHarvestTaskInfoReq::getTaskDesc() const
{
    return taskDesc_;
}

void CreateHarvestTaskInfoReq::setTaskDesc(const std::string& value)
{
    taskDesc_ = value;
    taskDescIsSet_ = true;
}

bool CreateHarvestTaskInfoReq::taskDescIsSet() const
{
    return taskDescIsSet_;
}

void CreateHarvestTaskInfoReq::unsettaskDesc()
{
    taskDescIsSet_ = false;
}

VodPackageInfo CreateHarvestTaskInfoReq::getPackageInfo() const
{
    return packageInfo_;
}

void CreateHarvestTaskInfoReq::setPackageInfo(const VodPackageInfo& value)
{
    packageInfo_ = value;
    packageInfoIsSet_ = true;
}

bool CreateHarvestTaskInfoReq::packageInfoIsSet() const
{
    return packageInfoIsSet_;
}

void CreateHarvestTaskInfoReq::unsetpackageInfo()
{
    packageInfoIsSet_ = false;
}

}
}
}
}
}


