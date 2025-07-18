

#include "huaweicloud/metastudio/v1/model/CreateTrainingMiddleJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingMiddleJobRequest::CreateTrainingMiddleJobRequest()
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

CreateTrainingMiddleJobRequest::~CreateTrainingMiddleJobRequest() = default;

void CreateTrainingMiddleJobRequest::validate()
{
}

web::json::value CreateTrainingMiddleJobRequest::toJson() const
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
bool CreateTrainingMiddleJobRequest::fromJson(const web::json::value& val)
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
            CreateTrainingJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTrainingMiddleJobRequest::getAuthorization() const
{
    return authorization_;
}

void CreateTrainingMiddleJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateTrainingMiddleJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateTrainingMiddleJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateTrainingMiddleJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTrainingMiddleJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTrainingMiddleJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTrainingMiddleJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateTrainingMiddleJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateTrainingMiddleJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateTrainingMiddleJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateTrainingMiddleJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateTrainingMiddleJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTrainingMiddleJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTrainingMiddleJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTrainingMiddleJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateTrainingJobReq CreateTrainingMiddleJobRequest::getBody() const
{
    return body_;
}

void CreateTrainingMiddleJobRequest::setBody(const CreateTrainingJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrainingMiddleJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrainingMiddleJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


