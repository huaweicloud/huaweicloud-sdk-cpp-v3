

#include "huaweicloud/gaussdbforopengauss/v3/model/AuthorizeBackupDownloadRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AuthorizeBackupDownloadRequest::AuthorizeBackupDownloadRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

AuthorizeBackupDownloadRequest::~AuthorizeBackupDownloadRequest() = default;

void AuthorizeBackupDownloadRequest::validate()
{
}

web::json::value AuthorizeBackupDownloadRequest::toJson() const
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
bool AuthorizeBackupDownloadRequest::fromJson(const web::json::value& val)
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


std::string AuthorizeBackupDownloadRequest::getXLanguage() const
{
    return xLanguage_;
}

void AuthorizeBackupDownloadRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool AuthorizeBackupDownloadRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void AuthorizeBackupDownloadRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string AuthorizeBackupDownloadRequest::getBackupId() const
{
    return backupId_;
}

void AuthorizeBackupDownloadRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool AuthorizeBackupDownloadRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void AuthorizeBackupDownloadRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


