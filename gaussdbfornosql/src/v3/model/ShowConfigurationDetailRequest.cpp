

#include "huaweicloud/gaussdbfornosql/v3/model/ShowConfigurationDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowConfigurationDetailRequest::ShowConfigurationDetailRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
}

ShowConfigurationDetailRequest::~ShowConfigurationDetailRequest() = default;

void ShowConfigurationDetailRequest::validate()
{
}

web::json::value ShowConfigurationDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }

    return val;
}

bool ShowConfigurationDetailRequest::fromJson(const web::json::value& val)
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

std::string ShowConfigurationDetailRequest::getConfigId() const
{
    return configId_;
}

void ShowConfigurationDetailRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ShowConfigurationDetailRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ShowConfigurationDetailRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


