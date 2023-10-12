

#include "huaweicloud/mpc/v1/model/ListEditingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListEditingJobResponse::ListEditingJobResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    jobsIsSet_ = false;
}

ListEditingJobResponse::~ListEditingJobResponse() = default;

void ListEditingJobResponse::validate()
{
}

web::json::value ListEditingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool ListEditingJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<EditingJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


int32_t ListEditingJobResponse::getTotal() const
{
    return total_;
}

void ListEditingJobResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListEditingJobResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListEditingJobResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<EditingJob>& ListEditingJobResponse::getJobs()
{
    return jobs_;
}

void ListEditingJobResponse::setJobs(const std::vector<EditingJob>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListEditingJobResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListEditingJobResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


