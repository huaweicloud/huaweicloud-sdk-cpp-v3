

#include "huaweicloud/metastudio/v1/model/DeleteUserQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteUserQuotasRequest::DeleteUserQuotasRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

DeleteUserQuotasRequest::~DeleteUserQuotasRequest() = default;

void DeleteUserQuotasRequest::validate()
{
}

web::json::value DeleteUserQuotasRequest::toJson() const
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
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool DeleteUserQuotasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string DeleteUserQuotasRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteUserQuotasRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteUserQuotasRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteUserQuotasRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteUserQuotasRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteUserQuotasRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteUserQuotasRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteUserQuotasRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteUserQuotasRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteUserQuotasRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteUserQuotasRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteUserQuotasRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteUserQuotasRequest::getUserId() const
{
    return userId_;
}

void DeleteUserQuotasRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool DeleteUserQuotasRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void DeleteUserQuotasRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


