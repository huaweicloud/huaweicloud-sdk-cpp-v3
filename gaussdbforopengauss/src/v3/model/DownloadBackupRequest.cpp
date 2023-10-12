

#include "huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DownloadBackupRequest::DownloadBackupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

DownloadBackupRequest::~DownloadBackupRequest() = default;

void DownloadBackupRequest::validate()
{
}

web::json::value DownloadBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}
bool DownloadBackupRequest::fromJson(const web::json::value& val)
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


std::string DownloadBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DownloadBackupRequest::getBackupId() const
{
    return backupId_;
}

void DownloadBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DownloadBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DownloadBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


