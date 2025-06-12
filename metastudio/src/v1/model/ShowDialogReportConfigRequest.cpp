

#include "huaweicloud/metastudio/v1/model/ShowDialogReportConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowDialogReportConfigRequest::ShowDialogReportConfigRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

ShowDialogReportConfigRequest::~ShowDialogReportConfigRequest() = default;

void ShowDialogReportConfigRequest::validate()
{
}

web::json::value ShowDialogReportConfigRequest::toJson() const
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

    return val;
}
bool ShowDialogReportConfigRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDialogReportConfigRequest::getAuthorization() const
{
    return authorization_;
}

void ShowDialogReportConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowDialogReportConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowDialogReportConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowDialogReportConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowDialogReportConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowDialogReportConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowDialogReportConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowDialogReportConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowDialogReportConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowDialogReportConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowDialogReportConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowDialogReportConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowDialogReportConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowDialogReportConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowDialogReportConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


