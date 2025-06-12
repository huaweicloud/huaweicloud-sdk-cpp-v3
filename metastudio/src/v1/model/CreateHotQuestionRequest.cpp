

#include "huaweicloud/metastudio/v1/model/CreateHotQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateHotQuestionRequest::CreateHotQuestionRequest()
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

CreateHotQuestionRequest::~CreateHotQuestionRequest() = default;

void CreateHotQuestionRequest::validate()
{
}

web::json::value CreateHotQuestionRequest::toJson() const
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
bool CreateHotQuestionRequest::fromJson(const web::json::value& val)
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
            CreateHotQuestionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateHotQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void CreateHotQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateHotQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateHotQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateHotQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateHotQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateHotQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateHotQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateHotQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateHotQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateHotQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateHotQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateHotQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateHotQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateHotQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateHotQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateHotQuestionReq CreateHotQuestionRequest::getBody() const
{
    return body_;
}

void CreateHotQuestionRequest::setBody(const CreateHotQuestionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHotQuestionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHotQuestionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


