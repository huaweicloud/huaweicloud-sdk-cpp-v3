

#include "huaweicloud/drs/v3/model/ModifyTuningParamsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ModifyTuningParamsReq::ModifyTuningParamsReq()
{
    fullSyncIsSet_ = false;
    increCaptureIsSet_ = false;
    increApplyIsSet_ = false;
    increRelayIsSet_ = false;
    recovery_ = false;
    recoveryIsSet_ = false;
}

ModifyTuningParamsReq::~ModifyTuningParamsReq() = default;

void ModifyTuningParamsReq::validate()
{
}

web::json::value ModifyTuningParamsReq::toJson() const
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
bool ModifyTuningParamsReq::fromJson(const web::json::value& val)
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


std::map<std::string, std::string>& ModifyTuningParamsReq::getFullSync()
{
    return fullSync_;
}

void ModifyTuningParamsReq::setFullSync(const std::map<std::string, std::string>& value)
{
    fullSync_ = value;
    fullSyncIsSet_ = true;
}

bool ModifyTuningParamsReq::fullSyncIsSet() const
{
    return fullSyncIsSet_;
}

void ModifyTuningParamsReq::unsetfullSync()
{
    fullSyncIsSet_ = false;
}

std::map<std::string, std::string>& ModifyTuningParamsReq::getIncreCapture()
{
    return increCapture_;
}

void ModifyTuningParamsReq::setIncreCapture(const std::map<std::string, std::string>& value)
{
    increCapture_ = value;
    increCaptureIsSet_ = true;
}

bool ModifyTuningParamsReq::increCaptureIsSet() const
{
    return increCaptureIsSet_;
}

void ModifyTuningParamsReq::unsetincreCapture()
{
    increCaptureIsSet_ = false;
}

std::map<std::string, std::string>& ModifyTuningParamsReq::getIncreApply()
{
    return increApply_;
}

void ModifyTuningParamsReq::setIncreApply(const std::map<std::string, std::string>& value)
{
    increApply_ = value;
    increApplyIsSet_ = true;
}

bool ModifyTuningParamsReq::increApplyIsSet() const
{
    return increApplyIsSet_;
}

void ModifyTuningParamsReq::unsetincreApply()
{
    increApplyIsSet_ = false;
}

std::map<std::string, std::string>& ModifyTuningParamsReq::getIncreRelay()
{
    return increRelay_;
}

void ModifyTuningParamsReq::setIncreRelay(const std::map<std::string, std::string>& value)
{
    increRelay_ = value;
    increRelayIsSet_ = true;
}

bool ModifyTuningParamsReq::increRelayIsSet() const
{
    return increRelayIsSet_;
}

void ModifyTuningParamsReq::unsetincreRelay()
{
    increRelayIsSet_ = false;
}

bool ModifyTuningParamsReq::isRecovery() const
{
    return recovery_;
}

void ModifyTuningParamsReq::setRecovery(bool value)
{
    recovery_ = value;
    recoveryIsSet_ = true;
}

bool ModifyTuningParamsReq::recoveryIsSet() const
{
    return recoveryIsSet_;
}

void ModifyTuningParamsReq::unsetrecovery()
{
    recoveryIsSet_ = false;
}

}
}
}
}
}


