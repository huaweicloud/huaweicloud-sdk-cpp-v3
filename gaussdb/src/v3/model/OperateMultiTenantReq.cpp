

#include "huaweicloud/gaussdb/v3/model/OperateMultiTenantReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OperateMultiTenantReq::OperateMultiTenantReq()
{
    multiTenantSwitch_ = false;
    multiTenantSwitchIsSet_ = false;
}

OperateMultiTenantReq::~OperateMultiTenantReq() = default;

void OperateMultiTenantReq::validate()
{
}

web::json::value OperateMultiTenantReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(multiTenantSwitchIsSet_) {
        val[utility::conversions::to_string_t("multi_tenant_switch")] = ModelBase::toJson(multiTenantSwitch_);
    }

    return val;
}
bool OperateMultiTenantReq::fromJson(const web::json::value& val)
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


bool OperateMultiTenantReq::isMultiTenantSwitch() const
{
    return multiTenantSwitch_;
}

void OperateMultiTenantReq::setMultiTenantSwitch(bool value)
{
    multiTenantSwitch_ = value;
    multiTenantSwitchIsSet_ = true;
}

bool OperateMultiTenantReq::multiTenantSwitchIsSet() const
{
    return multiTenantSwitchIsSet_;
}

void OperateMultiTenantReq::unsetmultiTenantSwitch()
{
    multiTenantSwitchIsSet_ = false;
}

}
}
}
}
}


