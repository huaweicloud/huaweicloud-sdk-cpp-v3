

#include "huaweicloud/gaussdb/v3/model/DeleteBackupResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteBackupResult::DeleteBackupResult()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DeleteBackupResult::~DeleteBackupResult() = default;

void DeleteBackupResult::validate()
{
}

web::json::value DeleteBackupResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool DeleteBackupResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string DeleteBackupResult::getBackupId() const
{
    return backupId_;
}

void DeleteBackupResult::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DeleteBackupResult::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DeleteBackupResult::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string DeleteBackupResult::getErrorCode() const
{
    return errorCode_;
}

void DeleteBackupResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DeleteBackupResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DeleteBackupResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DeleteBackupResult::getErrorMsg() const
{
    return errorMsg_;
}

void DeleteBackupResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DeleteBackupResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DeleteBackupResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


