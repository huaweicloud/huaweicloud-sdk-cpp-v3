

#include "huaweicloud/drs/v5/model/BatchExecuteJobActionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchExecuteJobActionsResponse::BatchExecuteJobActionsResponse()
{
    jobsIsSet_ = false;
}

BatchExecuteJobActionsResponse::~BatchExecuteJobActionsResponse() = default;

void BatchExecuteJobActionsResponse::validate()
{
}

web::json::value BatchExecuteJobActionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchExecuteJobActionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<AsyncActionResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

std::vector<AsyncActionResp>& BatchExecuteJobActionsResponse::getJobs()
{
    return jobs_;
}

void BatchExecuteJobActionsResponse::setJobs(const std::vector<AsyncActionResp>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchExecuteJobActionsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchExecuteJobActionsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


