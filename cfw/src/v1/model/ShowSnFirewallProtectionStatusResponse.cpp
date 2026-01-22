

#include "huaweicloud/cfw/v1/model/ShowSnFirewallProtectionStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowSnFirewallProtectionStatusResponse::ShowSnFirewallProtectionStatusResponse()
{
    dataIsSet_ = false;
}

ShowSnFirewallProtectionStatusResponse::~ShowSnFirewallProtectionStatusResponse() = default;

void ShowSnFirewallProtectionStatusResponse::validate()
{
}

web::json::value ShowSnFirewallProtectionStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowSnFirewallProtectionStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            FirewallProtectionStatusVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


FirewallProtectionStatusVO ShowSnFirewallProtectionStatusResponse::getData() const
{
    return data_;
}

void ShowSnFirewallProtectionStatusResponse::setData(const FirewallProtectionStatusVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowSnFirewallProtectionStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowSnFirewallProtectionStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


