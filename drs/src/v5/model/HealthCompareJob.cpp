

#include "huaweicloud/drs/v5/model/HealthCompareJob.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




HealthCompareJob::HealthCompareJob()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    computeType_ = "";
    computeTypeIsSet_ = false;
}

HealthCompareJob::~HealthCompareJob() = default;

void HealthCompareJob::validate()
{
}

web::json::value HealthCompareJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(computeTypeIsSet_) {
        val[utility::conversions::to_string_t("compute_type")] = ModelBase::toJson(computeType_);
    }

    return val;
}

bool HealthCompareJob::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("compute_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compute_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeType(refVal);
        }
    }
    return ok;
}

std::string HealthCompareJob::getId() const
{
    return id_;
}

void HealthCompareJob::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HealthCompareJob::idIsSet() const
{
    return idIsSet_;
}

void HealthCompareJob::unsetid()
{
    idIsSet_ = false;
}

std::string HealthCompareJob::getType() const
{
    return type_;
}

void HealthCompareJob::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HealthCompareJob::typeIsSet() const
{
    return typeIsSet_;
}

void HealthCompareJob::unsettype()
{
    typeIsSet_ = false;
}

std::string HealthCompareJob::getStatus() const
{
    return status_;
}

void HealthCompareJob::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HealthCompareJob::statusIsSet() const
{
    return statusIsSet_;
}

void HealthCompareJob::unsetstatus()
{
    statusIsSet_ = false;
}

std::string HealthCompareJob::getStartTime() const
{
    return startTime_;
}

void HealthCompareJob::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool HealthCompareJob::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void HealthCompareJob::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string HealthCompareJob::getEndTime() const
{
    return endTime_;
}

void HealthCompareJob::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool HealthCompareJob::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void HealthCompareJob::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string HealthCompareJob::getComputeType() const
{
    return computeType_;
}

void HealthCompareJob::setComputeType(const std::string& value)
{
    computeType_ = value;
    computeTypeIsSet_ = true;
}

bool HealthCompareJob::computeTypeIsSet() const
{
    return computeTypeIsSet_;
}

void HealthCompareJob::unsetcomputeType()
{
    computeTypeIsSet_ = false;
}

}
}
}
}
}


