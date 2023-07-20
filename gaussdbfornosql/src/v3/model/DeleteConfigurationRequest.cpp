

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteConfigurationRequest::DeleteConfigurationRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
}

DeleteConfigurationRequest::~DeleteConfigurationRequest() = default;

void DeleteConfigurationRequest::validate()
{
}

web::json::value DeleteConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }

    return val;
}

bool DeleteConfigurationRequest::fromJson(const web::json::value& val)
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

std::string DeleteConfigurationRequest::getConfigId() const
{
    return configId_;
}

void DeleteConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool DeleteConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void DeleteConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


