

#include "huaweicloud/rds/v3/model/ShowBackupDownloadLinkRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupDownloadLinkRequest::ShowBackupDownloadLinkRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

ShowBackupDownloadLinkRequest::~ShowBackupDownloadLinkRequest() = default;

void ShowBackupDownloadLinkRequest::validate()
{
}

web::json::value ShowBackupDownloadLinkRequest::toJson() const
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

bool ShowBackupDownloadLinkRequest::fromJson(const web::json::value& val)
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

std::string ShowBackupDownloadLinkRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBackupDownloadLinkRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBackupDownloadLinkRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBackupDownloadLinkRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowBackupDownloadLinkRequest::getBackupId() const
{
    return backupId_;
}

void ShowBackupDownloadLinkRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowBackupDownloadLinkRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowBackupDownloadLinkRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


