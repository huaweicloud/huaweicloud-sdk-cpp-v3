

#include "huaweicloud/drs/v3/model/BatchListRposAndRtosResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListRposAndRtosResponse::BatchListRposAndRtosResponse()
{
    count_ = 0;
    countIsSet_ = false;
    resultsIsSet_ = false;
}

BatchListRposAndRtosResponse::~BatchListRposAndRtosResponse() = default;

void BatchListRposAndRtosResponse::validate()
{
}

web::json::value BatchListRposAndRtosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}

bool BatchListRposAndRtosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryRpoAndRtoResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}

int32_t BatchListRposAndRtosResponse::getCount() const
{
    return count_;
}

void BatchListRposAndRtosResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchListRposAndRtosResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchListRposAndRtosResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryRpoAndRtoResp>& BatchListRposAndRtosResponse::getResults()
{
    return results_;
}

void BatchListRposAndRtosResponse::setResults(const std::vector<QueryRpoAndRtoResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchListRposAndRtosResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchListRposAndRtosResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


