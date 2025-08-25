

#include "huaweicloud/cce/v3/model/DownloadChartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DownloadChartRequest::DownloadChartRequest()
{
    chartId_ = "";
    chartIdIsSet_ = false;
}

DownloadChartRequest::~DownloadChartRequest() = default;

void DownloadChartRequest::validate()
{
}

web::json::value DownloadChartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }

    return val;
}
bool DownloadChartRequest::fromJson(const web::json::value& val)
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


std::string DownloadChartRequest::getChartId() const
{
    return chartId_;
}

void DownloadChartRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool DownloadChartRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void DownloadChartRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

}
}
}
}
}


