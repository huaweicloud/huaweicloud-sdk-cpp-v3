

#include "huaweicloud/rds/v3/model/TransferBackupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TransferBackupRequestBody::TransferBackupRequestBody()
{
    backupsIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
}

TransferBackupRequestBody::~TransferBackupRequestBody() = default;

void TransferBackupRequestBody::validate()
{
}

web::json::value TransferBackupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }

    return val;
}
bool TransferBackupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& TransferBackupRequestBody::getBackups()
{
    return backups_;
}

void TransferBackupRequestBody::setBackups(const std::vector<std::string>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool TransferBackupRequestBody::backupsIsSet() const
{
    return backupsIsSet_;
}

void TransferBackupRequestBody::unsetbackups()
{
    backupsIsSet_ = false;
}

std::string TransferBackupRequestBody::getInstanceId() const
{
    return instanceId_;
}

void TransferBackupRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool TransferBackupRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void TransferBackupRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string TransferBackupRequestBody::getDestination() const
{
    return destination_;
}

void TransferBackupRequestBody::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool TransferBackupRequestBody::destinationIsSet() const
{
    return destinationIsSet_;
}

void TransferBackupRequestBody::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string TransferBackupRequestBody::getPrefix() const
{
    return prefix_;
}

void TransferBackupRequestBody::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool TransferBackupRequestBody::prefixIsSet() const
{
    return prefixIsSet_;
}

void TransferBackupRequestBody::unsetprefix()
{
    prefixIsSet_ = false;
}

}
}
}
}
}


