

#include "huaweicloud/dds/v3/model/Source.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




Source::Source()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
}

Source::~Source() = default;

void Source::validate()
{
}

web::json::value Source::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }

    return val;
}
bool Source::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    return ok;
}


std::string Source::getInstanceId() const
{
    return instanceId_;
}

void Source::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Source::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Source::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string Source::getType() const
{
    return type_;
}

void Source::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Source::typeIsSet() const
{
    return typeIsSet_;
}

void Source::unsettype()
{
    typeIsSet_ = false;
}

std::string Source::getBackupId() const
{
    return backupId_;
}

void Source::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool Source::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void Source::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string Source::getRestoreTime() const
{
    return restoreTime_;
}

void Source::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool Source::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void Source::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

}
}
}
}
}


