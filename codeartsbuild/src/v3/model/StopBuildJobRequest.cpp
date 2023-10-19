

#include "huaweicloud/codeartsbuild/v3/model/StopBuildJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




StopBuildJobRequest::StopBuildJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
}

StopBuildJobRequest::~StopBuildJobRequest() = default;

void StopBuildJobRequest::validate()
{
}

web::json::value StopBuildJobRequest::toJson() const
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
bool StopBuildJobRequest::fromJson(const web::json::value& val)
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


std::string StopBuildJobRequest::getJobId() const
{
    return jobId_;
}

void StopBuildJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopBuildJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopBuildJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t StopBuildJobRequest::getBuildNo() const
{
    return buildNo_;
}

void StopBuildJobRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool StopBuildJobRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void StopBuildJobRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

}
}
}
}
}


