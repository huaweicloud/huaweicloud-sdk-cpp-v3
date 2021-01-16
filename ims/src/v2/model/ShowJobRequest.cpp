

#include "huaweicloud/ims/v2/model/ShowJobRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ShowJobRequest::ShowJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowJobRequest::~ShowJobRequest() = default;

void ShowJobRequest::validate()
{
}

web::json::value ShowJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ShowJobRequest::fromJson(const web::json::value& val)
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


std::string ShowJobRequest::getJobId() const
{
    return jobId_;
}

void ShowJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


