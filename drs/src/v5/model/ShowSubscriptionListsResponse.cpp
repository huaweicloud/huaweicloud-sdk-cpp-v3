

#include "huaweicloud/drs/v5/model/ShowSubscriptionListsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSubscriptionListsResponse::ShowSubscriptionListsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    jobsIsSet_ = false;
}

ShowSubscriptionListsResponse::~ShowSubscriptionListsResponse() = default;

void ShowSubscriptionListsResponse::validate()
{
}

web::json::value ShowSubscriptionListsResponse::toJson() const
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
bool ShowSubscriptionListsResponse::fromJson(const web::json::value& val)
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
            SubscriptionListResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


int32_t ShowSubscriptionListsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowSubscriptionListsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowSubscriptionListsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowSubscriptionListsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

SubscriptionListResp ShowSubscriptionListsResponse::getJobs() const
{
    return jobs_;
}

void ShowSubscriptionListsResponse::setJobs(const SubscriptionListResp& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ShowSubscriptionListsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ShowSubscriptionListsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


