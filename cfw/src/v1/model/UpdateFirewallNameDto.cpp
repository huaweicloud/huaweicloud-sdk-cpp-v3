

#include "huaweicloud/cfw/v1/model/UpdateFirewallNameDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateFirewallNameDto::UpdateFirewallNameDto()
{
    fwInstanceName_ = "";
    fwInstanceNameIsSet_ = false;
}

UpdateFirewallNameDto::~UpdateFirewallNameDto() = default;

void UpdateFirewallNameDto::validate()
{
}

web::json::value UpdateFirewallNameDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_name")] = ModelBase::toJson(fwInstanceName_);
    }

    return val;
}
bool UpdateFirewallNameDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceName(refVal);
        }
    }
    return ok;
}


std::string UpdateFirewallNameDto::getFwInstanceName() const
{
    return fwInstanceName_;
}

void UpdateFirewallNameDto::setFwInstanceName(const std::string& value)
{
    fwInstanceName_ = value;
    fwInstanceNameIsSet_ = true;
}

bool UpdateFirewallNameDto::fwInstanceNameIsSet() const
{
    return fwInstanceNameIsSet_;
}

void UpdateFirewallNameDto::unsetfwInstanceName()
{
    fwInstanceNameIsSet_ = false;
}

}
}
}
}
}


