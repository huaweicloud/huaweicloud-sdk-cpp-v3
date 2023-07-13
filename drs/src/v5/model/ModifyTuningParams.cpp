

#include "huaweicloud/drs/v5/model/ModifyTuningParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyTuningParams::ModifyTuningParams()
{
    fullSyncIsSet_ = false;
    increCaptureIsSet_ = false;
    increApplyIsSet_ = false;
    increRelayIsSet_ = false;
    recovery_ = false;
    recoveryIsSet_ = false;
}

ModifyTuningParams::~ModifyTuningParams() = default;

void ModifyTuningParams::validate()
{
}

web::json::value ModifyTuningParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fullSyncIsSet_) {
        val[utility::conversions::to_string_t("full_sync")] = ModelBase::toJson(fullSync_);
    }
    if(increCaptureIsSet_) {
        val[utility::conversions::to_string_t("incre_capture")] = ModelBase::toJson(increCapture_);
    }
    if(increApplyIsSet_) {
        val[utility::conversions::to_string_t("incre_apply")] = ModelBase::toJson(increApply_);
    }
    if(increRelayIsSet_) {
        val[utility::conversions::to_string_t("incre_relay")] = ModelBase::toJson(increRelay_);
    }
    if(recoveryIsSet_) {
        val[utility::conversions::to_string_t("recovery")] = ModelBase::toJson(recovery_);
    }

    return val;
}

bool ModifyTuningParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("full_sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_sync"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullSync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_capture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_capture"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreCapture(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_apply"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_apply"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreApply(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_relay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_relay"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreRelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recovery"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecovery(refVal);
        }
    }
    return ok;
}

std::map<std::string, std::string>& ModifyTuningParams::getFullSync()
{
    return fullSync_;
}

void ModifyTuningParams::setFullSync(const std::map<std::string, std::string>& value)
{
    fullSync_ = value;
    fullSyncIsSet_ = true;
}

bool ModifyTuningParams::fullSyncIsSet() const
{
    return fullSyncIsSet_;
}

void ModifyTuningParams::unsetfullSync()
{
    fullSyncIsSet_ = false;
}

std::map<std::string, std::string>& ModifyTuningParams::getIncreCapture()
{
    return increCapture_;
}

void ModifyTuningParams::setIncreCapture(const std::map<std::string, std::string>& value)
{
    increCapture_ = value;
    increCaptureIsSet_ = true;
}

bool ModifyTuningParams::increCaptureIsSet() const
{
    return increCaptureIsSet_;
}

void ModifyTuningParams::unsetincreCapture()
{
    increCaptureIsSet_ = false;
}

std::map<std::string, std::string>& ModifyTuningParams::getIncreApply()
{
    return increApply_;
}

void ModifyTuningParams::setIncreApply(const std::map<std::string, std::string>& value)
{
    increApply_ = value;
    increApplyIsSet_ = true;
}

bool ModifyTuningParams::increApplyIsSet() const
{
    return increApplyIsSet_;
}

void ModifyTuningParams::unsetincreApply()
{
    increApplyIsSet_ = false;
}

std::map<std::string, std::string>& ModifyTuningParams::getIncreRelay()
{
    return increRelay_;
}

void ModifyTuningParams::setIncreRelay(const std::map<std::string, std::string>& value)
{
    increRelay_ = value;
    increRelayIsSet_ = true;
}

bool ModifyTuningParams::increRelayIsSet() const
{
    return increRelayIsSet_;
}

void ModifyTuningParams::unsetincreRelay()
{
    increRelayIsSet_ = false;
}

bool ModifyTuningParams::isRecovery() const
{
    return recovery_;
}

void ModifyTuningParams::setRecovery(bool value)
{
    recovery_ = value;
    recoveryIsSet_ = true;
}

bool ModifyTuningParams::recoveryIsSet() const
{
    return recoveryIsSet_;
}

void ModifyTuningParams::unsetrecovery()
{
    recoveryIsSet_ = false;
}

}
}
}
}
}


