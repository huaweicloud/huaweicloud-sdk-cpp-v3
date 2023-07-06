

#include "huaweicloud/drs/v3/model/BatchDeleteJobsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchDeleteJobsResponse::BatchDeleteJobsResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchDeleteJobsResponse::~BatchDeleteJobsResponse() = default;

void BatchDeleteJobsResponse::validate()
{
}

web::json::value BatchDeleteJobsResponse::toJson() const
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

bool BatchDeleteJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteJobResp> refVal;
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

std::vector<DeleteJobResp>& BatchDeleteJobsResponse::getResults()
{
    return results_;
}

void BatchDeleteJobsResponse::setResults(const std::vector<DeleteJobResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchDeleteJobsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchDeleteJobsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchDeleteJobsResponse::getCount() const
{
    return count_;
}

void BatchDeleteJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchDeleteJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchDeleteJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


