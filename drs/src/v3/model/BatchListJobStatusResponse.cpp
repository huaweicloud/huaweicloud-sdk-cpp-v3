

#include "huaweicloud/drs/v3/model/BatchListJobStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchListJobStatusResponse::BatchListJobStatusResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchListJobStatusResponse::~BatchListJobStatusResponse() = default;

void BatchListJobStatusResponse::validate()
{
}

web::json::value BatchListJobStatusResponse::toJson() const
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

bool BatchListJobStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryJobStatusResp> refVal;
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

std::vector<QueryJobStatusResp>& BatchListJobStatusResponse::getResults()
{
    return results_;
}

void BatchListJobStatusResponse::setResults(const std::vector<QueryJobStatusResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchListJobStatusResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchListJobStatusResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchListJobStatusResponse::getCount() const
{
    return count_;
}

void BatchListJobStatusResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchListJobStatusResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchListJobStatusResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


