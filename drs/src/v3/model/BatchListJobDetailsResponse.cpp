

#include "huaweicloud/drs/v3/model/BatchListJobDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListJobDetailsResponse::BatchListJobDetailsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    resultsIsSet_ = false;
}

BatchListJobDetailsResponse::~BatchListJobDetailsResponse() = default;

void BatchListJobDetailsResponse::validate()
{
}

web::json::value BatchListJobDetailsResponse::toJson() const
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

bool BatchListJobDetailsResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryJobResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}

int32_t BatchListJobDetailsResponse::getCount() const
{
    return count_;
}

void BatchListJobDetailsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchListJobDetailsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchListJobDetailsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryJobResp>& BatchListJobDetailsResponse::getResults()
{
    return results_;
}

void BatchListJobDetailsResponse::setResults(const std::vector<QueryJobResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchListJobDetailsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchListJobDetailsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


