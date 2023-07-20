

#include "huaweicloud/gaussdb/v3/model/ListImmediateJobsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListImmediateJobsResponse::ListImmediateJobsResponse()
{
    jobsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListImmediateJobsResponse::~ListImmediateJobsResponse() = default;

void ListImmediateJobsResponse::validate()
{
}

web::json::value ListImmediateJobsResponse::toJson() const
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

bool ListImmediateJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskDetailInfo> refVal;
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

std::vector<TaskDetailInfo>& ListImmediateJobsResponse::getJobs()
{
    return jobs_;
}

void ListImmediateJobsResponse::setJobs(const std::vector<TaskDetailInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListImmediateJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListImmediateJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

int32_t ListImmediateJobsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListImmediateJobsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListImmediateJobsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListImmediateJobsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


