

#include "huaweicloud/cce/v3/model/DeleteAutopilotChartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotChartRequest::DeleteAutopilotChartRequest()
{
    chartId_ = "";
    chartIdIsSet_ = false;
}

DeleteAutopilotChartRequest::~DeleteAutopilotChartRequest() = default;

void DeleteAutopilotChartRequest::validate()
{
}

web::json::value DeleteAutopilotChartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }

    return val;
}
bool DeleteAutopilotChartRequest::fromJson(const web::json::value& val)
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


std::string DeleteAutopilotChartRequest::getChartId() const
{
    return chartId_;
}

void DeleteAutopilotChartRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool DeleteAutopilotChartRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void DeleteAutopilotChartRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

}
}
}
}
}


