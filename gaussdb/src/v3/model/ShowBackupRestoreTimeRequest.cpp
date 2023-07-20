

#include "huaweicloud/gaussdb/v3/model/ShowBackupRestoreTimeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowBackupRestoreTimeRequest::ShowBackupRestoreTimeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
}

ShowBackupRestoreTimeRequest::~ShowBackupRestoreTimeRequest() = default;

void ShowBackupRestoreTimeRequest::validate()
{
}

web::json::value ShowBackupRestoreTimeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }

    return val;
}

bool ShowBackupRestoreTimeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    return ok;
}

std::string ShowBackupRestoreTimeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBackupRestoreTimeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBackupRestoreTimeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBackupRestoreTimeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowBackupRestoreTimeRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBackupRestoreTimeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBackupRestoreTimeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBackupRestoreTimeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowBackupRestoreTimeRequest::getDate() const
{
    return date_;
}

void ShowBackupRestoreTimeRequest::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool ShowBackupRestoreTimeRequest::dateIsSet() const
{
    return dateIsSet_;
}

void ShowBackupRestoreTimeRequest::unsetdate()
{
    dateIsSet_ = false;
}

}
}
}
}
}


