

#include "huaweicloud/metastudio/v1/model/ShowLlmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowLlmConfigResponse::ShowLlmConfigResponse()
{
    llmConfigId_ = "";
    llmConfigIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    llmUrl_ = "";
    llmUrlIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowLlmConfigResponse::~ShowLlmConfigResponse() = default;

void ShowLlmConfigResponse::validate()
{
}

web::json::value ShowLlmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(llmConfigIdIsSet_) {
        val[utility::conversions::to_string_t("llm_config_id")] = ModelBase::toJson(llmConfigId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(llmUrlIsSet_) {
        val[utility::conversions::to_string_t("llm_url")] = ModelBase::toJson(llmUrl_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowLlmConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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


std::string ShowLlmConfigResponse::getLlmConfigId() const
{
    return llmConfigId_;
}

void ShowLlmConfigResponse::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool ShowLlmConfigResponse::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void ShowLlmConfigResponse::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

std::string ShowLlmConfigResponse::getName() const
{
    return name_;
}

void ShowLlmConfigResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowLlmConfigResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowLlmConfigResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowLlmConfigResponse::getLlmUrl() const
{
    return llmUrl_;
}

void ShowLlmConfigResponse::setLlmUrl(const std::string& value)
{
    llmUrl_ = value;
    llmUrlIsSet_ = true;
}

bool ShowLlmConfigResponse::llmUrlIsSet() const
{
    return llmUrlIsSet_;
}

void ShowLlmConfigResponse::unsetllmUrl()
{
    llmUrlIsSet_ = false;
}

std::string ShowLlmConfigResponse::getCreateTime() const
{
    return createTime_;
}

void ShowLlmConfigResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowLlmConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowLlmConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowLlmConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowLlmConfigResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowLlmConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowLlmConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowLlmConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowLlmConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowLlmConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowLlmConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


