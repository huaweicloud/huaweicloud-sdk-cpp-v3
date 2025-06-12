

#include "huaweicloud/codeartsbuild/v3/model/ShowDisableRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDisableRequest::ShowDisableRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowDisableRequest::~ShowDisableRequest() = default;

void ShowDisableRequest::validate()
{
}

web::json::value ShowDisableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowDisableRequest::fromJson(const web::json::value& val)
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


std::string ShowDisableRequest::getJobId() const
{
    return jobId_;
}

void ShowDisableRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDisableRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDisableRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


