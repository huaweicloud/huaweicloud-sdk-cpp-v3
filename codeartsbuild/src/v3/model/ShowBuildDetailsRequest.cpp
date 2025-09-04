

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildDetailsRequest::ShowBuildDetailsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
}

ShowBuildDetailsRequest::~ShowBuildDetailsRequest() = default;

void ShowBuildDetailsRequest::validate()
{
}

web::json::value ShowBuildDetailsRequest::toJson() const
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
bool ShowBuildDetailsRequest::fromJson(const web::json::value& val)
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


std::string ShowBuildDetailsRequest::getJobId() const
{
    return jobId_;
}

void ShowBuildDetailsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowBuildDetailsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowBuildDetailsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowBuildDetailsRequest::getBuildNo() const
{
    return buildNo_;
}

void ShowBuildDetailsRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool ShowBuildDetailsRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void ShowBuildDetailsRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

}
}
}
}
}


