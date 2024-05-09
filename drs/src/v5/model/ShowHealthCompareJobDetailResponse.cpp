

#include "huaweicloud/drs/v5/model/ShowHealthCompareJobDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowHealthCompareJobDetailResponse::ShowHealthCompareJobDetailResponse()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
}

ShowHealthCompareJobDetailResponse::~ShowHealthCompareJobDetailResponse() = default;

void ShowHealthCompareJobDetailResponse::validate()
{
}

web::json::value ShowHealthCompareJobDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }

    return val;
}
bool ShowHealthCompareJobDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    return ok;
}


std::string ShowHealthCompareJobDetailResponse::getId() const
{
    return id_;
}

void ShowHealthCompareJobDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowHealthCompareJobDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowHealthCompareJobDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowHealthCompareJobDetailResponse::getType() const
{
    return type_;
}

void ShowHealthCompareJobDetailResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowHealthCompareJobDetailResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowHealthCompareJobDetailResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowHealthCompareJobDetailResponse::getStartTime() const
{
    return startTime_;
}

void ShowHealthCompareJobDetailResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowHealthCompareJobDetailResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowHealthCompareJobDetailResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowHealthCompareJobDetailResponse::getEndTime() const
{
    return endTime_;
}

void ShowHealthCompareJobDetailResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowHealthCompareJobDetailResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowHealthCompareJobDetailResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowHealthCompareJobDetailResponse::getStatus() const
{
    return status_;
}

void ShowHealthCompareJobDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHealthCompareJobDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHealthCompareJobDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowHealthCompareJobDetailResponse::getJobName() const
{
    return jobName_;
}

void ShowHealthCompareJobDetailResponse::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ShowHealthCompareJobDetailResponse::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ShowHealthCompareJobDetailResponse::unsetjobName()
{
    jobNameIsSet_ = false;
}

}
}
}
}
}


