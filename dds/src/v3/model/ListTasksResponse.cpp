

#include "huaweicloud/dds/v3/model/ListTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListTasksResponse::ListTasksResponse()
{
    jobsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListTasksResponse::~ListTasksResponse() = default;

void ListTasksResponse::validate()
{
}

web::json::value ListTasksResponse::toJson() const
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
bool ListTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobInfo> refVal;
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


std::vector<JobInfo>& ListTasksResponse::getJobs()
{
    return jobs_;
}

void ListTasksResponse::setJobs(const std::vector<JobInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListTasksResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListTasksResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

int32_t ListTasksResponse::getTotalCount() const
{
    return totalCount_;
}

void ListTasksResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListTasksResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListTasksResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


