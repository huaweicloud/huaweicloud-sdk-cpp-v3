

#include "huaweicloud/codeartsbuild/v3/model/ShowOutputInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowOutputInfoRequest::ShowOutputInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
}

ShowOutputInfoRequest::~ShowOutputInfoRequest() = default;

void ShowOutputInfoRequest::validate()
{
}

web::json::value ShowOutputInfoRequest::toJson() const
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
bool ShowOutputInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowOutputInfoRequest::getJobId() const
{
    return jobId_;
}

void ShowOutputInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowOutputInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowOutputInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowOutputInfoRequest::getBuildNo() const
{
    return buildNo_;
}

void ShowOutputInfoRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool ShowOutputInfoRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void ShowOutputInfoRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

}
}
}
}
}


