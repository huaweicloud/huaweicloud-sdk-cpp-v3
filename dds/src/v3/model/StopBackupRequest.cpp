

#include "huaweicloud/dds/v3/model/StopBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




StopBackupRequest::StopBackupRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    bodyIsSet_ = false;
}

StopBackupRequest::~StopBackupRequest() = default;

void StopBackupRequest::validate()
{
}

web::json::value StopBackupRequest::toJson() const
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
bool StopBackupRequest::fromJson(const web::json::value& val)
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
            StopBackupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopBackupRequest::getBackupId() const
{
    return backupId_;
}

void StopBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool StopBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void StopBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

StopBackupRequestBody StopBackupRequest::getBody() const
{
    return body_;
}

void StopBackupRequest::setBody(const StopBackupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


