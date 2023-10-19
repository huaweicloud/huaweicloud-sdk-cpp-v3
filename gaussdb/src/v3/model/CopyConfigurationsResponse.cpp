

#include "huaweicloud/gaussdb/v3/model/CopyConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CopyConfigurationsResponse::CopyConfigurationsResponse()
{
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

CopyConfigurationsResponse::~CopyConfigurationsResponse() = default;

void CopyConfigurationsResponse::validate()
{
}

web::json::value CopyConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }

    return val;
}
bool CopyConfigurationsResponse::fromJson(const web::json::value& val)
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


std::string CopyConfigurationsResponse::getConfigurationId() const
{
    return configurationId_;
}

void CopyConfigurationsResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CopyConfigurationsResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CopyConfigurationsResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


