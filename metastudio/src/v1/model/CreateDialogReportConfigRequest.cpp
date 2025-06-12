

#include "huaweicloud/metastudio/v1/model/CreateDialogReportConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDialogReportConfigRequest::CreateDialogReportConfigRequest()
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

CreateDialogReportConfigRequest::~CreateDialogReportConfigRequest() = default;

void CreateDialogReportConfigRequest::validate()
{
}

web::json::value CreateDialogReportConfigRequest::toJson() const
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
bool CreateDialogReportConfigRequest::fromJson(const web::json::value& val)
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
            CreateDialogReportConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDialogReportConfigRequest::getAuthorization() const
{
    return authorization_;
}

void CreateDialogReportConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateDialogReportConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateDialogReportConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateDialogReportConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateDialogReportConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateDialogReportConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateDialogReportConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateDialogReportConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateDialogReportConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateDialogReportConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateDialogReportConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateDialogReportConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateDialogReportConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateDialogReportConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateDialogReportConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateDialogReportConfigReq CreateDialogReportConfigRequest::getBody() const
{
    return body_;
}

void CreateDialogReportConfigRequest::setBody(const CreateDialogReportConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDialogReportConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDialogReportConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


