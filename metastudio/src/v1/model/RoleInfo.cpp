

#include "huaweicloud/metastudio/v1/model/RoleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RoleInfo::RoleInfo()
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
}

RoleInfo::~RoleInfo() = default;

void RoleInfo::validate()
{
}

web::json::value RoleInfo::toJson() const
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

    return val;
}
bool RoleInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RoleInfo::getRoleId() const
{
    return roleId_;
}

void RoleInfo::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool RoleInfo::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void RoleInfo::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string RoleInfo::getName() const
{
    return name_;
}

void RoleInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RoleInfo::nameIsSet() const
{
    return nameIsSet_;
}

void RoleInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string RoleInfo::getDescription() const
{
    return description_;
}

void RoleInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RoleInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RoleInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<RoleBusinessInfo>& RoleInfo::getRoleBusinessList()
{
    return roleBusinessList_;
}

void RoleInfo::setRoleBusinessList(const std::vector<RoleBusinessInfo>& value)
{
    roleBusinessList_ = value;
    roleBusinessListIsSet_ = true;
}

bool RoleInfo::roleBusinessListIsSet() const
{
    return roleBusinessListIsSet_;
}

void RoleInfo::unsetroleBusinessList()
{
    roleBusinessListIsSet_ = false;
}

LlmSourceEnum RoleInfo::getLlmSource() const
{
    return llmSource_;
}

void RoleInfo::setLlmSource(const LlmSourceEnum& value)
{
    llmSource_ = value;
    llmSourceIsSet_ = true;
}

bool RoleInfo::llmSourceIsSet() const
{
    return llmSourceIsSet_;
}

void RoleInfo::unsetllmSource()
{
    llmSourceIsSet_ = false;
}

std::string RoleInfo::getLlmConfigId() const
{
    return llmConfigId_;
}

void RoleInfo::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool RoleInfo::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void RoleInfo::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

std::vector<RolePluginConfigInfo>& RoleInfo::getPluginConfigList()
{
    return pluginConfigList_;
}

void RoleInfo::setPluginConfigList(const std::vector<RolePluginConfigInfo>& value)
{
    pluginConfigList_ = value;
    pluginConfigListIsSet_ = true;
}

bool RoleInfo::pluginConfigListIsSet() const
{
    return pluginConfigListIsSet_;
}

void RoleInfo::unsetpluginConfigList()
{
    pluginConfigListIsSet_ = false;
}

std::vector<McpServerBaseInfo>& RoleInfo::getMcpServerInfoList()
{
    return mcpServerInfoList_;
}

void RoleInfo::setMcpServerInfoList(const std::vector<McpServerBaseInfo>& value)
{
    mcpServerInfoList_ = value;
    mcpServerInfoListIsSet_ = true;
}

bool RoleInfo::mcpServerInfoListIsSet() const
{
    return mcpServerInfoListIsSet_;
}

void RoleInfo::unsetmcpServerInfoList()
{
    mcpServerInfoListIsSet_ = false;
}

std::string RoleInfo::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void RoleInfo::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool RoleInfo::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void RoleInfo::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

std::string RoleInfo::getCreateTime() const
{
    return createTime_;
}

void RoleInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool RoleInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void RoleInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string RoleInfo::getUpdateTime() const
{
    return updateTime_;
}

void RoleInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool RoleInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void RoleInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


