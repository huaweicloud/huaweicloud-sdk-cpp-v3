

#include "huaweicloud/metastudio/v1/model/ShowJobAuditResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowJobAuditResultRequest::ShowJobAuditResultRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowJobAuditResultRequest::~ShowJobAuditResultRequest() = default;

void ShowJobAuditResultRequest::validate()
{
}

web::json::value ShowJobAuditResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowJobAuditResultRequest::fromJson(const web::json::value& val)
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


std::string ShowJobAuditResultRequest::getJobId() const
{
    return jobId_;
}

void ShowJobAuditResultRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobAuditResultRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobAuditResultRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


