

#include "huaweicloud/cfw/v1/model/IpBlacklistSwitchInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpBlacklistSwitchInfoVo::IpBlacklistSwitchInfoVo()
{
    status_ = 0;
    statusIsSet_ = false;
}

IpBlacklistSwitchInfoVo::~IpBlacklistSwitchInfoVo() = default;

void IpBlacklistSwitchInfoVo::validate()
{
}

web::json::value IpBlacklistSwitchInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool IpBlacklistSwitchInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t IpBlacklistSwitchInfoVo::getStatus() const
{
    return status_;
}

void IpBlacklistSwitchInfoVo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IpBlacklistSwitchInfoVo::statusIsSet() const
{
    return statusIsSet_;
}

void IpBlacklistSwitchInfoVo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


