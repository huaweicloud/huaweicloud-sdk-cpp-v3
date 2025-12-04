

#include "huaweicloud/metastudio/v1/model/LlmConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LlmConfigInfo::LlmConfigInfo()
{
    llmConfigId_ = "";
    llmConfigIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    llmUrl_ = "";
    llmUrlIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

LlmConfigInfo::~LlmConfigInfo() = default;

void LlmConfigInfo::validate()
{
}

web::json::value LlmConfigInfo::toJson() const
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
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool LlmConfigInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
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
    return ok;
}


std::string LlmConfigInfo::getLlmConfigId() const
{
    return llmConfigId_;
}

void LlmConfigInfo::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool LlmConfigInfo::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void LlmConfigInfo::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

std::string LlmConfigInfo::getName() const
{
    return name_;
}

void LlmConfigInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LlmConfigInfo::nameIsSet() const
{
    return nameIsSet_;
}

void LlmConfigInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string LlmConfigInfo::getLlmUrl() const
{
    return llmUrl_;
}

void LlmConfigInfo::setLlmUrl(const std::string& value)
{
    llmUrl_ = value;
    llmUrlIsSet_ = true;
}

bool LlmConfigInfo::llmUrlIsSet() const
{
    return llmUrlIsSet_;
}

void LlmConfigInfo::unsetllmUrl()
{
    llmUrlIsSet_ = false;
}

std::string LlmConfigInfo::getModel() const
{
    return model_;
}

void LlmConfigInfo::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool LlmConfigInfo::modelIsSet() const
{
    return modelIsSet_;
}

void LlmConfigInfo::unsetmodel()
{
    modelIsSet_ = false;
}

std::string LlmConfigInfo::getCreateTime() const
{
    return createTime_;
}

void LlmConfigInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool LlmConfigInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void LlmConfigInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string LlmConfigInfo::getUpdateTime() const
{
    return updateTime_;
}

void LlmConfigInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool LlmConfigInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void LlmConfigInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


