

#include "huaweicloud/codeartsbuild/v3/model/StopJobRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




StopJobRequestBody::StopJobRequestBody()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = "";
    buildNoIsSet_ = false;
}

StopJobRequestBody::~StopJobRequestBody() = default;

void StopJobRequestBody::validate()
{
}

web::json::value StopJobRequestBody::toJson() const
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
bool StopJobRequestBody::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    return ok;
}


std::string StopJobRequestBody::getJobId() const
{
    return jobId_;
}

void StopJobRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopJobRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopJobRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string StopJobRequestBody::getBuildNo() const
{
    return buildNo_;
}

void StopJobRequestBody::setBuildNo(const std::string& value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool StopJobRequestBody::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void StopJobRequestBody::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

}
}
}
}
}


