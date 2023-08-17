

#include "huaweicloud/codeartsbuild/v3/model/ShowJobListByProjectIdResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobListByProjectIdResponse::ShowJobListByProjectIdResponse()
{
    jobsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowJobListByProjectIdResponse::~ShowJobListByProjectIdResponse() = default;

void ShowJobListByProjectIdResponse::validate()
{
}

web::json::value ShowJobListByProjectIdResponse::toJson() const
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

bool ShowJobListByProjectIdResponse::fromJson(const web::json::value& val)
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

std::vector<Job>& ShowJobListByProjectIdResponse::getJobs()
{
    return jobs_;
}

void ShowJobListByProjectIdResponse::setJobs(const std::vector<Job>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ShowJobListByProjectIdResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ShowJobListByProjectIdResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

int32_t ShowJobListByProjectIdResponse::getTotal() const
{
    return total_;
}

void ShowJobListByProjectIdResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowJobListByProjectIdResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowJobListByProjectIdResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


