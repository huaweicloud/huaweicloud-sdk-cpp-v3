

#include "huaweicloud/codeartsbuild/v3/model/ShowJobInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobInfoRequest::ShowJobInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowJobInfoRequest::~ShowJobInfoRequest() = default;

void ShowJobInfoRequest::validate()
{
}

web::json::value ShowJobInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowJobInfoRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowJobInfoRequest::getJobId() const
{
    return jobId_;
}

void ShowJobInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


