

#include "huaweicloud/metastudio/v1/model/Create2dModelTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Create2dModelTrainingJobRequest::Create2dModelTrainingJobRequest()
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

Create2dModelTrainingJobRequest::~Create2dModelTrainingJobRequest() = default;

void Create2dModelTrainingJobRequest::validate()
{
}

web::json::value Create2dModelTrainingJobRequest::toJson() const
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
bool Create2dModelTrainingJobRequest::fromJson(const web::json::value& val)
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
            Create2dModelTrainingJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string Create2dModelTrainingJobRequest::getAuthorization() const
{
    return authorization_;
}

void Create2dModelTrainingJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool Create2dModelTrainingJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void Create2dModelTrainingJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string Create2dModelTrainingJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void Create2dModelTrainingJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool Create2dModelTrainingJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void Create2dModelTrainingJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string Create2dModelTrainingJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void Create2dModelTrainingJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool Create2dModelTrainingJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void Create2dModelTrainingJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string Create2dModelTrainingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void Create2dModelTrainingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool Create2dModelTrainingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void Create2dModelTrainingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

Create2dModelTrainingJobReq Create2dModelTrainingJobRequest::getBody() const
{
    return body_;
}

void Create2dModelTrainingJobRequest::setBody(const Create2dModelTrainingJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool Create2dModelTrainingJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void Create2dModelTrainingJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


