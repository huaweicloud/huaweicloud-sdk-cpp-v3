

#include "huaweicloud/cce/v3/model/ClusterStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterStatus::ClusterStatus()
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

ClusterStatus::~ClusterStatus() = default;

void ClusterStatus::validate()
{
}

web::json::value ClusterStatus::toJson() const
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
bool ClusterStatus::fromJson(const web::json::value& val)
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
            std::vector<ClusterEndpoints> refVal;
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


std::string ClusterStatus::getPhase() const
{
    return phase_;
}

void ClusterStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool ClusterStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void ClusterStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string ClusterStatus::getJobID() const
{
    return jobID_;
}

void ClusterStatus::setJobID(const std::string& value)
{
    jobID_ = value;
    jobIDIsSet_ = true;
}

bool ClusterStatus::jobIDIsSet() const
{
    return jobIDIsSet_;
}

void ClusterStatus::unsetjobID()
{
    jobIDIsSet_ = false;
}

std::string ClusterStatus::getReason() const
{
    return reason_;
}

void ClusterStatus::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ClusterStatus::reasonIsSet() const
{
    return reasonIsSet_;
}

void ClusterStatus::unsetreason()
{
    reasonIsSet_ = false;
}

std::string ClusterStatus::getMessage() const
{
    return message_;
}

void ClusterStatus::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ClusterStatus::messageIsSet() const
{
    return messageIsSet_;
}

void ClusterStatus::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<ClusterEndpoints>& ClusterStatus::getEndpoints()
{
    return endpoints_;
}

void ClusterStatus::setEndpoints(const std::vector<ClusterEndpoints>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ClusterStatus::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ClusterStatus::unsetendpoints()
{
    endpointsIsSet_ = false;
}

bool ClusterStatus::isIsLocked() const
{
    return isLocked_;
}

void ClusterStatus::setIsLocked(bool value)
{
    isLocked_ = value;
    isLockedIsSet_ = true;
}

bool ClusterStatus::isLockedIsSet() const
{
    return isLockedIsSet_;
}

void ClusterStatus::unsetisLocked()
{
    isLockedIsSet_ = false;
}

std::string ClusterStatus::getLockScene() const
{
    return lockScene_;
}

void ClusterStatus::setLockScene(const std::string& value)
{
    lockScene_ = value;
    lockSceneIsSet_ = true;
}

bool ClusterStatus::lockSceneIsSet() const
{
    return lockSceneIsSet_;
}

void ClusterStatus::unsetlockScene()
{
    lockSceneIsSet_ = false;
}

std::string ClusterStatus::getLockSource() const
{
    return lockSource_;
}

void ClusterStatus::setLockSource(const std::string& value)
{
    lockSource_ = value;
    lockSourceIsSet_ = true;
}

bool ClusterStatus::lockSourceIsSet() const
{
    return lockSourceIsSet_;
}

void ClusterStatus::unsetlockSource()
{
    lockSourceIsSet_ = false;
}

std::string ClusterStatus::getLockSourceId() const
{
    return lockSourceId_;
}

void ClusterStatus::setLockSourceId(const std::string& value)
{
    lockSourceId_ = value;
    lockSourceIdIsSet_ = true;
}

bool ClusterStatus::lockSourceIdIsSet() const
{
    return lockSourceIdIsSet_;
}

void ClusterStatus::unsetlockSourceId()
{
    lockSourceIdIsSet_ = false;
}

Object ClusterStatus::getDeleteOption() const
{
    return deleteOption_;
}

void ClusterStatus::setDeleteOption(const Object& value)
{
    deleteOption_ = value;
    deleteOptionIsSet_ = true;
}

bool ClusterStatus::deleteOptionIsSet() const
{
    return deleteOptionIsSet_;
}

void ClusterStatus::unsetdeleteOption()
{
    deleteOptionIsSet_ = false;
}

Object ClusterStatus::getDeleteStatus() const
{
    return deleteStatus_;
}

void ClusterStatus::setDeleteStatus(const Object& value)
{
    deleteStatus_ = value;
    deleteStatusIsSet_ = true;
}

bool ClusterStatus::deleteStatusIsSet() const
{
    return deleteStatusIsSet_;
}

void ClusterStatus::unsetdeleteStatus()
{
    deleteStatusIsSet_ = false;
}

}
}
}
}
}


