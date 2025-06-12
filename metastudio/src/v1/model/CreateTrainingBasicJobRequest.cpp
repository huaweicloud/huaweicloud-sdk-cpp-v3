

#include "huaweicloud/metastudio/v1/model/CreateTrainingBasicJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingBasicJobRequest::CreateTrainingBasicJobRequest()
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

CreateTrainingBasicJobRequest::~CreateTrainingBasicJobRequest() = default;

void CreateTrainingBasicJobRequest::validate()
{
}

web::json::value CreateTrainingBasicJobRequest::toJson() const
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
bool CreateTrainingBasicJobRequest::fromJson(const web::json::value& val)
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


std::string CreateTrainingBasicJobRequest::getAuthorization() const
{
    return authorization_;
}

void CreateTrainingBasicJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateTrainingBasicJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateTrainingBasicJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateTrainingBasicJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTrainingBasicJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTrainingBasicJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTrainingBasicJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateTrainingBasicJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateTrainingBasicJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateTrainingBasicJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateTrainingBasicJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateTrainingBasicJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTrainingBasicJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTrainingBasicJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTrainingBasicJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateTrainingJobReq CreateTrainingBasicJobRequest::getBody() const
{
    return body_;
}

void CreateTrainingBasicJobRequest::setBody(const CreateTrainingJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrainingBasicJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrainingBasicJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


