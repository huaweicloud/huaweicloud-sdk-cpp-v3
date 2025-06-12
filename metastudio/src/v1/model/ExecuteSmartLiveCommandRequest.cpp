

#include "huaweicloud/metastudio/v1/model/ExecuteSmartLiveCommandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExecuteSmartLiveCommandRequest::ExecuteSmartLiveCommandRequest()
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
    bodyIsSet_ = false;
}

ExecuteSmartLiveCommandRequest::~ExecuteSmartLiveCommandRequest() = default;

void ExecuteSmartLiveCommandRequest::validate()
{
}

web::json::value ExecuteSmartLiveCommandRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExecuteSmartLiveCommandRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ControlSmartLiveReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteSmartLiveCommandRequest::getRoomId() const
{
    return roomId_;
}

void ExecuteSmartLiveCommandRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ExecuteSmartLiveCommandRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ExecuteSmartLiveCommandRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ExecuteSmartLiveCommandRequest::getJobId() const
{
    return jobId_;
}

void ExecuteSmartLiveCommandRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteSmartLiveCommandRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteSmartLiveCommandRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ExecuteSmartLiveCommandRequest::getAuthorization() const
{
    return authorization_;
}

void ExecuteSmartLiveCommandRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ExecuteSmartLiveCommandRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ExecuteSmartLiveCommandRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ExecuteSmartLiveCommandRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ExecuteSmartLiveCommandRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ExecuteSmartLiveCommandRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ExecuteSmartLiveCommandRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ExecuteSmartLiveCommandRequest::getXProjectId() const
{
    return xProjectId_;
}

void ExecuteSmartLiveCommandRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ExecuteSmartLiveCommandRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ExecuteSmartLiveCommandRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ExecuteSmartLiveCommandRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ExecuteSmartLiveCommandRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ExecuteSmartLiveCommandRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ExecuteSmartLiveCommandRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

ControlSmartLiveReq ExecuteSmartLiveCommandRequest::getBody() const
{
    return body_;
}

void ExecuteSmartLiveCommandRequest::setBody(const ControlSmartLiveReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteSmartLiveCommandRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteSmartLiveCommandRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


