

#include "huaweicloud/drs/v3/model/BatchValidateConnectionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchValidateConnectionsResponse::BatchValidateConnectionsResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchValidateConnectionsResponse::~BatchValidateConnectionsResponse() = default;

void BatchValidateConnectionsResponse::validate()
{
}

web::json::value BatchValidateConnectionsResponse::toJson() const
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
bool BatchValidateConnectionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckJobResp> refVal;
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


std::vector<CheckJobResp>& BatchValidateConnectionsResponse::getResults()
{
    return results_;
}

void BatchValidateConnectionsResponse::setResults(const std::vector<CheckJobResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchValidateConnectionsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchValidateConnectionsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchValidateConnectionsResponse::getCount() const
{
    return count_;
}

void BatchValidateConnectionsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchValidateConnectionsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchValidateConnectionsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


