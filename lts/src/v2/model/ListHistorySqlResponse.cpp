

#include "huaweicloud/lts/v2/model/ListHistorySqlResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListHistorySqlResponse::ListHistorySqlResponse()
{
    resultsIsSet_ = false;
}

ListHistorySqlResponse::~ListHistorySqlResponse() = default;

void ListHistorySqlResponse::validate()
{
}

web::json::value ListHistorySqlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}

bool ListHistorySqlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<QuertHistorySQLResultsBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}

std::vector<QuertHistorySQLResultsBody>& ListHistorySqlResponse::getResults()
{
    return results_;
}

void ListHistorySqlResponse::setResults(const std::vector<QuertHistorySQLResultsBody>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ListHistorySqlResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ListHistorySqlResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


