

#include "huaweicloud/cbr/v1/model/ReplicationRecordsExtraInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ReplicationRecordsExtraInfo::ReplicationRecordsExtraInfo()
{
    progress_ = 0;
    progressIsSet_ = false;
    failCode_ = "";
    failCodeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    autoTrigger_ = false;
    autoTriggerIsSet_ = false;
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
}

ReplicationRecordsExtraInfo::~ReplicationRecordsExtraInfo() = default;

void ReplicationRecordsExtraInfo::validate()
{
}

web::json::value ReplicationRecordsExtraInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(failCodeIsSet_) {
        val[utility::conversions::to_string_t("fail_code")] = ModelBase::toJson(failCode_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(autoTriggerIsSet_) {
        val[utility::conversions::to_string_t("auto_trigger")] = ModelBase::toJson(autoTrigger_);
    }
    if(destinationVaultIdIsSet_) {
        val[utility::conversions::to_string_t("destination_vault_id")] = ModelBase::toJson(destinationVaultId_);
    }

    return val;
}
bool ReplicationRecordsExtraInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_trigger"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoTrigger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationVaultId(refVal);
        }
    }
    return ok;
}


int32_t ReplicationRecordsExtraInfo::getProgress() const
{
    return progress_;
}

void ReplicationRecordsExtraInfo::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ReplicationRecordsExtraInfo::progressIsSet() const
{
    return progressIsSet_;
}

void ReplicationRecordsExtraInfo::unsetprogress()
{
    progressIsSet_ = false;
}

std::string ReplicationRecordsExtraInfo::getFailCode() const
{
    return failCode_;
}

void ReplicationRecordsExtraInfo::setFailCode(const std::string& value)
{
    failCode_ = value;
    failCodeIsSet_ = true;
}

bool ReplicationRecordsExtraInfo::failCodeIsSet() const
{
    return failCodeIsSet_;
}

void ReplicationRecordsExtraInfo::unsetfailCode()
{
    failCodeIsSet_ = false;
}

std::string ReplicationRecordsExtraInfo::getFailReason() const
{
    return failReason_;
}

void ReplicationRecordsExtraInfo::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool ReplicationRecordsExtraInfo::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void ReplicationRecordsExtraInfo::unsetfailReason()
{
    failReasonIsSet_ = false;
}

bool ReplicationRecordsExtraInfo::isAutoTrigger() const
{
    return autoTrigger_;
}

void ReplicationRecordsExtraInfo::setAutoTrigger(bool value)
{
    autoTrigger_ = value;
    autoTriggerIsSet_ = true;
}

bool ReplicationRecordsExtraInfo::autoTriggerIsSet() const
{
    return autoTriggerIsSet_;
}

void ReplicationRecordsExtraInfo::unsetautoTrigger()
{
    autoTriggerIsSet_ = false;
}

std::string ReplicationRecordsExtraInfo::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void ReplicationRecordsExtraInfo::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool ReplicationRecordsExtraInfo::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void ReplicationRecordsExtraInfo::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

}
}
}
}
}


