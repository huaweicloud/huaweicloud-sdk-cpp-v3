

#include "huaweicloud/ims/v2/model/ShowJobProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ShowJobProgressRequest::ShowJobProgressRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowJobProgressRequest::~ShowJobProgressRequest() = default;

void ShowJobProgressRequest::validate()
{
}

web::json::value ShowJobProgressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowJobProgressRequest::fromJson(const web::json::value& val)
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


std::string ShowJobProgressRequest::getJobId() const
{
    return jobId_;
}

void ShowJobProgressRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobProgressRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobProgressRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


