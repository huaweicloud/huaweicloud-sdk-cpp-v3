

#include "huaweicloud/dds/v3/model/CopyConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CopyConfigurationResponse::CopyConfigurationResponse()
{
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

CopyConfigurationResponse::~CopyConfigurationResponse() = default;

void CopyConfigurationResponse::validate()
{
}

web::json::value CopyConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }

    return val;
}
bool CopyConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    return ok;
}


std::string CopyConfigurationResponse::getConfigurationId() const
{
    return configurationId_;
}

void CopyConfigurationResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CopyConfigurationResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CopyConfigurationResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


