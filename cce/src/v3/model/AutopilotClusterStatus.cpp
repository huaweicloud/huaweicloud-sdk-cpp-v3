

#include "huaweicloud/cce/v3/model/AutopilotClusterStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterStatus::AutopilotClusterStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    jobID_ = "";
    jobIDIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    endpointsIsSet_ = false;
    isLocked_ = false;
    isLockedIsSet_ = false;
    lockScene_ = "";
    lockSceneIsSet_ = false;
    lockSource_ = "";
    lockSourceIsSet_ = false;
    lockSourceId_ = "";
    lockSourceIdIsSet_ = false;
    deleteOptionIsSet_ = false;
    deleteStatusIsSet_ = false;
}

AutopilotClusterStatus::~AutopilotClusterStatus() = default;

void AutopilotClusterStatus::validate()
{
}

web::json::value AutopilotClusterStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(jobIDIsSet_) {
        val[utility::conversions::to_string_t("jobID")] = ModelBase::toJson(jobID_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(isLockedIsSet_) {
        val[utility::conversions::to_string_t("isLocked")] = ModelBase::toJson(isLocked_);
    }
    if(lockSceneIsSet_) {
        val[utility::conversions::to_string_t("lockScene")] = ModelBase::toJson(lockScene_);
    }
    if(lockSourceIsSet_) {
        val[utility::conversions::to_string_t("lockSource")] = ModelBase::toJson(lockSource_);
    }
    if(lockSourceIdIsSet_) {
        val[utility::conversions::to_string_t("lockSourceId")] = ModelBase::toJson(lockSourceId_);
    }
    if(deleteOptionIsSet_) {
        val[utility::conversions::to_string_t("deleteOption")] = ModelBase::toJson(deleteOption_);
    }
    if(deleteStatusIsSet_) {
        val[utility::conversions::to_string_t("deleteStatus")] = ModelBase::toJson(deleteStatus_);
    }

    return val;
}
bool AutopilotClusterStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<AutopilotClusterEndpoints> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isLocked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isLocked"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLocked(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lockScene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lockScene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lockSource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lockSource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lockSourceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lockSourceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleteOption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleteOption"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleteStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleteStatus"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteStatus(refVal);
        }
    }
    return ok;
}


std::string AutopilotClusterStatus::getPhase() const
{
    return phase_;
}

void AutopilotClusterStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool AutopilotClusterStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void AutopilotClusterStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string AutopilotClusterStatus::getJobID() const
{
    return jobID_;
}

void AutopilotClusterStatus::setJobID(const std::string& value)
{
    jobID_ = value;
    jobIDIsSet_ = true;
}

bool AutopilotClusterStatus::jobIDIsSet() const
{
    return jobIDIsSet_;
}

void AutopilotClusterStatus::unsetjobID()
{
    jobIDIsSet_ = false;
}

std::string AutopilotClusterStatus::getReason() const
{
    return reason_;
}

void AutopilotClusterStatus::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool AutopilotClusterStatus::reasonIsSet() const
{
    return reasonIsSet_;
}

void AutopilotClusterStatus::unsetreason()
{
    reasonIsSet_ = false;
}

std::string AutopilotClusterStatus::getMessage() const
{
    return message_;
}

void AutopilotClusterStatus::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AutopilotClusterStatus::messageIsSet() const
{
    return messageIsSet_;
}

void AutopilotClusterStatus::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<AutopilotClusterEndpoints>& AutopilotClusterStatus::getEndpoints()
{
    return endpoints_;
}

void AutopilotClusterStatus::setEndpoints(const std::vector<AutopilotClusterEndpoints>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool AutopilotClusterStatus::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void AutopilotClusterStatus::unsetendpoints()
{
    endpointsIsSet_ = false;
}

bool AutopilotClusterStatus::isIsLocked() const
{
    return isLocked_;
}

void AutopilotClusterStatus::setIsLocked(bool value)
{
    isLocked_ = value;
    isLockedIsSet_ = true;
}

bool AutopilotClusterStatus::isLockedIsSet() const
{
    return isLockedIsSet_;
}

void AutopilotClusterStatus::unsetisLocked()
{
    isLockedIsSet_ = false;
}

std::string AutopilotClusterStatus::getLockScene() const
{
    return lockScene_;
}

void AutopilotClusterStatus::setLockScene(const std::string& value)
{
    lockScene_ = value;
    lockSceneIsSet_ = true;
}

bool AutopilotClusterStatus::lockSceneIsSet() const
{
    return lockSceneIsSet_;
}

void AutopilotClusterStatus::unsetlockScene()
{
    lockSceneIsSet_ = false;
}

std::string AutopilotClusterStatus::getLockSource() const
{
    return lockSource_;
}

void AutopilotClusterStatus::setLockSource(const std::string& value)
{
    lockSource_ = value;
    lockSourceIsSet_ = true;
}

bool AutopilotClusterStatus::lockSourceIsSet() const
{
    return lockSourceIsSet_;
}

void AutopilotClusterStatus::unsetlockSource()
{
    lockSourceIsSet_ = false;
}

std::string AutopilotClusterStatus::getLockSourceId() const
{
    return lockSourceId_;
}

void AutopilotClusterStatus::setLockSourceId(const std::string& value)
{
    lockSourceId_ = value;
    lockSourceIdIsSet_ = true;
}

bool AutopilotClusterStatus::lockSourceIdIsSet() const
{
    return lockSourceIdIsSet_;
}

void AutopilotClusterStatus::unsetlockSourceId()
{
    lockSourceIdIsSet_ = false;
}

Object AutopilotClusterStatus::getDeleteOption() const
{
    return deleteOption_;
}

void AutopilotClusterStatus::setDeleteOption(const Object& value)
{
    deleteOption_ = value;
    deleteOptionIsSet_ = true;
}

bool AutopilotClusterStatus::deleteOptionIsSet() const
{
    return deleteOptionIsSet_;
}

void AutopilotClusterStatus::unsetdeleteOption()
{
    deleteOptionIsSet_ = false;
}

Object AutopilotClusterStatus::getDeleteStatus() const
{
    return deleteStatus_;
}

void AutopilotClusterStatus::setDeleteStatus(const Object& value)
{
    deleteStatus_ = value;
    deleteStatusIsSet_ = true;
}

bool AutopilotClusterStatus::deleteStatusIsSet() const
{
    return deleteStatusIsSet_;
}

void AutopilotClusterStatus::unsetdeleteStatus()
{
    deleteStatusIsSet_ = false;
}

}
}
}
}
}


