

#include "huaweicloud/dbss/v1/model/ListAuditInstanceJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstanceJobsResponse::ListAuditInstanceJobsResponse()
{
    jobsIsSet_ = false;
}

ListAuditInstanceJobsResponse::~ListAuditInstanceJobsResponse() = default;

void ListAuditInstanceJobsResponse::validate()
{
}

web::json::value ListAuditInstanceJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool ListAuditInstanceJobsResponse::fromJson(const web::json::value& val)
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


std::vector<JobBean>& ListAuditInstanceJobsResponse::getJobs()
{
    return jobs_;
}

void ListAuditInstanceJobsResponse::setJobs(const std::vector<JobBean>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListAuditInstanceJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListAuditInstanceJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


