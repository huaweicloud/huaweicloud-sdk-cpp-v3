

#include "huaweicloud/gaussdb/v3/model/DeleteRetainedBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteRetainedBackupRequest::DeleteRetainedBackupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

DeleteRetainedBackupRequest::~DeleteRetainedBackupRequest() = default;

void DeleteRetainedBackupRequest::validate()
{
}

web::json::value DeleteRetainedBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}
bool DeleteRetainedBackupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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


std::string DeleteRetainedBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteRetainedBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteRetainedBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteRetainedBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteRetainedBackupRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteRetainedBackupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteRetainedBackupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteRetainedBackupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteRetainedBackupRequest::getBackupId() const
{
    return backupId_;
}

void DeleteRetainedBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DeleteRetainedBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DeleteRetainedBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


