

#include "huaweicloud/drs/v3/model/BatchListStructDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListStructDetailResponse::BatchListStructDetailResponse()
{
    count_ = 0;
    countIsSet_ = false;
    resultsIsSet_ = false;
}

BatchListStructDetailResponse::~BatchListStructDetailResponse() = default;

void BatchListStructDetailResponse::validate()
{
}

web::json::value BatchListStructDetailResponse::toJson() const
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
bool BatchListStructDetailResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryStructDetailResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


int32_t BatchListStructDetailResponse::getCount() const
{
    return count_;
}

void BatchListStructDetailResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchListStructDetailResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchListStructDetailResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryStructDetailResp>& BatchListStructDetailResponse::getResults()
{
    return results_;
}

void BatchListStructDetailResponse::setResults(const std::vector<QueryStructDetailResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchListStructDetailResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchListStructDetailResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


