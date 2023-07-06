

#include "huaweicloud/drs/v3/model/BatchSetPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetPolicyResponse::BatchSetPolicyResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchSetPolicyResponse::~BatchSetPolicyResponse() = default;

void BatchSetPolicyResponse::validate()
{
}

web::json::value BatchSetPolicyResponse::toJson() const
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

bool BatchSetPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<SyncPolicyResp> refVal;
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

std::vector<SyncPolicyResp>& BatchSetPolicyResponse::getResults()
{
    return results_;
}

void BatchSetPolicyResponse::setResults(const std::vector<SyncPolicyResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchSetPolicyResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchSetPolicyResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchSetPolicyResponse::getCount() const
{
    return count_;
}

void BatchSetPolicyResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchSetPolicyResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchSetPolicyResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


