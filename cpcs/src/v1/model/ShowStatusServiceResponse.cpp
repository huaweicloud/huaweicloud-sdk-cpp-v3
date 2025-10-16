

#include "huaweicloud/cpcs/v1/model/ShowStatusServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusServiceResponse::ShowStatusServiceResponse()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    serverListIsSet_ = false;
}

ShowStatusServiceResponse::~ShowStatusServiceResponse() = default;

void ShowStatusServiceResponse::validate()
{
}

web::json::value ShowStatusServiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(serverListIsSet_) {
        val[utility::conversions::to_string_t("server_list")] = ModelBase::toJson(serverList_);
    }

    return val;
}
bool ShowStatusServiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatusServiceResponseBody_server_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerList(refVal);
        }
    }
    return ok;
}


std::string ShowStatusServiceResponse::getMetricName() const
{
    return metricName_;
}

void ShowStatusServiceResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowStatusServiceResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowStatusServiceResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::vector<ShowStatusServiceResponseBody_server_list>& ShowStatusServiceResponse::getServerList()
{
    return serverList_;
}

void ShowStatusServiceResponse::setServerList(const std::vector<ShowStatusServiceResponseBody_server_list>& value)
{
    serverList_ = value;
    serverListIsSet_ = true;
}

bool ShowStatusServiceResponse::serverListIsSet() const
{
    return serverListIsSet_;
}

void ShowStatusServiceResponse::unsetserverList()
{
    serverListIsSet_ = false;
}

}
}
}
}
}


