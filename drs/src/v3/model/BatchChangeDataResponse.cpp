

#include "huaweicloud/drs/v3/model/BatchChangeDataResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchChangeDataResponse::BatchChangeDataResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchChangeDataResponse::~BatchChangeDataResponse() = default;

void BatchChangeDataResponse::validate()
{
}

web::json::value BatchChangeDataResponse::toJson() const
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

bool BatchChangeDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<DataTransformationResp> refVal;
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

std::vector<DataTransformationResp>& BatchChangeDataResponse::getResults()
{
    return results_;
}

void BatchChangeDataResponse::setResults(const std::vector<DataTransformationResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchChangeDataResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchChangeDataResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchChangeDataResponse::getCount() const
{
    return count_;
}

void BatchChangeDataResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchChangeDataResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchChangeDataResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


