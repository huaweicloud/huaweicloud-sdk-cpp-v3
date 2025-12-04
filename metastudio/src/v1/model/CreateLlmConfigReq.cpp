

#include "huaweicloud/metastudio/v1/model/CreateLlmConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateLlmConfigReq::CreateLlmConfigReq()
{
    name_ = "";
    nameIsSet_ = false;
    llmUrl_ = "";
    llmUrlIsSet_ = false;
    apiKey_ = "";
    apiKeyIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
}

CreateLlmConfigReq::~CreateLlmConfigReq() = default;

void CreateLlmConfigReq::validate()
{
}

web::json::value CreateLlmConfigReq::toJson() const
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
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }

    return val;
}
bool CreateLlmConfigReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    return ok;
}


std::string CreateLlmConfigReq::getName() const
{
    return name_;
}

void CreateLlmConfigReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateLlmConfigReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateLlmConfigReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateLlmConfigReq::getLlmUrl() const
{
    return llmUrl_;
}

void CreateLlmConfigReq::setLlmUrl(const std::string& value)
{
    llmUrl_ = value;
    llmUrlIsSet_ = true;
}

bool CreateLlmConfigReq::llmUrlIsSet() const
{
    return llmUrlIsSet_;
}

void CreateLlmConfigReq::unsetllmUrl()
{
    llmUrlIsSet_ = false;
}

std::string CreateLlmConfigReq::getApiKey() const
{
    return apiKey_;
}

void CreateLlmConfigReq::setApiKey(const std::string& value)
{
    apiKey_ = value;
    apiKeyIsSet_ = true;
}

bool CreateLlmConfigReq::apiKeyIsSet() const
{
    return apiKeyIsSet_;
}

void CreateLlmConfigReq::unsetapiKey()
{
    apiKeyIsSet_ = false;
}

std::string CreateLlmConfigReq::getModel() const
{
    return model_;
}

void CreateLlmConfigReq::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool CreateLlmConfigReq::modelIsSet() const
{
    return modelIsSet_;
}

void CreateLlmConfigReq::unsetmodel()
{
    modelIsSet_ = false;
}

}
}
}
}
}


