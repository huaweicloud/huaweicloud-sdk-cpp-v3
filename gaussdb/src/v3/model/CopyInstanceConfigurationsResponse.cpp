

#include "huaweicloud/gaussdb/v3/model/CopyInstanceConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CopyInstanceConfigurationsResponse::CopyInstanceConfigurationsResponse()
{
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

CopyInstanceConfigurationsResponse::~CopyInstanceConfigurationsResponse() = default;

void CopyInstanceConfigurationsResponse::validate()
{
}

web::json::value CopyInstanceConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }

    return val;
}
bool CopyInstanceConfigurationsResponse::fromJson(const web::json::value& val)
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


std::string CopyInstanceConfigurationsResponse::getConfigurationId() const
{
    return configurationId_;
}

void CopyInstanceConfigurationsResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CopyInstanceConfigurationsResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CopyInstanceConfigurationsResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


