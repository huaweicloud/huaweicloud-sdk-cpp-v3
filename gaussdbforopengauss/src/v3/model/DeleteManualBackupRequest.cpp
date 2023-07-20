

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteManualBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteManualBackupRequest::DeleteManualBackupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

DeleteManualBackupRequest::~DeleteManualBackupRequest() = default;

void DeleteManualBackupRequest::validate()
{
}

web::json::value DeleteManualBackupRequest::toJson() const
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

bool DeleteManualBackupRequest::fromJson(const web::json::value& val)
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

std::string DeleteManualBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteManualBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteManualBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteManualBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteManualBackupRequest::getBackupId() const
{
    return backupId_;
}

void DeleteManualBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DeleteManualBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DeleteManualBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


