

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSourceInstanceDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSourceInstanceDetailRequest::ShowSourceInstanceDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

ShowSourceInstanceDetailRequest::~ShowSourceInstanceDetailRequest() = default;

void ShowSourceInstanceDetailRequest::validate()
{
}

web::json::value ShowSourceInstanceDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}
bool ShowSourceInstanceDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
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


std::string ShowSourceInstanceDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSourceInstanceDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSourceInstanceDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSourceInstanceDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSourceInstanceDetailRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSourceInstanceDetailRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSourceInstanceDetailRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSourceInstanceDetailRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSourceInstanceDetailRequest::getRestoreTime() const
{
    return restoreTime_;
}

void ShowSourceInstanceDetailRequest::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ShowSourceInstanceDetailRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ShowSourceInstanceDetailRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string ShowSourceInstanceDetailRequest::getBackupId() const
{
    return backupId_;
}

void ShowSourceInstanceDetailRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowSourceInstanceDetailRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowSourceInstanceDetailRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


