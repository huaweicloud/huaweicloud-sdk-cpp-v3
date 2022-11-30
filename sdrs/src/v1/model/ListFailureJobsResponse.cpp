

#include "huaweicloud/sdrs/v1/model/ListFailureJobsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListFailureJobsResponse::ListFailureJobsResponse()
{
    failureJobsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListFailureJobsResponse::~ListFailureJobsResponse() = default;

void ListFailureJobsResponse::validate()
{
}

web::json::value ListFailureJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failureJobsIsSet_) {
        val[utility::conversions::to_string_t("failure_jobs")] = ModelBase::toJson(failureJobs_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool ListFailureJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failure_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<FailureJobParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<FailureJobParams>& ListFailureJobsResponse::getFailureJobs()
{
    return failureJobs_;
}

void ListFailureJobsResponse::setFailureJobs(const std::vector<FailureJobParams>& value)
{
    failureJobs_ = value;
    failureJobsIsSet_ = true;
}

bool ListFailureJobsResponse::failureJobsIsSet() const
{
    return failureJobsIsSet_;
}

void ListFailureJobsResponse::unsetfailureJobs()
{
    failureJobsIsSet_ = false;
}

int32_t ListFailureJobsResponse::getCount() const
{
    return count_;
}

void ListFailureJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFailureJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFailureJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


