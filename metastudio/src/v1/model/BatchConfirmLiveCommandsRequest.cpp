

#include "huaweicloud/metastudio/v1/model/BatchConfirmLiveCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BatchConfirmLiveCommandsRequest::BatchConfirmLiveCommandsRequest()
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

BatchConfirmLiveCommandsRequest::~BatchConfirmLiveCommandsRequest() = default;

void BatchConfirmLiveCommandsRequest::validate()
{
}

web::json::value BatchConfirmLiveCommandsRequest::toJson() const
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
bool BatchConfirmLiveCommandsRequest::fromJson(const web::json::value& val)
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
            BatchConfirmLiveCommandsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchConfirmLiveCommandsRequest::getRoomId() const
{
    return roomId_;
}

void BatchConfirmLiveCommandsRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool BatchConfirmLiveCommandsRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void BatchConfirmLiveCommandsRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string BatchConfirmLiveCommandsRequest::getJobId() const
{
    return jobId_;
}

void BatchConfirmLiveCommandsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchConfirmLiveCommandsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchConfirmLiveCommandsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string BatchConfirmLiveCommandsRequest::getAuthorization() const
{
    return authorization_;
}

void BatchConfirmLiveCommandsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool BatchConfirmLiveCommandsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void BatchConfirmLiveCommandsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string BatchConfirmLiveCommandsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void BatchConfirmLiveCommandsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool BatchConfirmLiveCommandsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void BatchConfirmLiveCommandsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string BatchConfirmLiveCommandsRequest::getXProjectId() const
{
    return xProjectId_;
}

void BatchConfirmLiveCommandsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool BatchConfirmLiveCommandsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void BatchConfirmLiveCommandsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string BatchConfirmLiveCommandsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void BatchConfirmLiveCommandsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool BatchConfirmLiveCommandsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void BatchConfirmLiveCommandsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

BatchConfirmLiveCommandsReq BatchConfirmLiveCommandsRequest::getBody() const
{
    return body_;
}

void BatchConfirmLiveCommandsRequest::setBody(const BatchConfirmLiveCommandsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchConfirmLiveCommandsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchConfirmLiveCommandsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


