

#include "huaweicloud/gaussdbfornosql/v3/model/ListJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListJobsResponse::ListJobsResponse()
{
    jobsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListJobsResponse::~ListJobsResponse() = default;

void ListJobsResponse::validate()
{
}

web::json::value ListJobsResponse::toJson() const
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
bool ListJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobDetail> refVal;
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


std::vector<JobDetail>& ListJobsResponse::getJobs()
{
    return jobs_;
}

void ListJobsResponse::setJobs(const std::vector<JobDetail>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

int32_t ListJobsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListJobsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListJobsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListJobsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


