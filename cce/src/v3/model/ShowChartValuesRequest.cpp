

#include "huaweicloud/cce/v3/model/ShowChartValuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowChartValuesRequest::ShowChartValuesRequest()
{
    chartId_ = "";
    chartIdIsSet_ = false;
}

ShowChartValuesRequest::~ShowChartValuesRequest() = default;

void ShowChartValuesRequest::validate()
{
}

web::json::value ShowChartValuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }

    return val;
}
bool ShowChartValuesRequest::fromJson(const web::json::value& val)
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


std::string ShowChartValuesRequest::getChartId() const
{
    return chartId_;
}

void ShowChartValuesRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool ShowChartValuesRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void ShowChartValuesRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

}
}
}
}
}


