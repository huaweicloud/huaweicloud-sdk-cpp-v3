

#include "huaweicloud/cfw/v1/model/SwitchFirewallEipProtectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SwitchFirewallEipProtectionResponse::SwitchFirewallEipProtectionResponse()
{
    dataIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

SwitchFirewallEipProtectionResponse::~SwitchFirewallEipProtectionResponse() = default;

void SwitchFirewallEipProtectionResponse::validate()
{
}

web::json::value SwitchFirewallEipProtectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool SwitchFirewallEipProtectionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            SwitchFirewallEipProtectionResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    return ok;
}


SwitchFirewallEipProtectionResp_data SwitchFirewallEipProtectionResponse::getData() const
{
    return data_;
}

void SwitchFirewallEipProtectionResponse::setData(const SwitchFirewallEipProtectionResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SwitchFirewallEipProtectionResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SwitchFirewallEipProtectionResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string SwitchFirewallEipProtectionResponse::getFailReason() const
{
    return failReason_;
}

void SwitchFirewallEipProtectionResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool SwitchFirewallEipProtectionResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void SwitchFirewallEipProtectionResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}


