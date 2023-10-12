

#include "huaweicloud/drs/v3/model/BatchStartJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchStartJobsResponse::BatchStartJobsResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchStartJobsResponse::~BatchStartJobsResponse() = default;

void BatchStartJobsResponse::validate()
{
}

web::json::value BatchStartJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool BatchStartJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<StartJobResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
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


std::vector<StartJobResp>& BatchStartJobsResponse::getResults()
{
    return results_;
}

void BatchStartJobsResponse::setResults(const std::vector<StartJobResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchStartJobsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchStartJobsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchStartJobsResponse::getCount() const
{
    return count_;
}

void BatchStartJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchStartJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchStartJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


