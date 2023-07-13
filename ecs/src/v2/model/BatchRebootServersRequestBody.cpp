

#include "huaweicloud/ecs/v2/model/BatchRebootServersRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchRebootServersRequestBody::BatchRebootServersRequestBody()
{
    rebootIsSet_ = false;
}

BatchRebootServersRequestBody::~BatchRebootServersRequestBody() = default;

void BatchRebootServersRequestBody::validate()
{
}

web::json::value BatchRebootServersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rebootIsSet_) {
        val[utility::conversions::to_string_t("reboot")] = ModelBase::toJson(reboot_);
    }

    return val;
}

bool BatchRebootServersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reboot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reboot"));
        if(!fieldValue.is_null())
        {
            BatchRebootSeversOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReboot(refVal);
        }
    }
    return ok;
}

BatchRebootSeversOption BatchRebootServersRequestBody::getReboot() const
{
    return reboot_;
}

void BatchRebootServersRequestBody::setReboot(const BatchRebootSeversOption& value)
{
    reboot_ = value;
    rebootIsSet_ = true;
}

bool BatchRebootServersRequestBody::rebootIsSet() const
{
    return rebootIsSet_;
}

void BatchRebootServersRequestBody::unsetreboot()
{
    rebootIsSet_ = false;
}

}
}
}
}
}


