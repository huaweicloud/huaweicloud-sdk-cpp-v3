

#include "huaweicloud/drs/v3/model/PauseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




PauseInfo::PauseInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    pauseMode_ = "";
    pauseModeIsSet_ = false;
}

PauseInfo::~PauseInfo() = default;

void PauseInfo::validate()
{
}

web::json::value PauseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(pauseModeIsSet_) {
        val[utility::conversions::to_string_t("pause_mode")] = ModelBase::toJson(pauseMode_);
    }

    return val;
}
bool PauseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pause_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pause_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPauseMode(refVal);
        }
    }
    return ok;
}


std::string PauseInfo::getJobId() const
{
    return jobId_;
}

void PauseInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PauseInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PauseInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string PauseInfo::getPauseMode() const
{
    return pauseMode_;
}

void PauseInfo::setPauseMode(const std::string& value)
{
    pauseMode_ = value;
    pauseModeIsSet_ = true;
}

bool PauseInfo::pauseModeIsSet() const
{
    return pauseModeIsSet_;
}

void PauseInfo::unsetpauseMode()
{
    pauseModeIsSet_ = false;
}

}
}
}
}
}


