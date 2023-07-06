

#include "huaweicloud/drs/v3/model/BatchSetDefinerResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetDefinerResponse::BatchSetDefinerResponse()
{
    count_ = 0;
    countIsSet_ = false;
    resultsIsSet_ = false;
}

BatchSetDefinerResponse::~BatchSetDefinerResponse() = default;

void BatchSetDefinerResponse::validate()
{
}

web::json::value BatchSetDefinerResponse::toJson() const
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

bool BatchSetDefinerResponse::fromJson(const web::json::value& val)
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
            std::vector<ModifyJobResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}

int32_t BatchSetDefinerResponse::getCount() const
{
    return count_;
}

void BatchSetDefinerResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchSetDefinerResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchSetDefinerResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ModifyJobResp>& BatchSetDefinerResponse::getResults()
{
    return results_;
}

void BatchSetDefinerResponse::setResults(const std::vector<ModifyJobResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchSetDefinerResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchSetDefinerResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


