

#include "huaweicloud/codeartsbuild/v3/model/ShowHistoryDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowHistoryDetailsRequest::ShowHistoryDetailsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNumber_ = 0;
    buildNumberIsSet_ = false;
}

ShowHistoryDetailsRequest::~ShowHistoryDetailsRequest() = default;

void ShowHistoryDetailsRequest::validate()
{
}

web::json::value ShowHistoryDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(buildNumberIsSet_) {
        val[utility::conversions::to_string_t("build_number")] = ModelBase::toJson(buildNumber_);
    }

    return val;
}
bool ShowHistoryDetailsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNumber(refVal);
        }
    }
    return ok;
}


std::string ShowHistoryDetailsRequest::getJobId() const
{
    return jobId_;
}

void ShowHistoryDetailsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowHistoryDetailsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowHistoryDetailsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowHistoryDetailsRequest::getBuildNumber() const
{
    return buildNumber_;
}

void ShowHistoryDetailsRequest::setBuildNumber(int32_t value)
{
    buildNumber_ = value;
    buildNumberIsSet_ = true;
}

bool ShowHistoryDetailsRequest::buildNumberIsSet() const
{
    return buildNumberIsSet_;
}

void ShowHistoryDetailsRequest::unsetbuildNumber()
{
    buildNumberIsSet_ = false;
}

}
}
}
}
}


