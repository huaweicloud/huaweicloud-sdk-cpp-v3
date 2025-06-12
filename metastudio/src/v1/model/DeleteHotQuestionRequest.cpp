

#include "huaweicloud/metastudio/v1/model/DeleteHotQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteHotQuestionRequest::DeleteHotQuestionRequest()
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

DeleteHotQuestionRequest::~DeleteHotQuestionRequest() = default;

void DeleteHotQuestionRequest::validate()
{
}

web::json::value DeleteHotQuestionRequest::toJson() const
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
bool DeleteHotQuestionRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteHotQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteHotQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteHotQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteHotQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteHotQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteHotQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteHotQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteHotQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteHotQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteHotQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteHotQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteHotQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteHotQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteHotQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteHotQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteHotQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::vector<std::string>& DeleteHotQuestionRequest::getBody()
{
    return body_;
}

void DeleteHotQuestionRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteHotQuestionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteHotQuestionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


