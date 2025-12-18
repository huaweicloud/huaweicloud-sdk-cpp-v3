

#include "huaweicloud/cce/v3/model/V2JobStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




V2JobStatus::V2JobStatus()
{
    status_ = "";
    statusIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    completionTime_ = "";
    completionTimeIsSet_ = false;
}

V2JobStatus::~V2JobStatus() = default;

void V2JobStatus::validate()
{
}

web::json::value V2JobStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(completionTimeIsSet_) {
        val[utility::conversions::to_string_t("completionTime")] = ModelBase::toJson(completionTime_);
    }

    return val;
}
bool V2JobStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completionTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completionTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletionTime(refVal);
        }
    }
    return ok;
}


std::string V2JobStatus::getStatus() const
{
    return status_;
}

void V2JobStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool V2JobStatus::statusIsSet() const
{
    return statusIsSet_;
}

void V2JobStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::string V2JobStatus::getReason() const
{
    return reason_;
}

void V2JobStatus::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool V2JobStatus::reasonIsSet() const
{
    return reasonIsSet_;
}

void V2JobStatus::unsetreason()
{
    reasonIsSet_ = false;
}

std::string V2JobStatus::getCompletionTime() const
{
    return completionTime_;
}

void V2JobStatus::setCompletionTime(const std::string& value)
{
    completionTime_ = value;
    completionTimeIsSet_ = true;
}

bool V2JobStatus::completionTimeIsSet() const
{
    return completionTimeIsSet_;
}

void V2JobStatus::unsetcompletionTime()
{
    completionTimeIsSet_ = false;
}

}
}
}
}
}


