

#include "huaweicloud/rds/v3/model/ShowDatabaseLevelDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDatabaseLevelDatabaseRequest::ShowDatabaseLevelDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowDatabaseLevelDatabaseRequest::~ShowDatabaseLevelDatabaseRequest() = default;

void ShowDatabaseLevelDatabaseRequest::validate()
{
}

web::json::value ShowDatabaseLevelDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowDatabaseLevelDatabaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowDatabaseLevelDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDatabaseLevelDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDatabaseLevelDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDatabaseLevelDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDatabaseLevelDatabaseRequest::getBackupId() const
{
    return backupId_;
}

void ShowDatabaseLevelDatabaseRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowDatabaseLevelDatabaseRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowDatabaseLevelDatabaseRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ShowDatabaseLevelDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDatabaseLevelDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDatabaseLevelDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDatabaseLevelDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


