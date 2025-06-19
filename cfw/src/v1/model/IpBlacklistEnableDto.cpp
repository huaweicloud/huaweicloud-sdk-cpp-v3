

#include "huaweicloud/cfw/v1/model/IpBlacklistEnableDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpBlacklistEnableDto::IpBlacklistEnableDto()
{
    status_ = 0;
    statusIsSet_ = false;
}

IpBlacklistEnableDto::~IpBlacklistEnableDto() = default;

void IpBlacklistEnableDto::validate()
{
}

web::json::value IpBlacklistEnableDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool IpBlacklistEnableDto::fromJson(const web::json::value& val)
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


int32_t IpBlacklistEnableDto::getStatus() const
{
    return status_;
}

void IpBlacklistEnableDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IpBlacklistEnableDto::statusIsSet() const
{
    return statusIsSet_;
}

void IpBlacklistEnableDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


