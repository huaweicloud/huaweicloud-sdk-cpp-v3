

#include "huaweicloud/codeartsbuild/v3/model/ListProjectJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListProjectJobsResponse::ListProjectJobsResponse()
{
    jobsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListProjectJobsResponse::~ListProjectJobsResponse() = default;

void ListProjectJobsResponse::validate()
{
}

web::json::value ListProjectJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListProjectJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<Job> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<Job>& ListProjectJobsResponse::getJobs()
{
    return jobs_;
}

void ListProjectJobsResponse::setJobs(const std::vector<Job>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListProjectJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListProjectJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

int32_t ListProjectJobsResponse::getTotal() const
{
    return total_;
}

void ListProjectJobsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectJobsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectJobsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


