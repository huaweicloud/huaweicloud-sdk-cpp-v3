

#include "huaweicloud/eip/v2/model/ShowResourcesJobDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ShowResourcesJobDetailRequest::ShowResourcesJobDetailRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowResourcesJobDetailRequest::~ShowResourcesJobDetailRequest() = default;

void ShowResourcesJobDetailRequest::validate()
{
}

web::json::value ShowResourcesJobDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ShowResourcesJobDetailRequest::fromJson(const web::json::value& val)
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

std::string ShowResourcesJobDetailRequest::getJobId() const
{
    return jobId_;
}

void ShowResourcesJobDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowResourcesJobDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowResourcesJobDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


