

#include "huaweicloud/cbr/v1/model/RestoreBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




RestoreBackupRequest::RestoreBackupRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreBackupRequest::~RestoreBackupRequest() = default;

void RestoreBackupRequest::validate()
{
}

web::json::value RestoreBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RestoreBackupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BackupRestoreReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestoreBackupRequest::getBackupId() const
{
    return backupId_;
}

void RestoreBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RestoreBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RestoreBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

BackupRestoreReq RestoreBackupRequest::getBody() const
{
    return body_;
}

void RestoreBackupRequest::setBody(const BackupRestoreReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


