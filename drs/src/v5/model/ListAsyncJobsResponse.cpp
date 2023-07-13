

#include "huaweicloud/drs/v5/model/ListAsyncJobsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListAsyncJobsResponse::ListAsyncJobsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    jobsIsSet_ = false;
}

ListAsyncJobsResponse::~ListAsyncJobsResponse() = default;

void ListAsyncJobsResponse::validate()
{
}

web::json::value ListAsyncJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool ListAsyncJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<AsyncJobResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

int32_t ListAsyncJobsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAsyncJobsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAsyncJobsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAsyncJobsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AsyncJobResp>& ListAsyncJobsResponse::getJobs()
{
    return jobs_;
}

void ListAsyncJobsResponse::setJobs(const std::vector<AsyncJobResp>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListAsyncJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListAsyncJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


