

#include "huaweicloud/gaussdbforopengauss/v3/model/RecoveryBackupTarget.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RecoveryBackupTarget::RecoveryBackupTarget()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

RecoveryBackupTarget::~RecoveryBackupTarget() = default;

void RecoveryBackupTarget::validate()
{
}

web::json::value RecoveryBackupTarget::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool RecoveryBackupTarget::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string RecoveryBackupTarget::getInstanceId() const
{
    return instanceId_;
}

void RecoveryBackupTarget::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RecoveryBackupTarget::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RecoveryBackupTarget::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


