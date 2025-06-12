

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildRecordDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildRecordDetailRequest::ShowJobBuildRecordDetailRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
}

ShowJobBuildRecordDetailRequest::~ShowJobBuildRecordDetailRequest() = default;

void ShowJobBuildRecordDetailRequest::validate()
{
}

web::json::value ShowJobBuildRecordDetailRequest::toJson() const
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
bool ShowJobBuildRecordDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowJobBuildRecordDetailRequest::getJobId() const
{
    return jobId_;
}

void ShowJobBuildRecordDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobBuildRecordDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobBuildRecordDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowJobBuildRecordDetailRequest::getBuildNo() const
{
    return buildNo_;
}

void ShowJobBuildRecordDetailRequest::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool ShowJobBuildRecordDetailRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void ShowJobBuildRecordDetailRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

}
}
}
}
}


