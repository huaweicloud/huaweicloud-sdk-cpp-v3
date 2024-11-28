

#include "huaweicloud/gaussdb/v3/model/ShowMultiTenantResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowMultiTenantResponse::ShowMultiTenantResponse()
{
    multiTenantSwitch_ = false;
    multiTenantSwitchIsSet_ = false;
}

ShowMultiTenantResponse::~ShowMultiTenantResponse() = default;

void ShowMultiTenantResponse::validate()
{
}

web::json::value ShowMultiTenantResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(multiTenantSwitchIsSet_) {
        val[utility::conversions::to_string_t("multi_tenant_switch")] = ModelBase::toJson(multiTenantSwitch_);
    }

    return val;
}
bool ShowMultiTenantResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("multi_tenant_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_tenant_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiTenantSwitch(refVal);
        }
    }
    return ok;
}


bool ShowMultiTenantResponse::isMultiTenantSwitch() const
{
    return multiTenantSwitch_;
}

void ShowMultiTenantResponse::setMultiTenantSwitch(bool value)
{
    multiTenantSwitch_ = value;
    multiTenantSwitchIsSet_ = true;
}

bool ShowMultiTenantResponse::multiTenantSwitchIsSet() const
{
    return multiTenantSwitchIsSet_;
}

void ShowMultiTenantResponse::unsetmultiTenantSwitch()
{
    multiTenantSwitchIsSet_ = false;
}

}
}
}
}
}


