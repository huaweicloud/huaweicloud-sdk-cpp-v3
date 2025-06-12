

#include "huaweicloud/metastudio/v1/model/ShowActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowActiveCodeRequest::ShowActiveCodeRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    activeCodeId_ = "";
    activeCodeIdIsSet_ = false;
}

ShowActiveCodeRequest::~ShowActiveCodeRequest() = default;

void ShowActiveCodeRequest::validate()
{
}

web::json::value ShowActiveCodeRequest::toJson() const
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
    if(activeCodeIdIsSet_) {
        val[utility::conversions::to_string_t("active_code_id")] = ModelBase::toJson(activeCodeId_);
    }

    return val;
}
bool ShowActiveCodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("active_code_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_code_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCodeId(refVal);
        }
    }
    return ok;
}


std::string ShowActiveCodeRequest::getAuthorization() const
{
    return authorization_;
}

void ShowActiveCodeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowActiveCodeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowActiveCodeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowActiveCodeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowActiveCodeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowActiveCodeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowActiveCodeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowActiveCodeRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowActiveCodeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowActiveCodeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowActiveCodeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowActiveCodeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowActiveCodeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowActiveCodeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowActiveCodeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowActiveCodeRequest::getActiveCodeId() const
{
    return activeCodeId_;
}

void ShowActiveCodeRequest::setActiveCodeId(const std::string& value)
{
    activeCodeId_ = value;
    activeCodeIdIsSet_ = true;
}

bool ShowActiveCodeRequest::activeCodeIdIsSet() const
{
    return activeCodeIdIsSet_;
}

void ShowActiveCodeRequest::unsetactiveCodeId()
{
    activeCodeIdIsSet_ = false;
}

}
}
}
}
}


