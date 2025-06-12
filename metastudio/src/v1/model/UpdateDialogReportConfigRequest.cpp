

#include "huaweicloud/metastudio/v1/model/UpdateDialogReportConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDialogReportConfigRequest::UpdateDialogReportConfigRequest()
{
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

UpdateDialogReportConfigRequest::~UpdateDialogReportConfigRequest() = default;

void UpdateDialogReportConfigRequest::validate()
{
}

web::json::value UpdateDialogReportConfigRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDialogReportConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDialogReportConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDialogReportConfigRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateDialogReportConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateDialogReportConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateDialogReportConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateDialogReportConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateDialogReportConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateDialogReportConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateDialogReportConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateDialogReportConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateDialogReportConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateDialogReportConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateDialogReportConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateDialogReportConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateDialogReportConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateDialogReportConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateDialogReportConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

UpdateDialogReportConfigReq UpdateDialogReportConfigRequest::getBody() const
{
    return body_;
}

void UpdateDialogReportConfigRequest::setBody(const UpdateDialogReportConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDialogReportConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDialogReportConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


