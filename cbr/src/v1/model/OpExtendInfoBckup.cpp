

#include "huaweicloud/cbr/v1/model/OpExtendInfoBckup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoBckup::OpExtendInfoBckup()
{
    appConsistencyErrorCode_ = "";
    appConsistencyErrorCodeIsSet_ = false;
    appConsistencyErrorMessage_ = "";
    appConsistencyErrorMessageIsSet_ = false;
    appConsistencyStatus_ = "";
    appConsistencyStatusIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
    incremental_ = "";
    incrementalIsSet_ = false;
}

OpExtendInfoBckup::~OpExtendInfoBckup() = default;

void OpExtendInfoBckup::validate()
{
}

web::json::value OpExtendInfoBckup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appConsistencyErrorCodeIsSet_) {
        val[utility::conversions::to_string_t("app_consistency_error_code")] = ModelBase::toJson(appConsistencyErrorCode_);
    }
    if(appConsistencyErrorMessageIsSet_) {
        val[utility::conversions::to_string_t("app_consistency_error_message")] = ModelBase::toJson(appConsistencyErrorMessage_);
    }
    if(appConsistencyStatusIsSet_) {
        val[utility::conversions::to_string_t("app_consistency_status")] = ModelBase::toJson(appConsistencyStatus_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }
    if(incrementalIsSet_) {
        val[utility::conversions::to_string_t("incremental")] = ModelBase::toJson(incremental_);
    }

    return val;
}

bool OpExtendInfoBckup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_consistency_error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_consistency_error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppConsistencyErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_consistency_error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_consistency_error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppConsistencyErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_consistency_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_consistency_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppConsistencyStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incremental"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incremental"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncremental(refVal);
        }
    }
    return ok;
}


std::string OpExtendInfoBckup::getAppConsistencyErrorCode() const
{
    return appConsistencyErrorCode_;
}

void OpExtendInfoBckup::setAppConsistencyErrorCode(const std::string& value)
{
    appConsistencyErrorCode_ = value;
    appConsistencyErrorCodeIsSet_ = true;
}

bool OpExtendInfoBckup::appConsistencyErrorCodeIsSet() const
{
    return appConsistencyErrorCodeIsSet_;
}

void OpExtendInfoBckup::unsetappConsistencyErrorCode()
{
    appConsistencyErrorCodeIsSet_ = false;
}

std::string OpExtendInfoBckup::getAppConsistencyErrorMessage() const
{
    return appConsistencyErrorMessage_;
}

void OpExtendInfoBckup::setAppConsistencyErrorMessage(const std::string& value)
{
    appConsistencyErrorMessage_ = value;
    appConsistencyErrorMessageIsSet_ = true;
}

bool OpExtendInfoBckup::appConsistencyErrorMessageIsSet() const
{
    return appConsistencyErrorMessageIsSet_;
}

void OpExtendInfoBckup::unsetappConsistencyErrorMessage()
{
    appConsistencyErrorMessageIsSet_ = false;
}

std::string OpExtendInfoBckup::getAppConsistencyStatus() const
{
    return appConsistencyStatus_;
}

void OpExtendInfoBckup::setAppConsistencyStatus(const std::string& value)
{
    appConsistencyStatus_ = value;
    appConsistencyStatusIsSet_ = true;
}

bool OpExtendInfoBckup::appConsistencyStatusIsSet() const
{
    return appConsistencyStatusIsSet_;
}

void OpExtendInfoBckup::unsetappConsistencyStatus()
{
    appConsistencyStatusIsSet_ = false;
}

std::string OpExtendInfoBckup::getBackupId() const
{
    return backupId_;
}

void OpExtendInfoBckup::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool OpExtendInfoBckup::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void OpExtendInfoBckup::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string OpExtendInfoBckup::getBackupName() const
{
    return backupName_;
}

void OpExtendInfoBckup::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool OpExtendInfoBckup::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void OpExtendInfoBckup::unsetbackupName()
{
    backupNameIsSet_ = false;
}

std::string OpExtendInfoBckup::getIncremental() const
{
    return incremental_;
}

void OpExtendInfoBckup::setIncremental(const std::string& value)
{
    incremental_ = value;
    incrementalIsSet_ = true;
}

bool OpExtendInfoBckup::incrementalIsSet() const
{
    return incrementalIsSet_;
}

void OpExtendInfoBckup::unsetincremental()
{
    incrementalIsSet_ = false;
}

}
}
}
}
}


