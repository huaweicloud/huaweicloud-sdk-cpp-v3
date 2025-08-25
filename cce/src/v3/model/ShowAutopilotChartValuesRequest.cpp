

#include "huaweicloud/cce/v3/model/ShowAutopilotChartValuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotChartValuesRequest::ShowAutopilotChartValuesRequest()
{
    chartId_ = "";
    chartIdIsSet_ = false;
}

ShowAutopilotChartValuesRequest::~ShowAutopilotChartValuesRequest() = default;

void ShowAutopilotChartValuesRequest::validate()
{
}

web::json::value ShowAutopilotChartValuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }

    return val;
}
bool ShowAutopilotChartValuesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("chart_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChartId(refVal);
        }
    }
    return ok;
}


std::string ShowAutopilotChartValuesRequest::getChartId() const
{
    return chartId_;
}

void ShowAutopilotChartValuesRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool ShowAutopilotChartValuesRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void ShowAutopilotChartValuesRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

}
}
}
}
}


