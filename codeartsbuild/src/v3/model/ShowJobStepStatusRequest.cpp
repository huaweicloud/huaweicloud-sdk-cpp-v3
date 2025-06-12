

#include "huaweicloud/codeartsbuild/v3/model/ShowJobStepStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobStepStatusRequest::ShowJobStepStatusRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
}

ShowJobStepStatusRequest::~ShowJobStepStatusRequest() = default;

void ShowJobStepStatusRequest::validate()
{
}

web::json::value ShowJobStepStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }

    return val;
}
bool ShowJobStepStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    return ok;
}


std::string ShowJobStepStatusRequest::getJobId() const
{
    return jobId_;
}

void ShowJobStepStatusRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobStepStatusRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobStepStatusRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowJobStepStatusRequest::getBuildNo() const
{
    return buildNo_;
}

void ShowJobStepStatusRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool ShowJobStepStatusRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void ShowJobStepStatusRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

}
}
}
}
}


