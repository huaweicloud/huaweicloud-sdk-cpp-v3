

#include "huaweicloud/cbr/v1/model/UpdateBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateBackupRequest::UpdateBackupRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBackupRequest::~UpdateBackupRequest() = default;

void UpdateBackupRequest::validate()
{
}

web::json::value UpdateBackupRequest::toJson() const
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

bool UpdateBackupRequest::fromJson(const web::json::value& val)
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
            BackupUpdateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBackupRequest::getBackupId() const
{
    return backupId_;
}

void UpdateBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool UpdateBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void UpdateBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

BackupUpdateReq UpdateBackupRequest::getBody() const
{
    return body_;
}

void UpdateBackupRequest::setBody(const BackupUpdateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


