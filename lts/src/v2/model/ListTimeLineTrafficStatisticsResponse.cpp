

#include "huaweicloud/lts/v2/model/ListTimeLineTrafficStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListTimeLineTrafficStatisticsResponse::ListTimeLineTrafficStatisticsResponse()
{
    resultsIsSet_ = false;
}

ListTimeLineTrafficStatisticsResponse::~ListTimeLineTrafficStatisticsResponse() = default;

void ListTimeLineTrafficStatisticsResponse::validate()
{
}

web::json::value ListTimeLineTrafficStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool ListTimeLineTrafficStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<Resulits> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<Resulits>& ListTimeLineTrafficStatisticsResponse::getResults()
{
    return results_;
}

void ListTimeLineTrafficStatisticsResponse::setResults(const std::vector<Resulits>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ListTimeLineTrafficStatisticsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ListTimeLineTrafficStatisticsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


