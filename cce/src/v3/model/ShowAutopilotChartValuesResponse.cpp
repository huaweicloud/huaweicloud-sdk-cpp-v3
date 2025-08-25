

#include "huaweicloud/cce/v3/model/ShowAutopilotChartValuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotChartValuesResponse::ShowAutopilotChartValuesResponse()
{
    valuesIsSet_ = false;
}

ShowAutopilotChartValuesResponse::~ShowAutopilotChartValuesResponse() = default;

void ShowAutopilotChartValuesResponse::validate()
{
}

web::json::value ShowAutopilotChartValuesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool ShowAutopilotChartValuesResponse::fromJson(const web::json::value& val)
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


ChartValue_values ShowAutopilotChartValuesResponse::getValues() const
{
    return values_;
}

void ShowAutopilotChartValuesResponse::setValues(const ChartValue_values& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ShowAutopilotChartValuesResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ShowAutopilotChartValuesResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


