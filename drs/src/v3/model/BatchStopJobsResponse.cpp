

#include "huaweicloud/drs/v3/model/BatchStopJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchStopJobsResponse::BatchStopJobsResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchStopJobsResponse::~BatchStopJobsResponse() = default;

void BatchStopJobsResponse::validate()
{
}

web::json::value BatchStopJobsResponse::toJson() const
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
bool BatchStopJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<PauseJobResp> refVal;
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


std::vector<PauseJobResp>& BatchStopJobsResponse::getResults()
{
    return results_;
}

void BatchStopJobsResponse::setResults(const std::vector<PauseJobResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchStopJobsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchStopJobsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchStopJobsResponse::getCount() const
{
    return count_;
}

void BatchStopJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchStopJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchStopJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


