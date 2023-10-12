

#include "huaweicloud/rds/v3/model/ListConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListConfigurationsResponse::ListConfigurationsResponse()
{
    configurationsIsSet_ = false;
}

ListConfigurationsResponse::~ListConfigurationsResponse() = default;

void ListConfigurationsResponse::validate()
{
}

web::json::value ListConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}
bool ListConfigurationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


std::vector<ConfigurationSummary>& ListConfigurationsResponse::getConfigurations()
{
    return configurations_;
}

void ListConfigurationsResponse::setConfigurations(const std::vector<ConfigurationSummary>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ListConfigurationsResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ListConfigurationsResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


