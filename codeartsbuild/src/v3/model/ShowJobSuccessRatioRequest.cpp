

#include "huaweicloud/codeartsbuild/v3/model/ShowJobSuccessRatioRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobSuccessRatioRequest::ShowJobSuccessRatioRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowJobSuccessRatioRequest::~ShowJobSuccessRatioRequest() = default;

void ShowJobSuccessRatioRequest::validate()
{
}

web::json::value ShowJobSuccessRatioRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ShowJobSuccessRatioRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ShowJobSuccessRatioRequest::getJobId() const
{
    return jobId_;
}

void ShowJobSuccessRatioRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobSuccessRatioRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobSuccessRatioRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobSuccessRatioRequest::getStartTime() const
{
    return startTime_;
}

void ShowJobSuccessRatioRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowJobSuccessRatioRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowJobSuccessRatioRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowJobSuccessRatioRequest::getEndTime() const
{
    return endTime_;
}

void ShowJobSuccessRatioRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowJobSuccessRatioRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowJobSuccessRatioRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


