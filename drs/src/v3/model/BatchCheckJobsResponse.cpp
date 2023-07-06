

#include "huaweicloud/drs/v3/model/BatchCheckJobsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchCheckJobsResponse::BatchCheckJobsResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchCheckJobsResponse::~BatchCheckJobsResponse() = default;

void BatchCheckJobsResponse::validate()
{
}

web::json::value BatchCheckJobsResponse::toJson() const
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

bool BatchCheckJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<PostPreCheckResp> refVal;
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

std::vector<PostPreCheckResp>& BatchCheckJobsResponse::getResults()
{
    return results_;
}

void BatchCheckJobsResponse::setResults(const std::vector<PostPreCheckResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchCheckJobsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchCheckJobsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchCheckJobsResponse::getCount() const
{
    return count_;
}

void BatchCheckJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchCheckJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchCheckJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


