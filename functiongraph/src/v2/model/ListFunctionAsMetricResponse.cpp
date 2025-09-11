

#include "huaweicloud/functiongraph/v2/model/ListFunctionAsMetricResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionAsMetricResponse::ListFunctionAsMetricResponse()
{
    valuesIsSet_ = false;
    nextMarker_ = 0L;
    nextMarkerIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListFunctionAsMetricResponse::~ListFunctionAsMetricResponse() = default;

void ListFunctionAsMetricResponse::validate()
{
}

web::json::value ListFunctionAsMetricResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListFunctionAsMetricResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<FunctionMetric> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<FunctionMetric>& ListFunctionAsMetricResponse::getValues()
{
    return values_;
}

void ListFunctionAsMetricResponse::setValues(const std::vector<FunctionMetric>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ListFunctionAsMetricResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ListFunctionAsMetricResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

int64_t ListFunctionAsMetricResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListFunctionAsMetricResponse::setNextMarker(int64_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListFunctionAsMetricResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListFunctionAsMetricResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int64_t ListFunctionAsMetricResponse::getCount() const
{
    return count_;
}

void ListFunctionAsMetricResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFunctionAsMetricResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFunctionAsMetricResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


