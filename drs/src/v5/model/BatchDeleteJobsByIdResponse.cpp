

#include "huaweicloud/drs/v5/model/BatchDeleteJobsByIdResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchDeleteJobsByIdResponse::BatchDeleteJobsByIdResponse()
{
    jobsIsSet_ = false;
}

BatchDeleteJobsByIdResponse::~BatchDeleteJobsByIdResponse() = default;

void BatchDeleteJobsByIdResponse::validate()
{
}

web::json::value BatchDeleteJobsByIdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchDeleteJobsByIdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteJobResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

std::vector<DeleteJobResp>& BatchDeleteJobsByIdResponse::getJobs()
{
    return jobs_;
}

void BatchDeleteJobsByIdResponse::setJobs(const std::vector<DeleteJobResp>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchDeleteJobsByIdResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchDeleteJobsByIdResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


