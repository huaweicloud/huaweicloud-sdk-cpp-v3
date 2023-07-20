

#include "huaweicloud/gaussdbforopengauss/v3/model/RestorePoint.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RestorePoint::RestorePoint()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

RestorePoint::~RestorePoint() = default;

void RestorePoint::validate()
{
}

web::json::value RestorePoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}

bool RestorePoint::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    return ok;
}

std::string RestorePoint::getInstanceId() const
{
    return instanceId_;
}

void RestorePoint::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestorePoint::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestorePoint::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestorePoint::getBackupId() const
{
    return backupId_;
}

void RestorePoint::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RestorePoint::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RestorePoint::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


