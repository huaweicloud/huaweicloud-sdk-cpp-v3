

#include "huaweicloud/metastudio/v1/model/CreateLlmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateLlmConfigResponse::CreateLlmConfigResponse()
{
    llmConfigId_ = "";
    llmConfigIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateLlmConfigResponse::~CreateLlmConfigResponse() = default;

void CreateLlmConfigResponse::validate()
{
}

web::json::value CreateLlmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(llmConfigIdIsSet_) {
        val[utility::conversions::to_string_t("llm_config_id")] = ModelBase::toJson(llmConfigId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateLlmConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("llm_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("llm_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLlmConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateLlmConfigResponse::getLlmConfigId() const
{
    return llmConfigId_;
}

void CreateLlmConfigResponse::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool CreateLlmConfigResponse::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void CreateLlmConfigResponse::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

std::string CreateLlmConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateLlmConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateLlmConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateLlmConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


