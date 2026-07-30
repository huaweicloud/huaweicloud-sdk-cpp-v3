

#include "huaweicloud/modelarts/v1/model/JobSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobSummary::JobSummary()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

JobSummary::~JobSummary() = default;

void JobSummary::validate()
{
}

web::json::value JobSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool JobSummary::fromJson(const web::json::value& val)
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


std::string JobSummary::getJobId() const
{
    return jobId_;
}

void JobSummary::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool JobSummary::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void JobSummary::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


