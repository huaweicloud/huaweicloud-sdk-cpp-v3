

#include "huaweicloud/metastudio/v1/model/ShowRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowRoleResponse::ShowRoleResponse()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    roleBusinessListIsSet_ = false;
    llmSourceIsSet_ = false;
    llmConfigId_ = "";
    llmConfigIdIsSet_ = false;
    pluginConfigListIsSet_ = false;
    mcpServerInfoListIsSet_ = false;
    instructionLibraryId_ = "";
    instructionLibraryIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowRoleResponse::~ShowRoleResponse() = default;

void ShowRoleResponse::validate()
{
}

web::json::value ShowRoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(roleBusinessListIsSet_) {
        val[utility::conversions::to_string_t("role_business_list")] = ModelBase::toJson(roleBusinessList_);
    }
    if(llmSourceIsSet_) {
        val[utility::conversions::to_string_t("llm_source")] = ModelBase::toJson(llmSource_);
    }
    if(llmConfigIdIsSet_) {
        val[utility::conversions::to_string_t("llm_config_id")] = ModelBase::toJson(llmConfigId_);
    }
    if(pluginConfigListIsSet_) {
        val[utility::conversions::to_string_t("plugin_config_list")] = ModelBase::toJson(pluginConfigList_);
    }
    if(mcpServerInfoListIsSet_) {
        val[utility::conversions::to_string_t("mcp_server_info_list")] = ModelBase::toJson(mcpServerInfoList_);
    }
    if(instructionLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_library_id")] = ModelBase::toJson(instructionLibraryId_);
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
bool ShowRoleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_business_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_business_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RoleBusinessInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleBusinessList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("llm_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("llm_source"));
        if(!fieldValue.is_null())
        {
            LlmSourceEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLlmSource(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RolePluginConfigInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginConfigList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mcp_server_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mcp_server_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<McpServerBaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMcpServerInfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instruction_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstructionLibraryId(refVal);
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


std::string ShowRoleResponse::getRoleId() const
{
    return roleId_;
}

void ShowRoleResponse::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ShowRoleResponse::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ShowRoleResponse::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ShowRoleResponse::getName() const
{
    return name_;
}

void ShowRoleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowRoleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowRoleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowRoleResponse::getDescription() const
{
    return description_;
}

void ShowRoleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowRoleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowRoleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<RoleBusinessInfo>& ShowRoleResponse::getRoleBusinessList()
{
    return roleBusinessList_;
}

void ShowRoleResponse::setRoleBusinessList(const std::vector<RoleBusinessInfo>& value)
{
    roleBusinessList_ = value;
    roleBusinessListIsSet_ = true;
}

bool ShowRoleResponse::roleBusinessListIsSet() const
{
    return roleBusinessListIsSet_;
}

void ShowRoleResponse::unsetroleBusinessList()
{
    roleBusinessListIsSet_ = false;
}

LlmSourceEnum ShowRoleResponse::getLlmSource() const
{
    return llmSource_;
}

void ShowRoleResponse::setLlmSource(const LlmSourceEnum& value)
{
    llmSource_ = value;
    llmSourceIsSet_ = true;
}

bool ShowRoleResponse::llmSourceIsSet() const
{
    return llmSourceIsSet_;
}

void ShowRoleResponse::unsetllmSource()
{
    llmSourceIsSet_ = false;
}

std::string ShowRoleResponse::getLlmConfigId() const
{
    return llmConfigId_;
}

void ShowRoleResponse::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool ShowRoleResponse::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void ShowRoleResponse::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

std::vector<RolePluginConfigInfo>& ShowRoleResponse::getPluginConfigList()
{
    return pluginConfigList_;
}

void ShowRoleResponse::setPluginConfigList(const std::vector<RolePluginConfigInfo>& value)
{
    pluginConfigList_ = value;
    pluginConfigListIsSet_ = true;
}

bool ShowRoleResponse::pluginConfigListIsSet() const
{
    return pluginConfigListIsSet_;
}

void ShowRoleResponse::unsetpluginConfigList()
{
    pluginConfigListIsSet_ = false;
}

std::vector<McpServerBaseInfo>& ShowRoleResponse::getMcpServerInfoList()
{
    return mcpServerInfoList_;
}

void ShowRoleResponse::setMcpServerInfoList(const std::vector<McpServerBaseInfo>& value)
{
    mcpServerInfoList_ = value;
    mcpServerInfoListIsSet_ = true;
}

bool ShowRoleResponse::mcpServerInfoListIsSet() const
{
    return mcpServerInfoListIsSet_;
}

void ShowRoleResponse::unsetmcpServerInfoList()
{
    mcpServerInfoListIsSet_ = false;
}

std::string ShowRoleResponse::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void ShowRoleResponse::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool ShowRoleResponse::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void ShowRoleResponse::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

std::string ShowRoleResponse::getCreateTime() const
{
    return createTime_;
}

void ShowRoleResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowRoleResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowRoleResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowRoleResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowRoleResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowRoleResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowRoleResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowRoleResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowRoleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowRoleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowRoleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


