

#include "huaweicloud/modelarts/v1/model/JobSummaryResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobSummaryResp::JobSummaryResp()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

JobSummaryResp::~JobSummaryResp() = default;

void JobSummaryResp::validate()
{
}

web::json::value JobSummaryResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool JobSummaryResp::fromJson(const web::json::value& val)
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


std::string JobSummaryResp::getJobId() const
{
    return jobId_;
}

void JobSummaryResp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool JobSummaryResp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void JobSummaryResp::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


