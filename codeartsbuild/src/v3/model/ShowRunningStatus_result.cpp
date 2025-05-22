

#include "huaweicloud/codeartsbuild/v3/model/ShowRunningStatus_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowRunningStatus_result::ShowRunningStatus_result()
{
    lastJobId_ = "";
    lastJobIdIsSet_ = false;
    lastBuildNo_ = "";
    lastBuildNoIsSet_ = false;
    lastBuildStatus_ = "";
    lastBuildStatusIsSet_ = false;
    isRunning_ = false;
    isRunningIsSet_ = false;
}

ShowRunningStatus_result::~ShowRunningStatus_result() = default;

void ShowRunningStatus_result::validate()
{
}

web::json::value ShowRunningStatus_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lastJobIdIsSet_) {
        val[utility::conversions::to_string_t("last_job_id")] = ModelBase::toJson(lastJobId_);
    }
    if(lastBuildNoIsSet_) {
        val[utility::conversions::to_string_t("last_build_no")] = ModelBase::toJson(lastBuildNo_);
    }
    if(lastBuildStatusIsSet_) {
        val[utility::conversions::to_string_t("last_build_status")] = ModelBase::toJson(lastBuildStatus_);
    }
    if(isRunningIsSet_) {
        val[utility::conversions::to_string_t("is_running")] = ModelBase::toJson(isRunning_);
    }

    return val;
}
bool ShowRunningStatus_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("last_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_build_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastBuildStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_running"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_running"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRunning(refVal);
        }
    }
    return ok;
}


std::string ShowRunningStatus_result::getLastJobId() const
{
    return lastJobId_;
}

void ShowRunningStatus_result::setLastJobId(const std::string& value)
{
    lastJobId_ = value;
    lastJobIdIsSet_ = true;
}

bool ShowRunningStatus_result::lastJobIdIsSet() const
{
    return lastJobIdIsSet_;
}

void ShowRunningStatus_result::unsetlastJobId()
{
    lastJobIdIsSet_ = false;
}

std::string ShowRunningStatus_result::getLastBuildNo() const
{
    return lastBuildNo_;
}

void ShowRunningStatus_result::setLastBuildNo(const std::string& value)
{
    lastBuildNo_ = value;
    lastBuildNoIsSet_ = true;
}

bool ShowRunningStatus_result::lastBuildNoIsSet() const
{
    return lastBuildNoIsSet_;
}

void ShowRunningStatus_result::unsetlastBuildNo()
{
    lastBuildNoIsSet_ = false;
}

std::string ShowRunningStatus_result::getLastBuildStatus() const
{
    return lastBuildStatus_;
}

void ShowRunningStatus_result::setLastBuildStatus(const std::string& value)
{
    lastBuildStatus_ = value;
    lastBuildStatusIsSet_ = true;
}

bool ShowRunningStatus_result::lastBuildStatusIsSet() const
{
    return lastBuildStatusIsSet_;
}

void ShowRunningStatus_result::unsetlastBuildStatus()
{
    lastBuildStatusIsSet_ = false;
}

bool ShowRunningStatus_result::isIsRunning() const
{
    return isRunning_;
}

void ShowRunningStatus_result::setIsRunning(bool value)
{
    isRunning_ = value;
    isRunningIsSet_ = true;
}

bool ShowRunningStatus_result::isRunningIsSet() const
{
    return isRunningIsSet_;
}

void ShowRunningStatus_result::unsetisRunning()
{
    isRunningIsSet_ = false;
}

}
}
}
}
}


