

#include "huaweicloud/cce/v3/model/DeleteChartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteChartRequest::DeleteChartRequest()
{
    chartId_ = "";
    chartIdIsSet_ = false;
}

DeleteChartRequest::~DeleteChartRequest() = default;

void DeleteChartRequest::validate()
{
}

web::json::value DeleteChartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }

    return val;
}
bool DeleteChartRequest::fromJson(const web::json::value& val)
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


std::string DeleteChartRequest::getChartId() const
{
    return chartId_;
}

void DeleteChartRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool DeleteChartRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void DeleteChartRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

}
}
}
}
}


