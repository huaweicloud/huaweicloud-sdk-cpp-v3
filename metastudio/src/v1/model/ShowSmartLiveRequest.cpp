

#include "huaweicloud/metastudio/v1/model/ShowSmartLiveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSmartLiveRequest::ShowSmartLiveRequest()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

ShowSmartLiveRequest::~ShowSmartLiveRequest() = default;

void ShowSmartLiveRequest::validate()
{
}

web::json::value ShowSmartLiveRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
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

    return val;
}
bool ShowSmartLiveRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string ShowSmartLiveRequest::getRoomId() const
{
    return roomId_;
}

void ShowSmartLiveRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ShowSmartLiveRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ShowSmartLiveRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ShowSmartLiveRequest::getJobId() const
{
    return jobId_;
}

void ShowSmartLiveRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowSmartLiveRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowSmartLiveRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowSmartLiveRequest::getAuthorization() const
{
    return authorization_;
}

void ShowSmartLiveRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowSmartLiveRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowSmartLiveRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowSmartLiveRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowSmartLiveRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowSmartLiveRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowSmartLiveRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowSmartLiveRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowSmartLiveRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowSmartLiveRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowSmartLiveRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowSmartLiveRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowSmartLiveRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowSmartLiveRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowSmartLiveRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


