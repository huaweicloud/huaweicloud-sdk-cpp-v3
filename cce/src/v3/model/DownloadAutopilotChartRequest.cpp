

#include "huaweicloud/cce/v3/model/DownloadAutopilotChartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DownloadAutopilotChartRequest::DownloadAutopilotChartRequest()
{
    chartId_ = "";
    chartIdIsSet_ = false;
}

DownloadAutopilotChartRequest::~DownloadAutopilotChartRequest() = default;

void DownloadAutopilotChartRequest::validate()
{
}

web::json::value DownloadAutopilotChartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }

    return val;
}
bool DownloadAutopilotChartRequest::fromJson(const web::json::value& val)
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


std::string DownloadAutopilotChartRequest::getChartId() const
{
    return chartId_;
}

void DownloadAutopilotChartRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool DownloadAutopilotChartRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void DownloadAutopilotChartRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

}
}
}
}
}


