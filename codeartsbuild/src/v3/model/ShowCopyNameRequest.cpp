

#include "huaweicloud/codeartsbuild/v3/model/ShowCopyNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowCopyNameRequest::ShowCopyNameRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowCopyNameRequest::~ShowCopyNameRequest() = default;

void ShowCopyNameRequest::validate()
{
}

web::json::value ShowCopyNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowCopyNameRequest::fromJson(const web::json::value& val)
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


std::string ShowCopyNameRequest::getJobId() const
{
    return jobId_;
}

void ShowCopyNameRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowCopyNameRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowCopyNameRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


