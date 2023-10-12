

#include "huaweicloud/dds/v3/model/ShowConfigurationParameterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowConfigurationParameterRequest::ShowConfigurationParameterRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
}

ShowConfigurationParameterRequest::~ShowConfigurationParameterRequest() = default;

void ShowConfigurationParameterRequest::validate()
{
}

web::json::value ShowConfigurationParameterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }

    return val;
}
bool ShowConfigurationParameterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    return ok;
}


std::string ShowConfigurationParameterRequest::getConfigId() const
{
    return configId_;
}

void ShowConfigurationParameterRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ShowConfigurationParameterRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ShowConfigurationParameterRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


