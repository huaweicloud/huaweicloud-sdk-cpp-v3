

#include "huaweicloud/metastudio/v1/model/CreatePictureModelingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePictureModelingJobRequest::CreatePictureModelingJobRequest()
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

CreatePictureModelingJobRequest::~CreatePictureModelingJobRequest() = default;

void CreatePictureModelingJobRequest::validate()
{
}

web::json::value CreatePictureModelingJobRequest::toJson() const
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
bool CreatePictureModelingJobRequest::fromJson(const web::json::value& val)
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
            CreatePictureModelingJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePictureModelingJobRequest::getAuthorization() const
{
    return authorization_;
}

void CreatePictureModelingJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreatePictureModelingJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreatePictureModelingJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreatePictureModelingJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreatePictureModelingJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreatePictureModelingJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreatePictureModelingJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreatePictureModelingJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreatePictureModelingJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreatePictureModelingJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreatePictureModelingJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreatePictureModelingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreatePictureModelingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreatePictureModelingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreatePictureModelingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreatePictureModelingJobRequestBody CreatePictureModelingJobRequest::getBody() const
{
    return body_;
}

void CreatePictureModelingJobRequest::setBody(const CreatePictureModelingJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePictureModelingJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePictureModelingJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


