

#include "huaweicloud/gaussdbfornosql/v3/model/CopyConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CopyConfigurationResponse::CopyConfigurationResponse()
{
    configId_ = "";
    configIdIsSet_ = false;
}

CopyConfigurationResponse::~CopyConfigurationResponse() = default;

void CopyConfigurationResponse::validate()
{
}

web::json::value CopyConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }

    return val;
}

bool CopyConfigurationResponse::fromJson(const web::json::value& val)
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

std::string CopyConfigurationResponse::getConfigId() const
{
    return configId_;
}

void CopyConfigurationResponse::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool CopyConfigurationResponse::configIdIsSet() const
{
    return configIdIsSet_;
}

void CopyConfigurationResponse::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


