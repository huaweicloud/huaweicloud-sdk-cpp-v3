

#include "huaweicloud/drs/v5/model/ListReplicationJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListReplicationJobsResponse::ListReplicationJobsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    jobsIsSet_ = false;
}

ListReplicationJobsResponse::~ListReplicationJobsResponse() = default;

void ListReplicationJobsResponse::validate()
{
}

web::json::value ListReplicationJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool ListReplicationJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<OfflineTaskInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


int32_t ListReplicationJobsResponse::getCount() const
{
    return count_;
}

void ListReplicationJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListReplicationJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListReplicationJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<OfflineTaskInfo>& ListReplicationJobsResponse::getJobs()
{
    return jobs_;
}

void ListReplicationJobsResponse::setJobs(const std::vector<OfflineTaskInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListReplicationJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListReplicationJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


