

#include "huaweicloud/metastudio/v1/model/LiveEventReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveEventReportRequest::LiveEventReportRequest()
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
    authKey_ = "";
    authKeyIsSet_ = false;
    expiresTime_ = 0L;
    expiresTimeIsSet_ = false;
    xMssAuthKey_ = "";
    xMssAuthKeyIsSet_ = false;
    xMssExpiresTime_ = 0L;
    xMssExpiresTimeIsSet_ = false;
    refreshUrl_ = false;
    refreshUrlIsSet_ = false;
    bodyIsSet_ = false;
}

LiveEventReportRequest::~LiveEventReportRequest() = default;

void LiveEventReportRequest::validate()
{
}

web::json::value LiveEventReportRequest::toJson() const
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
    if(authKeyIsSet_) {
        val[utility::conversions::to_string_t("auth_key")] = ModelBase::toJson(authKey_);
    }
    if(expiresTimeIsSet_) {
        val[utility::conversions::to_string_t("expires_time")] = ModelBase::toJson(expiresTime_);
    }
    if(xMssAuthKeyIsSet_) {
        val[utility::conversions::to_string_t("x-mss-auth-key")] = ModelBase::toJson(xMssAuthKey_);
    }
    if(xMssExpiresTimeIsSet_) {
        val[utility::conversions::to_string_t("x-mss-expires-time")] = ModelBase::toJson(xMssExpiresTime_);
    }
    if(refreshUrlIsSet_) {
        val[utility::conversions::to_string_t("refresh_url")] = ModelBase::toJson(refreshUrl_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool LiveEventReportRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("auth_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiresTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x-mss-auth-key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-mss-auth-key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXMssAuthKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x-mss-expires-time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-mss-expires-time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXMssExpiresTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refresh_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refresh_url"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReportLiveEventReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string LiveEventReportRequest::getRoomId() const
{
    return roomId_;
}

void LiveEventReportRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool LiveEventReportRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void LiveEventReportRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string LiveEventReportRequest::getJobId() const
{
    return jobId_;
}

void LiveEventReportRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool LiveEventReportRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void LiveEventReportRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string LiveEventReportRequest::getAuthorization() const
{
    return authorization_;
}

void LiveEventReportRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool LiveEventReportRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void LiveEventReportRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string LiveEventReportRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void LiveEventReportRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool LiveEventReportRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void LiveEventReportRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string LiveEventReportRequest::getXProjectId() const
{
    return xProjectId_;
}

void LiveEventReportRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool LiveEventReportRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void LiveEventReportRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string LiveEventReportRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void LiveEventReportRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool LiveEventReportRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void LiveEventReportRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string LiveEventReportRequest::getAuthKey() const
{
    return authKey_;
}

void LiveEventReportRequest::setAuthKey(const std::string& value)
{
    authKey_ = value;
    authKeyIsSet_ = true;
}

bool LiveEventReportRequest::authKeyIsSet() const
{
    return authKeyIsSet_;
}

void LiveEventReportRequest::unsetauthKey()
{
    authKeyIsSet_ = false;
}

int64_t LiveEventReportRequest::getExpiresTime() const
{
    return expiresTime_;
}

void LiveEventReportRequest::setExpiresTime(int64_t value)
{
    expiresTime_ = value;
    expiresTimeIsSet_ = true;
}

bool LiveEventReportRequest::expiresTimeIsSet() const
{
    return expiresTimeIsSet_;
}

void LiveEventReportRequest::unsetexpiresTime()
{
    expiresTimeIsSet_ = false;
}

std::string LiveEventReportRequest::getXMssAuthKey() const
{
    return xMssAuthKey_;
}

void LiveEventReportRequest::setXMssAuthKey(const std::string& value)
{
    xMssAuthKey_ = value;
    xMssAuthKeyIsSet_ = true;
}

bool LiveEventReportRequest::xMssAuthKeyIsSet() const
{
    return xMssAuthKeyIsSet_;
}

void LiveEventReportRequest::unsetxMssAuthKey()
{
    xMssAuthKeyIsSet_ = false;
}

int64_t LiveEventReportRequest::getXMssExpiresTime() const
{
    return xMssExpiresTime_;
}

void LiveEventReportRequest::setXMssExpiresTime(int64_t value)
{
    xMssExpiresTime_ = value;
    xMssExpiresTimeIsSet_ = true;
}

bool LiveEventReportRequest::xMssExpiresTimeIsSet() const
{
    return xMssExpiresTimeIsSet_;
}

void LiveEventReportRequest::unsetxMssExpiresTime()
{
    xMssExpiresTimeIsSet_ = false;
}

bool LiveEventReportRequest::isRefreshUrl() const
{
    return refreshUrl_;
}

void LiveEventReportRequest::setRefreshUrl(bool value)
{
    refreshUrl_ = value;
    refreshUrlIsSet_ = true;
}

bool LiveEventReportRequest::refreshUrlIsSet() const
{
    return refreshUrlIsSet_;
}

void LiveEventReportRequest::unsetrefreshUrl()
{
    refreshUrlIsSet_ = false;
}

ReportLiveEventReq LiveEventReportRequest::getBody() const
{
    return body_;
}

void LiveEventReportRequest::setBody(const ReportLiveEventReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool LiveEventReportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void LiveEventReportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


