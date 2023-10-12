

#include "huaweicloud/drs/v5/model/ShowHealthCompareJobListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowHealthCompareJobListResponse::ShowHealthCompareJobListResponse()
{
    count_ = 0L;
    countIsSet_ = false;
    compareJobsIsSet_ = false;
}

ShowHealthCompareJobListResponse::~ShowHealthCompareJobListResponse() = default;

void ShowHealthCompareJobListResponse::validate()
{
}

web::json::value ShowHealthCompareJobListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(compareJobsIsSet_) {
        val[utility::conversions::to_string_t("compare_jobs")] = ModelBase::toJson(compareJobs_);
    }

    return val;
}
bool ShowHealthCompareJobListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<HealthCompareJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobs(refVal);
        }
    }
    return ok;
}


int64_t ShowHealthCompareJobListResponse::getCount() const
{
    return count_;
}

void ShowHealthCompareJobListResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowHealthCompareJobListResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowHealthCompareJobListResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<HealthCompareJob>& ShowHealthCompareJobListResponse::getCompareJobs()
{
    return compareJobs_;
}

void ShowHealthCompareJobListResponse::setCompareJobs(const std::vector<HealthCompareJob>& value)
{
    compareJobs_ = value;
    compareJobsIsSet_ = true;
}

bool ShowHealthCompareJobListResponse::compareJobsIsSet() const
{
    return compareJobsIsSet_;
}

void ShowHealthCompareJobListResponse::unsetcompareJobs()
{
    compareJobsIsSet_ = false;
}

}
}
}
}
}


