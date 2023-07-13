

#include "huaweicloud/drs/v3/model/BatchValidateClustersConnectionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchValidateClustersConnectionsResponse::BatchValidateClustersConnectionsResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchValidateClustersConnectionsResponse::~BatchValidateClustersConnectionsResponse() = default;

void BatchValidateClustersConnectionsResponse::validate()
{
}

web::json::value BatchValidateClustersConnectionsResponse::toJson() const
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

bool BatchValidateClustersConnectionsResponse::fromJson(const web::json::value& val)
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

std::vector<CheckJobResp>& BatchValidateClustersConnectionsResponse::getResults()
{
    return results_;
}

void BatchValidateClustersConnectionsResponse::setResults(const std::vector<CheckJobResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchValidateClustersConnectionsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchValidateClustersConnectionsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchValidateClustersConnectionsResponse::getCount() const
{
    return count_;
}

void BatchValidateClustersConnectionsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchValidateClustersConnectionsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchValidateClustersConnectionsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


