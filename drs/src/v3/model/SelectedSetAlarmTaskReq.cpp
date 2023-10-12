

#include "huaweicloud/drs/v3/model/SelectedSetAlarmTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




SelectedSetAlarmTaskReq::SelectedSetAlarmTaskReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
}

SelectedSetAlarmTaskReq::~SelectedSetAlarmTaskReq() = default;

void SelectedSetAlarmTaskReq::validate()
{
}

web::json::value SelectedSetAlarmTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }

    return val;
}
bool SelectedSetAlarmTaskReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string SelectedSetAlarmTaskReq::getJobId() const
{
    return jobId_;
}

void SelectedSetAlarmTaskReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SelectedSetAlarmTaskReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SelectedSetAlarmTaskReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SelectedSetAlarmTaskReq::getStatus() const
{
    return status_;
}

void SelectedSetAlarmTaskReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SelectedSetAlarmTaskReq::statusIsSet() const
{
    return statusIsSet_;
}

void SelectedSetAlarmTaskReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SelectedSetAlarmTaskReq::getEngineType() const
{
    return engineType_;
}

void SelectedSetAlarmTaskReq::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool SelectedSetAlarmTaskReq::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void SelectedSetAlarmTaskReq::unsetengineType()
{
    engineTypeIsSet_ = false;
}

}
}
}
}
}


