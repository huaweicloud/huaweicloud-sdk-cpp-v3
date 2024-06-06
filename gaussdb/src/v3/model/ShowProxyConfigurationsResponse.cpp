

#include "huaweicloud/gaussdb/v3/model/ShowProxyConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowProxyConfigurationsResponse::ShowProxyConfigurationsResponse()
{
    totalCount_ = "";
    totalCountIsSet_ = false;
    configurationsIsSet_ = false;
}

ShowProxyConfigurationsResponse::~ShowProxyConfigurationsResponse() = default;

void ShowProxyConfigurationsResponse::validate()
{
}

web::json::value ShowProxyConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}
bool ShowProxyConfigurationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<ProxyConfiguration> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


std::string ShowProxyConfigurationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowProxyConfigurationsResponse::setTotalCount(const std::string& value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowProxyConfigurationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowProxyConfigurationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ProxyConfiguration>& ShowProxyConfigurationsResponse::getConfigurations()
{
    return configurations_;
}

void ShowProxyConfigurationsResponse::setConfigurations(const std::vector<ProxyConfiguration>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ShowProxyConfigurationsResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ShowProxyConfigurationsResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


