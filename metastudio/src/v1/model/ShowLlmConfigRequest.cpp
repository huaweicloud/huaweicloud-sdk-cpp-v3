

#include "huaweicloud/metastudio/v1/model/ShowLlmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowLlmConfigRequest::ShowLlmConfigRequest()
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
}

ShowLlmConfigRequest::~ShowLlmConfigRequest() = default;

void ShowLlmConfigRequest::validate()
{
}

web::json::value ShowLlmConfigRequest::toJson() const
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

    return val;
}
bool ShowLlmConfigRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowLlmConfigRequest::getAuthorization() const
{
    return authorization_;
}

void ShowLlmConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowLlmConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowLlmConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowLlmConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowLlmConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowLlmConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowLlmConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowLlmConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowLlmConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowLlmConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowLlmConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowLlmConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowLlmConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowLlmConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowLlmConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowLlmConfigRequest::getLlmConfigId() const
{
    return llmConfigId_;
}

void ShowLlmConfigRequest::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool ShowLlmConfigRequest::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void ShowLlmConfigRequest::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

}
}
}
}
}


