

#include "huaweicloud/lts/v2/model/ListTopnTrafficStatisticsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListTopnTrafficStatisticsResponse::ListTopnTrafficStatisticsResponse()
{
    resultsIsSet_ = false;
}

ListTopnTrafficStatisticsResponse::~ListTopnTrafficStatisticsResponse() = default;

void ListTopnTrafficStatisticsResponse::validate()
{
}

web::json::value ListTopnTrafficStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}

bool ListTopnTrafficStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<ResultsTopnBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}

std::vector<ResultsTopnBody>& ListTopnTrafficStatisticsResponse::getResults()
{
    return results_;
}

void ListTopnTrafficStatisticsResponse::setResults(const std::vector<ResultsTopnBody>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ListTopnTrafficStatisticsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ListTopnTrafficStatisticsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


