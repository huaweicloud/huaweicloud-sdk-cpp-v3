

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlBackupRequest::DeleteGaussMySqlBackupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

DeleteGaussMySqlBackupRequest::~DeleteGaussMySqlBackupRequest() = default;

void DeleteGaussMySqlBackupRequest::validate()
{
}

web::json::value DeleteGaussMySqlBackupRequest::toJson() const
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
bool DeleteGaussMySqlBackupRequest::fromJson(const web::json::value& val)
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


std::string DeleteGaussMySqlBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteGaussMySqlBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteGaussMySqlBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteGaussMySqlBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteGaussMySqlBackupRequest::getBackupId() const
{
    return backupId_;
}

void DeleteGaussMySqlBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DeleteGaussMySqlBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DeleteGaussMySqlBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


