

#include "huaweicloud/metastudio/v1/model/StopSmartChatJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StopSmartChatJobRequest::StopSmartChatJobRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

StopSmartChatJobRequest::~StopSmartChatJobRequest() = default;

void StopSmartChatJobRequest::validate()
{
}

web::json::value StopSmartChatJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StopSmartChatJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string StopSmartChatJobRequest::getAuthorization() const
{
    return authorization_;
}

void StopSmartChatJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool StopSmartChatJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void StopSmartChatJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string StopSmartChatJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void StopSmartChatJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool StopSmartChatJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void StopSmartChatJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string StopSmartChatJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void StopSmartChatJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool StopSmartChatJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void StopSmartChatJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string StopSmartChatJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void StopSmartChatJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool StopSmartChatJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void StopSmartChatJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string StopSmartChatJobRequest::getRoomId() const
{
    return roomId_;
}

void StopSmartChatJobRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool StopSmartChatJobRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void StopSmartChatJobRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string StopSmartChatJobRequest::getJobId() const
{
    return jobId_;
}

void StopSmartChatJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopSmartChatJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopSmartChatJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


