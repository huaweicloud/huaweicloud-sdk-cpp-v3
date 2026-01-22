

#include "huaweicloud/cfw/v1/model/ShowSnFirewallProtectionStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowSnFirewallProtectionStatusRequest::ShowSnFirewallProtectionStatusRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ShowSnFirewallProtectionStatusRequest::~ShowSnFirewallProtectionStatusRequest() = default;

void ShowSnFirewallProtectionStatusRequest::validate()
{
}

web::json::value ShowSnFirewallProtectionStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ShowSnFirewallProtectionStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    return ok;
}


std::string ShowSnFirewallProtectionStatusRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowSnFirewallProtectionStatusRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowSnFirewallProtectionStatusRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowSnFirewallProtectionStatusRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


