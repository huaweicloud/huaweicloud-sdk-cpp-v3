

#include "huaweicloud/metastudio/v1/model/DeleteDialogReportConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteDialogReportConfigRequest::DeleteDialogReportConfigRequest()
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

DeleteDialogReportConfigRequest::~DeleteDialogReportConfigRequest() = default;

void DeleteDialogReportConfigRequest::validate()
{
}

web::json::value DeleteDialogReportConfigRequest::toJson() const
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
bool DeleteDialogReportConfigRequest::fromJson(const web::json::value& val)
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


std::string DeleteDialogReportConfigRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteDialogReportConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteDialogReportConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteDialogReportConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteDialogReportConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteDialogReportConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteDialogReportConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteDialogReportConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteDialogReportConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteDialogReportConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteDialogReportConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteDialogReportConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteDialogReportConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteDialogReportConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteDialogReportConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteDialogReportConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


