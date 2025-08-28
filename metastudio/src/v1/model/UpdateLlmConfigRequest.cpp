

#include "huaweicloud/metastudio/v1/model/UpdateLlmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateLlmConfigRequest::UpdateLlmConfigRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    llmConfigId_ = "";
    llmConfigIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLlmConfigRequest::~UpdateLlmConfigRequest() = default;

void UpdateLlmConfigRequest::validate()
{
}

web::json::value UpdateLlmConfigRequest::toJson() const
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
    if(llmConfigIdIsSet_) {
        val[utility::conversions::to_string_t("llm_config_id")] = ModelBase::toJson(llmConfigId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLlmConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("llm_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("llm_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLlmConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateLlmConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLlmConfigRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateLlmConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateLlmConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateLlmConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateLlmConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateLlmConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateLlmConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateLlmConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateLlmConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateLlmConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateLlmConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateLlmConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateLlmConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateLlmConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateLlmConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateLlmConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateLlmConfigRequest::getLlmConfigId() const
{
    return llmConfigId_;
}

void UpdateLlmConfigRequest::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool UpdateLlmConfigRequest::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void UpdateLlmConfigRequest::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

UpdateLlmConfigReq UpdateLlmConfigRequest::getBody() const
{
    return body_;
}

void UpdateLlmConfigRequest::setBody(const UpdateLlmConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLlmConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLlmConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


