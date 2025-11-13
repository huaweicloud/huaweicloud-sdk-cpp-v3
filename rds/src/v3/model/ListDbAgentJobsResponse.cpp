

#include "huaweicloud/rds/v3/model/ListDbAgentJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobsResponse::ListDbAgentJobsResponse()
{
    jobsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDbAgentJobsResponse::~ListDbAgentJobsResponse() = default;

void ListDbAgentJobsResponse::validate()
{
}

web::json::value ListDbAgentJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDbAgentJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDbAgentJobsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ListDbAgentJobsResult>& ListDbAgentJobsResponse::getJobs()
{
    return jobs_;
}

void ListDbAgentJobsResponse::setJobs(const std::vector<ListDbAgentJobsResult>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListDbAgentJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListDbAgentJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

int32_t ListDbAgentJobsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDbAgentJobsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDbAgentJobsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDbAgentJobsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


