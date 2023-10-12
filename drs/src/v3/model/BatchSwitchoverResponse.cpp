

#include "huaweicloud/drs/v3/model/BatchSwitchoverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSwitchoverResponse::BatchSwitchoverResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchSwitchoverResponse::~BatchSwitchoverResponse() = default;

void BatchSwitchoverResponse::validate()
{
}

web::json::value BatchSwitchoverResponse::toJson() const
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
bool BatchSwitchoverResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<SwitchoverResp> refVal;
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


std::vector<SwitchoverResp>& BatchSwitchoverResponse::getResults()
{
    return results_;
}

void BatchSwitchoverResponse::setResults(const std::vector<SwitchoverResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchSwitchoverResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchSwitchoverResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchSwitchoverResponse::getCount() const
{
    return count_;
}

void BatchSwitchoverResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchSwitchoverResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchSwitchoverResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


