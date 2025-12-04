

#include "huaweicloud/rds/v3/model/BatchExecuteEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchExecuteEventsResponse::BatchExecuteEventsResponse()
{
    resultsIsSet_ = false;
}

BatchExecuteEventsResponse::~BatchExecuteEventsResponse() = default;

void BatchExecuteEventsResponse::validate()
{
}

web::json::value BatchExecuteEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool BatchExecuteEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<EventJobResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<EventJobResult>& BatchExecuteEventsResponse::getResults()
{
    return results_;
}

void BatchExecuteEventsResponse::setResults(const std::vector<EventJobResult>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchExecuteEventsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchExecuteEventsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


