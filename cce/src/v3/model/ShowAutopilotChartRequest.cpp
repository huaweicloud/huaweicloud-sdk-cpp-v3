

#include "huaweicloud/cce/v3/model/ShowAutopilotChartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotChartRequest::ShowAutopilotChartRequest()
{
    chartId_ = "";
    chartIdIsSet_ = false;
}

ShowAutopilotChartRequest::~ShowAutopilotChartRequest() = default;

void ShowAutopilotChartRequest::validate()
{
}

web::json::value ShowAutopilotChartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }

    return val;
}
bool ShowAutopilotChartRequest::fromJson(const web::json::value& val)
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


std::string ShowAutopilotChartRequest::getChartId() const
{
    return chartId_;
}

void ShowAutopilotChartRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool ShowAutopilotChartRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void ShowAutopilotChartRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

}
}
}
}
}


