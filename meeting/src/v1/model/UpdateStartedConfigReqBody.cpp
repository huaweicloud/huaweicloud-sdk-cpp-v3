

#include "huaweicloud/meeting/v1/model/UpdateStartedConfigReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateStartedConfigReqBody::UpdateStartedConfigReqBody()
{
    lockSharing_ = 0;
    lockSharingIsSet_ = false;
    callInRestriction_ = 0;
    callInRestrictionIsSet_ = false;
    allowUnmuteByOneself_ = 0;
    allowUnmuteByOneselfIsSet_ = false;
    chatPermission_ = 0;
    chatPermissionIsSet_ = false;
    audienceCallInRestriction_ = 0;
    audienceCallInRestrictionIsSet_ = false;
    clientRecMode_ = 0;
    clientRecModeIsSet_ = false;
    allowOpenCamera_ = 0;
    allowOpenCameraIsSet_ = false;
    allowRename_ = 0;
    allowRenameIsSet_ = false;
    isLock_ = 0;
    isLockIsSet_ = false;
    freeShare_ = 0;
    freeShareIsSet_ = false;
}

UpdateStartedConfigReqBody::~UpdateStartedConfigReqBody() = default;

void UpdateStartedConfigReqBody::validate()
{
}

web::json::value UpdateStartedConfigReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lockSharingIsSet_) {
        val[utility::conversions::to_string_t("lockSharing")] = ModelBase::toJson(lockSharing_);
    }
    if(callInRestrictionIsSet_) {
        val[utility::conversions::to_string_t("callInRestriction")] = ModelBase::toJson(callInRestriction_);
    }
    if(allowUnmuteByOneselfIsSet_) {
        val[utility::conversions::to_string_t("allowUnmuteByOneself")] = ModelBase::toJson(allowUnmuteByOneself_);
    }
    if(chatPermissionIsSet_) {
        val[utility::conversions::to_string_t("chatPermission")] = ModelBase::toJson(chatPermission_);
    }
    if(audienceCallInRestrictionIsSet_) {
        val[utility::conversions::to_string_t("audienceCallInRestriction")] = ModelBase::toJson(audienceCallInRestriction_);
    }
    if(clientRecModeIsSet_) {
        val[utility::conversions::to_string_t("clientRecMode")] = ModelBase::toJson(clientRecMode_);
    }
    if(allowOpenCameraIsSet_) {
        val[utility::conversions::to_string_t("allowOpenCamera")] = ModelBase::toJson(allowOpenCamera_);
    }
    if(allowRenameIsSet_) {
        val[utility::conversions::to_string_t("allowRename")] = ModelBase::toJson(allowRename_);
    }
    if(isLockIsSet_) {
        val[utility::conversions::to_string_t("isLock")] = ModelBase::toJson(isLock_);
    }
    if(freeShareIsSet_) {
        val[utility::conversions::to_string_t("freeShare")] = ModelBase::toJson(freeShare_);
    }

    return val;
}
bool UpdateStartedConfigReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lockSharing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lockSharing"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockSharing(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callInRestriction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callInRestriction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallInRestriction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowUnmuteByOneself"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowUnmuteByOneself"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowUnmuteByOneself(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chatPermission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chatPermission"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audienceCallInRestriction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audienceCallInRestriction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudienceCallInRestriction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clientRecMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientRecMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientRecMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowOpenCamera"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowOpenCamera"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowOpenCamera(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowRename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowRename"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowRename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isLock"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isLock"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLock(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freeShare"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freeShare"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeShare(refVal);
        }
    }
    return ok;
}


int32_t UpdateStartedConfigReqBody::getLockSharing() const
{
    return lockSharing_;
}

void UpdateStartedConfigReqBody::setLockSharing(int32_t value)
{
    lockSharing_ = value;
    lockSharingIsSet_ = true;
}

bool UpdateStartedConfigReqBody::lockSharingIsSet() const
{
    return lockSharingIsSet_;
}

void UpdateStartedConfigReqBody::unsetlockSharing()
{
    lockSharingIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getCallInRestriction() const
{
    return callInRestriction_;
}

void UpdateStartedConfigReqBody::setCallInRestriction(int32_t value)
{
    callInRestriction_ = value;
    callInRestrictionIsSet_ = true;
}

bool UpdateStartedConfigReqBody::callInRestrictionIsSet() const
{
    return callInRestrictionIsSet_;
}

void UpdateStartedConfigReqBody::unsetcallInRestriction()
{
    callInRestrictionIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getAllowUnmuteByOneself() const
{
    return allowUnmuteByOneself_;
}

void UpdateStartedConfigReqBody::setAllowUnmuteByOneself(int32_t value)
{
    allowUnmuteByOneself_ = value;
    allowUnmuteByOneselfIsSet_ = true;
}

bool UpdateStartedConfigReqBody::allowUnmuteByOneselfIsSet() const
{
    return allowUnmuteByOneselfIsSet_;
}

void UpdateStartedConfigReqBody::unsetallowUnmuteByOneself()
{
    allowUnmuteByOneselfIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getChatPermission() const
{
    return chatPermission_;
}

void UpdateStartedConfigReqBody::setChatPermission(int32_t value)
{
    chatPermission_ = value;
    chatPermissionIsSet_ = true;
}

bool UpdateStartedConfigReqBody::chatPermissionIsSet() const
{
    return chatPermissionIsSet_;
}

void UpdateStartedConfigReqBody::unsetchatPermission()
{
    chatPermissionIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getAudienceCallInRestriction() const
{
    return audienceCallInRestriction_;
}

void UpdateStartedConfigReqBody::setAudienceCallInRestriction(int32_t value)
{
    audienceCallInRestriction_ = value;
    audienceCallInRestrictionIsSet_ = true;
}

bool UpdateStartedConfigReqBody::audienceCallInRestrictionIsSet() const
{
    return audienceCallInRestrictionIsSet_;
}

void UpdateStartedConfigReqBody::unsetaudienceCallInRestriction()
{
    audienceCallInRestrictionIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getClientRecMode() const
{
    return clientRecMode_;
}

void UpdateStartedConfigReqBody::setClientRecMode(int32_t value)
{
    clientRecMode_ = value;
    clientRecModeIsSet_ = true;
}

bool UpdateStartedConfigReqBody::clientRecModeIsSet() const
{
    return clientRecModeIsSet_;
}

void UpdateStartedConfigReqBody::unsetclientRecMode()
{
    clientRecModeIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getAllowOpenCamera() const
{
    return allowOpenCamera_;
}

void UpdateStartedConfigReqBody::setAllowOpenCamera(int32_t value)
{
    allowOpenCamera_ = value;
    allowOpenCameraIsSet_ = true;
}

bool UpdateStartedConfigReqBody::allowOpenCameraIsSet() const
{
    return allowOpenCameraIsSet_;
}

void UpdateStartedConfigReqBody::unsetallowOpenCamera()
{
    allowOpenCameraIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getAllowRename() const
{
    return allowRename_;
}

void UpdateStartedConfigReqBody::setAllowRename(int32_t value)
{
    allowRename_ = value;
    allowRenameIsSet_ = true;
}

bool UpdateStartedConfigReqBody::allowRenameIsSet() const
{
    return allowRenameIsSet_;
}

void UpdateStartedConfigReqBody::unsetallowRename()
{
    allowRenameIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getIsLock() const
{
    return isLock_;
}

void UpdateStartedConfigReqBody::setIsLock(int32_t value)
{
    isLock_ = value;
    isLockIsSet_ = true;
}

bool UpdateStartedConfigReqBody::isLockIsSet() const
{
    return isLockIsSet_;
}

void UpdateStartedConfigReqBody::unsetisLock()
{
    isLockIsSet_ = false;
}

int32_t UpdateStartedConfigReqBody::getFreeShare() const
{
    return freeShare_;
}

void UpdateStartedConfigReqBody::setFreeShare(int32_t value)
{
    freeShare_ = value;
    freeShareIsSet_ = true;
}

bool UpdateStartedConfigReqBody::freeShareIsSet() const
{
    return freeShareIsSet_;
}

void UpdateStartedConfigReqBody::unsetfreeShare()
{
    freeShareIsSet_ = false;
}

}
}
}
}
}


