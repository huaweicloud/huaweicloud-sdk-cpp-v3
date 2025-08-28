

#include "huaweicloud/metastudio/v1/model/UpdateRoleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateRoleReq::UpdateRoleReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    roleBusinessListIsSet_ = false;
    llmSourceIsSet_ = false;
    llmConfigId_ = "";
    llmConfigIdIsSet_ = false;
    pluginConfigListIsSet_ = false;
    mcpServerIdListIsSet_ = false;
    instructionLibraryId_ = "";
    instructionLibraryIdIsSet_ = false;
}

UpdateRoleReq::~UpdateRoleReq() = default;

void UpdateRoleReq::validate()
{
}

web::json::value UpdateRoleReq::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(mcpServerIdListIsSet_) {
        val[utility::conversions::to_string_t("mcp_server_id_list")] = ModelBase::toJson(mcpServerIdList_);
    }
    if(instructionLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_library_id")] = ModelBase::toJson(instructionLibraryId_);
    }

    return val;
}
bool UpdateRoleReq::fromJson(const web::json::value& val)
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
            std::vector<RoleBusinessReq> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("mcp_server_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mcp_server_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMcpServerIdList(refVal);
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
    return ok;
}


std::string UpdateRoleReq::getName() const
{
    return name_;
}

void UpdateRoleReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRoleReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRoleReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateRoleReq::getDescription() const
{
    return description_;
}

void UpdateRoleReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateRoleReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateRoleReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<RoleBusinessReq>& UpdateRoleReq::getRoleBusinessList()
{
    return roleBusinessList_;
}

void UpdateRoleReq::setRoleBusinessList(const std::vector<RoleBusinessReq>& value)
{
    roleBusinessList_ = value;
    roleBusinessListIsSet_ = true;
}

bool UpdateRoleReq::roleBusinessListIsSet() const
{
    return roleBusinessListIsSet_;
}

void UpdateRoleReq::unsetroleBusinessList()
{
    roleBusinessListIsSet_ = false;
}

LlmSourceEnum UpdateRoleReq::getLlmSource() const
{
    return llmSource_;
}

void UpdateRoleReq::setLlmSource(const LlmSourceEnum& value)
{
    llmSource_ = value;
    llmSourceIsSet_ = true;
}

bool UpdateRoleReq::llmSourceIsSet() const
{
    return llmSourceIsSet_;
}

void UpdateRoleReq::unsetllmSource()
{
    llmSourceIsSet_ = false;
}

std::string UpdateRoleReq::getLlmConfigId() const
{
    return llmConfigId_;
}

void UpdateRoleReq::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool UpdateRoleReq::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void UpdateRoleReq::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

std::vector<RolePluginConfigInfo>& UpdateRoleReq::getPluginConfigList()
{
    return pluginConfigList_;
}

void UpdateRoleReq::setPluginConfigList(const std::vector<RolePluginConfigInfo>& value)
{
    pluginConfigList_ = value;
    pluginConfigListIsSet_ = true;
}

bool UpdateRoleReq::pluginConfigListIsSet() const
{
    return pluginConfigListIsSet_;
}

void UpdateRoleReq::unsetpluginConfigList()
{
    pluginConfigListIsSet_ = false;
}

std::vector<std::string>& UpdateRoleReq::getMcpServerIdList()
{
    return mcpServerIdList_;
}

void UpdateRoleReq::setMcpServerIdList(const std::vector<std::string>& value)
{
    mcpServerIdList_ = value;
    mcpServerIdListIsSet_ = true;
}

bool UpdateRoleReq::mcpServerIdListIsSet() const
{
    return mcpServerIdListIsSet_;
}

void UpdateRoleReq::unsetmcpServerIdList()
{
    mcpServerIdListIsSet_ = false;
}

std::string UpdateRoleReq::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void UpdateRoleReq::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool UpdateRoleReq::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void UpdateRoleReq::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

}
}
}
}
}


