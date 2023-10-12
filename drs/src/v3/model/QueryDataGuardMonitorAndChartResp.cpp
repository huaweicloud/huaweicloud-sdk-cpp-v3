

#include "huaweicloud/drs/v3/model/QueryDataGuardMonitorAndChartResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryDataGuardMonitorAndChartResp::QueryDataGuardMonitorAndChartResp()
{
    id_ = "";
    idIsSet_ = false;
    dataGuardMinitorIsSet_ = false;
}

QueryDataGuardMonitorAndChartResp::~QueryDataGuardMonitorAndChartResp() = default;

void QueryDataGuardMonitorAndChartResp::validate()
{
}

web::json::value QueryDataGuardMonitorAndChartResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(dataGuardMinitorIsSet_) {
        val[utility::conversions::to_string_t("data_guard_minitor")] = ModelBase::toJson(dataGuardMinitor_);
    }

    return val;
}
bool QueryDataGuardMonitorAndChartResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_guard_minitor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_guard_minitor"));
        if(!fieldValue.is_null())
        {
            QueryDataGuardMonitorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataGuardMinitor(refVal);
        }
    }
    return ok;
}


std::string QueryDataGuardMonitorAndChartResp::getId() const
{
    return id_;
}

void QueryDataGuardMonitorAndChartResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryDataGuardMonitorAndChartResp::idIsSet() const
{
    return idIsSet_;
}

void QueryDataGuardMonitorAndChartResp::unsetid()
{
    idIsSet_ = false;
}

QueryDataGuardMonitorResponse QueryDataGuardMonitorAndChartResp::getDataGuardMinitor() const
{
    return dataGuardMinitor_;
}

void QueryDataGuardMonitorAndChartResp::setDataGuardMinitor(const QueryDataGuardMonitorResponse& value)
{
    dataGuardMinitor_ = value;
    dataGuardMinitorIsSet_ = true;
}

bool QueryDataGuardMonitorAndChartResp::dataGuardMinitorIsSet() const
{
    return dataGuardMinitorIsSet_;
}

void QueryDataGuardMonitorAndChartResp::unsetdataGuardMinitor()
{
    dataGuardMinitorIsSet_ = false;
}

}
}
}
}
}


