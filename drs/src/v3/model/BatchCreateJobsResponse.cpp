

#include "huaweicloud/drs/v3/model/BatchCreateJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchCreateJobsResponse::BatchCreateJobsResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchCreateJobsResponse::~BatchCreateJobsResponse() = default;

void BatchCreateJobsResponse::validate()
{
}

web::json::value BatchCreateJobsResponse::toJson() const
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
bool BatchCreateJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateJobResp> refVal;
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


std::vector<CreateJobResp>& BatchCreateJobsResponse::getResults()
{
    return results_;
}

void BatchCreateJobsResponse::setResults(const std::vector<CreateJobResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchCreateJobsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchCreateJobsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchCreateJobsResponse::getCount() const
{
    return count_;
}

void BatchCreateJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchCreateJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchCreateJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


