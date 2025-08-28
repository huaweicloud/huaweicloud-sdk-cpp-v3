

#include "huaweicloud/metastudio/v1/model/UpdateLlmConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateLlmConfigReq::UpdateLlmConfigReq()
{
    name_ = "";
    nameIsSet_ = false;
    llmUrl_ = "";
    llmUrlIsSet_ = false;
    apiKey_ = "";
    apiKeyIsSet_ = false;
}

UpdateLlmConfigReq::~UpdateLlmConfigReq() = default;

void UpdateLlmConfigReq::validate()
{
}

web::json::value UpdateLlmConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(llmUrlIsSet_) {
        val[utility::conversions::to_string_t("llm_url")] = ModelBase::toJson(llmUrl_);
    }
    if(apiKeyIsSet_) {
        val[utility::conversions::to_string_t("api_key")] = ModelBase::toJson(apiKey_);
    }

    return val;
}
bool UpdateLlmConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("llm_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("llm_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLlmUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiKey(refVal);
        }
    }
    return ok;
}


std::string UpdateLlmConfigReq::getName() const
{
    return name_;
}

void UpdateLlmConfigReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateLlmConfigReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateLlmConfigReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateLlmConfigReq::getLlmUrl() const
{
    return llmUrl_;
}

void UpdateLlmConfigReq::setLlmUrl(const std::string& value)
{
    llmUrl_ = value;
    llmUrlIsSet_ = true;
}

bool UpdateLlmConfigReq::llmUrlIsSet() const
{
    return llmUrlIsSet_;
}

void UpdateLlmConfigReq::unsetllmUrl()
{
    llmUrlIsSet_ = false;
}

std::string UpdateLlmConfigReq::getApiKey() const
{
    return apiKey_;
}

void UpdateLlmConfigReq::setApiKey(const std::string& value)
{
    apiKey_ = value;
    apiKeyIsSet_ = true;
}

bool UpdateLlmConfigReq::apiKeyIsSet() const
{
    return apiKeyIsSet_;
}

void UpdateLlmConfigReq::unsetapiKey()
{
    apiKeyIsSet_ = false;
}

}
}
}
}
}


