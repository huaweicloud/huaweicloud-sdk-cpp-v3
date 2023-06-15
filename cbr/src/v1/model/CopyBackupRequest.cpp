

#include "huaweicloud/cbr/v1/model/CopyBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CopyBackupRequest::CopyBackupRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyBackupRequest::~CopyBackupRequest() = default;

void CopyBackupRequest::validate()
{
}

web::json::value CopyBackupRequest::toJson() const
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

bool CopyBackupRequest::fromJson(const web::json::value& val)
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
            BackupReplicateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CopyBackupRequest::getBackupId() const
{
    return backupId_;
}

void CopyBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool CopyBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void CopyBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

BackupReplicateReq CopyBackupRequest::getBody() const
{
    return body_;
}

void CopyBackupRequest::setBody(const BackupReplicateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


