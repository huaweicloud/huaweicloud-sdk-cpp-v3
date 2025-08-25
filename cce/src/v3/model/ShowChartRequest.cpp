

#include "huaweicloud/cce/v3/model/ShowChartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowChartRequest::ShowChartRequest()
{
    chartId_ = "";
    chartIdIsSet_ = false;
}

ShowChartRequest::~ShowChartRequest() = default;

void ShowChartRequest::validate()
{
}

web::json::value ShowChartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }

    return val;
}
bool ShowChartRequest::fromJson(const web::json::value& val)
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


std::string ShowChartRequest::getChartId() const
{
    return chartId_;
}

void ShowChartRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool ShowChartRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void ShowChartRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

}
}
}
}
}


