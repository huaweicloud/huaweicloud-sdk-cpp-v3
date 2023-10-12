

#include "huaweicloud/drs/v3/model/BatchListProgressesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListProgressesResponse::BatchListProgressesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    resultsIsSet_ = false;
}

BatchListProgressesResponse::~BatchListProgressesResponse() = default;

void BatchListProgressesResponse::validate()
{
}

web::json::value BatchListProgressesResponse::toJson() const
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
bool BatchListProgressesResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryProgressResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


int32_t BatchListProgressesResponse::getCount() const
{
    return count_;
}

void BatchListProgressesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchListProgressesResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchListProgressesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryProgressResp>& BatchListProgressesResponse::getResults()
{
    return results_;
}

void BatchListProgressesResponse::setResults(const std::vector<QueryProgressResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchListProgressesResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchListProgressesResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


