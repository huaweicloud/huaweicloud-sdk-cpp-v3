

#include "huaweicloud/cce/v3/model/HostnameConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




HostnameConfig::HostnameConfig()
{
    type_ = "";
    typeIsSet_ = false;
}

HostnameConfig::~HostnameConfig() = default;

void HostnameConfig::validate()
{
}

web::json::value HostnameConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool HostnameConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string HostnameConfig::getType() const
{
    return type_;
}

void HostnameConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HostnameConfig::typeIsSet() const
{
    return typeIsSet_;
}

void HostnameConfig::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


