

#include "huaweicloud/cce/v3/model/ShowChartValuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowChartValuesResponse::ShowChartValuesResponse()
{
    valuesIsSet_ = false;
}

ShowChartValuesResponse::~ShowChartValuesResponse() = default;

void ShowChartValuesResponse::validate()
{
}

web::json::value ShowChartValuesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool ShowChartValuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            ChartValue_values refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


ChartValue_values ShowChartValuesResponse::getValues() const
{
    return values_;
}

void ShowChartValuesResponse::setValues(const ChartValue_values& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ShowChartValuesResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ShowChartValuesResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


