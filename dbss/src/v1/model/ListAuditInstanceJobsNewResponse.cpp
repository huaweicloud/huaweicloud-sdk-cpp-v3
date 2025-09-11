

#include "huaweicloud/dbss/v1/model/ListAuditInstanceJobsNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstanceJobsNewResponse::ListAuditInstanceJobsNewResponse()
{
    jobsIsSet_ = false;
}

ListAuditInstanceJobsNewResponse::~ListAuditInstanceJobsNewResponse() = default;

void ListAuditInstanceJobsNewResponse::validate()
{
}

web::json::value ListAuditInstanceJobsNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool ListAuditInstanceJobsNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<JobBean>& ListAuditInstanceJobsNewResponse::getJobs()
{
    return jobs_;
}

void ListAuditInstanceJobsNewResponse::setJobs(const std::vector<JobBean>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListAuditInstanceJobsNewResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListAuditInstanceJobsNewResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


