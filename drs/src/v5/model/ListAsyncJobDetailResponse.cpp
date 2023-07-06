

#include "huaweicloud/drs/v5/model/ListAsyncJobDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListAsyncJobDetailResponse::ListAsyncJobDetailResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    jobsIsSet_ = false;
}

ListAsyncJobDetailResponse::~ListAsyncJobDetailResponse() = default;

void ListAsyncJobDetailResponse::validate()
{
}

web::json::value ListAsyncJobDetailResponse::toJson() const
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

bool ListAsyncJobDetailResponse::fromJson(const web::json::value& val)
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
            std::vector<JobDetailResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

int32_t ListAsyncJobDetailResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAsyncJobDetailResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAsyncJobDetailResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAsyncJobDetailResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<JobDetailResp>& ListAsyncJobDetailResponse::getJobs()
{
    return jobs_;
}

void ListAsyncJobDetailResponse::setJobs(const std::vector<JobDetailResp>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListAsyncJobDetailResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListAsyncJobDetailResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


