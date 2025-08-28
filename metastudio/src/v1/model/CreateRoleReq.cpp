

#include "huaweicloud/metastudio/v1/model/CreateRoleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateRoleReq::CreateRoleReq()
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

CreateRoleReq::~CreateRoleReq() = default;

void CreateRoleReq::validate()
{
}

web::json::value CreateRoleReq::toJson() const
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
bool CreateRoleReq::fromJson(const web::json::value& val)
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


std::string CreateRoleReq::getName() const
{
    return name_;
}

void CreateRoleReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRoleReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRoleReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateRoleReq::getDescription() const
{
    return description_;
}

void CreateRoleReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateRoleReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateRoleReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<RoleBusinessReq>& CreateRoleReq::getRoleBusinessList()
{
    return roleBusinessList_;
}

void CreateRoleReq::setRoleBusinessList(const std::vector<RoleBusinessReq>& value)
{
    roleBusinessList_ = value;
    roleBusinessListIsSet_ = true;
}

bool CreateRoleReq::roleBusinessListIsSet() const
{
    return roleBusinessListIsSet_;
}

void CreateRoleReq::unsetroleBusinessList()
{
    roleBusinessListIsSet_ = false;
}

LlmSourceEnum CreateRoleReq::getLlmSource() const
{
    return llmSource_;
}

void CreateRoleReq::setLlmSource(const LlmSourceEnum& value)
{
    llmSource_ = value;
    llmSourceIsSet_ = true;
}

bool CreateRoleReq::llmSourceIsSet() const
{
    return llmSourceIsSet_;
}

void CreateRoleReq::unsetllmSource()
{
    llmSourceIsSet_ = false;
}

std::string CreateRoleReq::getLlmConfigId() const
{
    return llmConfigId_;
}

void CreateRoleReq::setLlmConfigId(const std::string& value)
{
    llmConfigId_ = value;
    llmConfigIdIsSet_ = true;
}

bool CreateRoleReq::llmConfigIdIsSet() const
{
    return llmConfigIdIsSet_;
}

void CreateRoleReq::unsetllmConfigId()
{
    llmConfigIdIsSet_ = false;
}

std::vector<RolePluginConfigInfo>& CreateRoleReq::getPluginConfigList()
{
    return pluginConfigList_;
}

void CreateRoleReq::setPluginConfigList(const std::vector<RolePluginConfigInfo>& value)
{
    pluginConfigList_ = value;
    pluginConfigListIsSet_ = true;
}

bool CreateRoleReq::pluginConfigListIsSet() const
{
    return pluginConfigListIsSet_;
}

void CreateRoleReq::unsetpluginConfigList()
{
    pluginConfigListIsSet_ = false;
}

std::vector<std::string>& CreateRoleReq::getMcpServerIdList()
{
    return mcpServerIdList_;
}

void CreateRoleReq::setMcpServerIdList(const std::vector<std::string>& value)
{
    mcpServerIdList_ = value;
    mcpServerIdListIsSet_ = true;
}

bool CreateRoleReq::mcpServerIdListIsSet() const
{
    return mcpServerIdListIsSet_;
}

void CreateRoleReq::unsetmcpServerIdList()
{
    mcpServerIdListIsSet_ = false;
}

std::string CreateRoleReq::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void CreateRoleReq::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool CreateRoleReq::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void CreateRoleReq::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

}
}
}
}
}


